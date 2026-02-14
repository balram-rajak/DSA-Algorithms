
// https://www.geeksforgeeks.org/problems/product-of-primes5328/1

using namespace std;

const int MOD = 1e9 + 7;

void print(vector<int> v){

    for(auto &val : v){
        cout<< val << " ";        
    }

    cout << endl;
}

// Find primes till sqrt(R)
vector<int> find_primes_till_n(int n){

    // 0 represents boolean true here
    int isPrime[n+1] = {0};
    vector<int> primes;

    isPrime[0] = isPrime[1] = 1;

    for(int i=2; i * i <=n; i++){

        if(!isPrime[i]){

            for(int j= i*i; j<=n; j += i){

                isPrime[j] = 1;
            }
        }

    }

    for(int i=0; i<=n; i++){
        if(!isPrime[i]) primes.push_back(i);
    }

    return primes;
}


// Custom batch segemented sieve
vector<int> segmented_sieve(int L, int R){

    // limit can be adjusted to calculate any batch of primes
    int limit = sqrt(R)+2;

    // Primes till sqrt(R)
    vector<int> primes = find_primes_till_n(limit);

    int low = max(L,limit);
    int high = low + limit;
    
    while(low <= R){
        
        int sz = limit+1;
        int isPrime[sz] = {0};
        
        for( auto &p : primes){
            
            int start = floor(low/p)*p;

            if(start < low) start += p;

            for(int j =start ; j<=high; j += p){
                
                isPrime[j-low] = 1;
                
            }
        }

        for(int i=low; i<=high; i++){

            if(isPrime[i-low]==0) primes.push_back(i);
        }

        low += limit;
        
        high += limit;

    }
    
    return primes;
}

vector<int> segmented_primes(int L, int R){

    int limit = sqrt(R);
    vector<int> primes = find_primes_till_n(limit);

    vector<int> range_primes;

    //  0 represents boolean true here
    int isPrime[R-L+1] = {0};


    for(int i=0; i<size(primes); i++){

        int p = primes[i];
        
        int loLim = floor(L/p) * p;

        if(loLim < L) loLim += p;

        for(int j=loLim ; j<=R; j = j+ p){

            if(j != p)
                isPrime[j-L] = 1;
        }

    }

    int sz = sizeof(isPrime)/sizeof(int);

    for(int i=0; i<sz; i++){
    
        if(!isPrime[i]) range_primes.push_back(i+L);
    }

    return range_primes;
}

int product_range_prime(int L , int R){

    int product_primes = 1;
    vector<int> primes = segmented_primes(L, R);
    
    print(primes);
    for(auto &p : primes){
        
        product_primes = (1LL*product_primes*(p)) % MOD;
    }
    
    return product_primes;
}

int main(){

    int a, b;
	cin >> a >> b;

   cout<< product_range_prime(a, b);
}