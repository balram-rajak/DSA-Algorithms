
using namespace std;

int gcd(int x , int y){

    int b = min(x,y);
    int a = max(x,y);
    while( b> 0){

        int temp = b;
        b = a % b;
    
        a = temp;
    }

    return a;
}

int gcd_brute_force(int a , int b){

    // int min = *(min_element(temp,temp+2));

    for(int i=min(a,b); i>=2; --i){
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }

    return 1;
}

int main(){

    int n;
	cin >> n;
	while(n > 0){
        int a, b;

        cin >> a >> b;

        int gcd_brute = gcd_brute_force(a,b);
        int gcd_Euclid = gcd(a,b);
        
		cout<< "brute force:"<< gcd_brute << " | Euclid:" <<gcd_Euclid << endl;

        assert(gcd_brute == gcd_Euclid);

        n--;

	}
    
}