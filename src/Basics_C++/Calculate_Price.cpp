#include<bits/stdc++.h>

using namespace std;

int main(){

    float temp=-1;
    float total=0;
    float mrp=0;
    float totalSavings=0;
    float totalGst=0;
    for(;;){

        cin>>temp;
        // cout<<"Input:"<<temp;
        if(temp==-1) break;
        else{
            float saving=temp*0.10;
            float gst=temp*0.12;
            float price=temp-saving+gst;
            cout<<price<<endl;
            total+=price;
            mrp+=temp;
            totalSavings+=saving;
            totalGst+=gst;
        }
        temp=-1;
    }
    cout<<"MRP: "<<mrp<<endl;
    cout<<"Total: "<<total<<endl;
    cout<<"totalSavings: "<<totalSavings<<endl;
    cout<<"totalGst: "<<totalGst<<endl;
    // cout<<"Total: "<<total<<endl;
    return 0;
}