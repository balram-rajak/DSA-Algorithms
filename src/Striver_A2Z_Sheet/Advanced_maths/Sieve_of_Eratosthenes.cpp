
// Prints all primes <= n

using namespace std;

vector<int> sieve_simple(int n){

    // isPrime[i] = 0 represents true primality and 1 as false primality.
    int isPrime[n+1]= {0};

    isPrime[0] = isPrime[1] = 1;
    
    for(int i=2; i * i <= n; i++){

        if(!isPrime[i]){

            for(int j= i*i; j<=n; j += i){

                isPrime[j]=1;
            }
        }
    }

    vector<int> v (isPrime,isPrime+n+1);
    return v;
}

int main(){

    int n;
	cin >> n;

    vector<int> v = sieve_simple(n);
    for(int i=2; i<=n; i++){
        if(!v[i]) cout<< i <<" ";
    }
    
}

