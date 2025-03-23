#include<bits/stdc++.h>

using namespace std;

static void printNumbers(int rot, int size){

    int numbers[size];

    for(int i=0; i< size; i++){
        cin>>numbers[i];
    }

    int start = size-rot;
    for(int i=start; i< size; i++){
        cout<<numbers[i]<< " ";
    }
    for(int i=0; i<start; i++){
        cout<<numbers[i]<< " ";
    }
}

static void rotate(){
    
    int t;
    cin>>t;

    while(t--){

        int size, rotation;
        cin>>size;
        cin>>rotation;
        

        int rot = size - rotation;

        if(rot == 0){
            string value;
            cin.ignore();
            getline(cin, value);
            cout<< value;
        }
        
        if(rot > 0){
            printNumbers(rot, size);
            
        }
        else if(rot < 0){

           int rot = rotation%size;

           if(rot == 0){
                string value;
                cin.ignore();
                getline(cin, value);
                cout<< value;
            }
            else printNumbers(rot, size);    
        }
        cout<< endl;
    }
}

int main(){

    rotate();
    return 0;
}