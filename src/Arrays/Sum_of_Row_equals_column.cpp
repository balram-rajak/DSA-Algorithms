#include<bits/stdc++.h>

using namespace std;

int sumOfRowCol(int N, int M, int *A){

    while(N--){
        int sumCol, sumRow =0;
        while(M--){
            sumCol+=A[N][M];
            sumRow+=A[M][N];
        }
        if(sumCol - sumRow){
            return 0;
        }
    }
    return 1;
}

int main(){

    int n,m;

    cin>>n >> m;

    int N=n;
    int M=m;
    int A[N][M];

    while(N--){
        while(M--){
            A[N][M];
        }
    }
    cout<< sumOfRowCol(n,m, A);
    return 0;
}