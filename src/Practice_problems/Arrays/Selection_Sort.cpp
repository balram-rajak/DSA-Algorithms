
#include<bits/stdc++.h>
#include "Timer.h"

using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main(){

    Timer timer;

    int n;
    cin >> n;

    int a[n];
    int desc[n];

    for(int i=0; i<n; i++){

        cin>>a[i];
        desc[i] = a[i];
    }

    // Ascending
    for(int i = 0; i<n-1; i++){

        int min = i;

        for(int j = i+1; j<=n-1; j++){

            if(a[min] > a[j]) min=j;
        }
        swap(a[min],a[i]);
    }

    
    // Descending
    for(int i = 0; i<n-1; i++){

        int max = i;

        for(int j = i+1; j<=n-1; j++){

            if(desc[max] < desc[j]) max=j;
        }
        swap(desc[max],desc[i]);
    }

    for(int i=0; i<n; i++){

        cout<< a[i]<<" ";
    }

    cout<<endl;
    
    for(int i=0; i<n; i++){

        cout<< desc[i]<<" ";
    }
}