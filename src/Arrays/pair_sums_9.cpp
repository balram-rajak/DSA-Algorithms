#include<bits/stdc++.h>
// #include "Timer.h"

using namespace std;
int freq[1000000+1] ={0};
int main(){

    // Timer timer;

    int size, k;
	
    cin>> size;
	int a[size];
    cin>>k;

    for(int i =0; i<size; i++){
        int temp;
        cin>>temp;
		a[i]=temp;
        freq[temp]++;
    }

    int center = k/2;
    bool even=k%2==0;
	if(even && freq[center]>1) {
		cout<<"YES";
		return 0;	
	}

    int start;
    if(even) start=k/2 -1;
    else start=k/2;

    for(int i=start; i>0; i--){
		if(freq[i]>0){
			int next=k-i;
			if(next<=1000000 && freq[next]>0) {
				cout<<"YES";
				return 0;
			}
		}
        
    }
    cout<<"NO";

}