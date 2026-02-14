
using namespace std;

bool isPrime(int x){

    if(x < 2) return false;
    for(int i=2; i * i <=x; i++){

        if(x % i == 0) return false;
    }
    
    return true;
}

int main(){

    int n;
	cin >> n;
	while(n > 0){
        int a,b;

        cin >> a;

        cout << isPrime(a);
        cout << endl;

        n--;

	}
    
}