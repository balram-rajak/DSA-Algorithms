#include<iostream>

using namespace std;

long maxApples(int n,int apples[]){
int max=0;

for(int i=0;i<n;i++){
int sum=apples[i];
    for(int k=i+1;k<n and apples[i]<=apples[k];k++){
        sum+=apples[i];
    }
    for(int k=i-1; k>=0 and apples[k]>=apples[i];k--){
        sum+=apples[i];
    }
    
    max=max<sum ? sum : max;
}
return max;
}

int main(int argc, char const *argv[])
{
    int arr[]={15,40,16,20,22,15};
    
    cerr<<maxApples(sizeof(arr)/sizeof(arr[0]),arr)<<endl;
    return 0;
}
