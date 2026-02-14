// https://www.geeksforgeeks.org/dsa/program-to-find-lcm-of-two-numbers/

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

int lcm(int a, int b){

    // return abs(a*b)/gcd(a,b);

    // To avoid overflow issue

    return abs(a/gcd(a,b))*b;
    
    
}

int lcm_brute_force(int a, int b){

    int maximum = max(a,b);
    int limit = a*b;

    int minimum = min(a,b);
    for(int i= maximum; i<=limit  ;i += maximum){

        if(i%minimum == 0) return i;
    }

    return -1;
}

int main(){

    int n;
	cin >> n;
	while(n > 0){
        int a, b;

        cin >> a >> b;

        int lcm_brute = lcm_brute_force(a,b);
        int lcm_Euclid = lcm(a,b);
        
		cout<< "brute force:"<< lcm_brute << " | Euclid:" <<lcm_Euclid << endl;

        assert(lcm_brute == lcm_Euclid);

		n--;
	}
    
}