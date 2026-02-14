// #include<bits/stdc++.h>
using namespace std;
int main(){

    char char1='f';
    char char2='t';
    char letter;
    int x;
    int y;

    // It will print Ascii value of 'f' using type casting
    cout<<(int) char1<<endl;
    // subtracts ASCII value of char1 from char2
    cout<<char2-char1<<endl;

    cin>> x >> letter >> y;
    // letter will take only one character as input

    cout<<x << " "<< y<< " "<< letter<< " "<<(int) letter;

    return 0;
}