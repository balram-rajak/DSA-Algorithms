// // https://codeforces.com/contest/2064/problem/B

// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     int T, size;
//     cin>>T

//     while(T--){

//         cin>> size;
//         cin>> intial;
//         int ele;
//         int prepos=0;
//         int bsize=0;
//         int duplicate=0;
//         int score =0;
//         int lastEle=initial;
//         int l;
//         int r;
//         cin>>ele; 

//         l=ele;
//         for(int i=0; i<size; i++){

//             if( ele == initial && i - prepos > 1){

//                 duplicate++;
//                 int newBsize = i - prepos-1;
//                 int newScore = size - newBsize -duplicate;
//                 prepos=i;
//                 l=initial;
//                 if( newScore > score)
//                 {
//                     score = newScore;
//                     r=lastEle;
//                 }
//                 else if( newScore == score)
//                 {
//                     if( size - newBsize < size - bsize){
//                         r=ele;
//                     }
//                 }

//             }
//             else {
//                 if( l == initial) l=ele;
//                 r=ele
//             };

//             lastele=ele;
//         }
//         if( l == r) cout<<0;
//     }

//     return 0;
// }