
// https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

using namespace std;

bool armstrongNumber(int n) {
        // code here
        
        int x=n;
        
        int sum = 0;
        
        while(n>0){
            int rem = n % 10;
            
            sum += pow(rem,3);
            
            n /= 10;
        }
        
        return sum == x;
}

int main(){

    int n;
	cin >> n;
	while(n > 0){
        int a;

        cin >> a ;

        cout<< armstrongNumber(a) << endl;

        n--;

	}
    
}