#include<iostream>

using namespace std;

int maxApples(int input1,int input2[]){

    long max=INT64_MIN;
    long seriesEff=input2[0];
    long smallest[2]={input2[0],0};
    long seriesMax=input2[0];

    for(int i=1;i<input1;i++){

        if(seriesEff<input2[i]){

            if(seriesMax+seriesEff>input2[i]) seriesMax+=seriesEff;
            else if(seriesMax+seriesEff<input2[i]){
               max= max<input2[i] ? input2[i] : max;
                seriesMax=input2[i];
                seriesEff=input2[i];
            }

        }

       else if(input2[i-1]>input2[i]){
            // if(input2[i]<=smallest) {
            //     smallest=input2[i];
            //     if(input2[i]*input1>seriesMax) seriesMax=input2[i]*input1;
            //     }
            
            if(input2[i]<seriesEff and 
            input2[i]*(seriesMax/seriesEff)>seriesMax){
                seriesEff=input2[i];
                seriesMax=(seriesMax/seriesEff)*seriesEff;
            }
            else if(2*input2[i]>=input2[i-1]){
                max= max<input2[i] ? input2[i] : max;
                seriesEff=input2[i];
                seriesMax=2*seriesEff;
            }
            else{
                if(input2[i]<smallest[0]){
                    smallest[0]=input2[i];
                    smallest[1]=i;
                    seriesMax=(i-smallest[1]+1)*input2[2];
                }
                else if(input2[i]==smallest[0]){
                    seriesMax=(i-smallest[1]+1)*input2[2];

                }
                else{
                max= max<seriesMax? seriesMax : max;
                seriesMax=input2[i];
                seriesEff=input2[i];
                }
            }
        }
        if(seriesMax>max) max=seriesMax;
    }


    return max;
}

int main(int argc, char const *argv[])
{
    int arr[]={79,41,82,35,10};
    cerr<<maxApples(3,arr)<<endl;
    return 0;
}

