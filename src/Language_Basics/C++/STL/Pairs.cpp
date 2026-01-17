#include<iostream>
#include<utility>
#include<string>

// #include<bits/stdc++.h>

// Pairs concept discussion
using namespace std;

int main(){

    pair<int,string> p = {2, "abcd"};

    pair<int, string> p1{4,"gsg"};
    p1=p;

    pair<int, string> &p2 = p;

    p = {3, "abcd"};

    pair<int, string> p3 = make_pair(2, "abcd");

    // Copy by value not by reference
    cout<< p1.first << " " << p1.second << endl;

    cout<< p2.first << " " << p2.second << endl;

    // Swapping two pairs of data

    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int,int> p_array [3] ;

    for(int i=0; i<3; i++)
    {
        p_array[i] = {a[i],b[i]};
    }
    swap(p_array[0], p_array[2]);

    int n = sizeof(p_array)/sizeof(p_array[0]);
    for(int i=0; i<n; i++){
        cout<<p_array[i].first << " "<< p_array[i].second<< endl;
    }

}