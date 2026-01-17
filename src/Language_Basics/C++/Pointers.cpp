#include<bits/stdc++.h>

using namespace std;

int main(){

    int a = 5;
    // pointer to a variable
    int *p_a = &a;

    // pointer to an array
    int A[10]={0,1,2,3,5,8};

    printf("A %d is equal to &A[0] %d\n",&A,&A[0]);
    // Adding one to pointer will points to address of next in sequence
    printf("*(A+1) %d is equal to A[1] %d\n",*(A+1),A[1]);
    cout<<p_a << endl;
    // changed the value at the location
    *p_a = 5;

    cout<< *p_a<< endl;
    
    // double pointers

    int **p_p_a = &p_a;

    cout<< "value at *p_p_a: "<<*p_p_a<<" = p_a: "<< p_a << endl ;
    cout<< "value at **p_p_a: "<<**p_p_a<<" = a: "<< a << endl ;

    cout<< p_p_a << endl; // based on the architecture of the system
    /*
    increments by the size of a pointer as storing a pointer 
    and pointer block is 8 bytes sized
    */
    cout<< p_p_a + 1 << endl; 
    cout<< p_p_a - 1 << endl;
    return 0;
}