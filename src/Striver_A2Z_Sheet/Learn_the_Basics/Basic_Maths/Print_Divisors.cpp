
using namespace std;

void print(int *a, int &size){

    for (int i = 0; i < size; i++)
        cout << *(a+i) << " ";
}
int* printDivisors(int n, int &size){
            
    int * divisors = (int *)malloc(size * sizeof(int));
    
    int counter = 0;
    for(int i=1; i * i <=n; i++){
        if(n % i ==0) {
            divisors[counter] = i;
            counter++;
            int multiple = n/i;
            if(multiple != i) {
                divisors[counter] = multiple;
                counter++;
            }
        }
    }
    
    sort(divisors,divisors+size);

    return divisors;
}


int main(){

    int n;
	cin >> n;
	while(n > 0){
        int a,b;

        cin >> a >> b ;

        int *divisors = printDivisors(a,b);
        print(divisors,b) ;
        cout << endl;

        n--;

	}
    
}