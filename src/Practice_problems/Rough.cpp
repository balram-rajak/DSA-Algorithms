#include <iostream>
#include<set>
#include<unordered_set>
using namespace std;

void symmetry_simple(int x){

	int counter = x+1;
	int length = 2*x-1;

	ostringstream oss;
	for(int i=0; i<x; i++){

        int space = 0;
        if(i<x-1){
            space = length-2*(i+1);
			counter--;
        }

		if(i==x) space=0;
		for(int j=x; j>=x-i; j--){
			oss <<j;
		}

		while(space>0){
			// 
			assert(counter > 1);
			oss << to_string(counter);
			space--;
		}
        for(int j=x-i; j<=x; j++){
			if(j!=1)
				oss <<j;
		}
		oss << endl;
    }

	counter--;
	for(int i=x-2; i>=0; i--){

        int space = 0;
        if(i<x){
            space = length-2*(i+1);
			counter++;
        }

		for(int j=x; j>=x-i; j--){
			oss <<j;
		}

        while(space>0){
			oss << to_string(counter);
			space--;
		}
        for(int j=x-i; j<=x; j++){
			oss <<j;
		}
		oss<< endl;
    }

	cout<< oss.str();
}

void symmetry(int n) {

	int k = 2*n -1;
	for(int i=0; i<k; i++){

		for(int j=0; j<k; j++){
			int x = abs(i-n+1);
			int y = abs(j-n+1);
			cout<< max(x,y)+1;
		}
		cout<< endl;
	}
}

int main() {
	
	int n;
	cin >> n;
	// while(n > 0){
	// 	symmetry(n);
	// 	n--;
	// }
	symmetry(n);
}