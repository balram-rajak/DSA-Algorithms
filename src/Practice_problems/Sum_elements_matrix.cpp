// https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/?fbclid=IwAR2kDiVkEaxu9dkCTCUhzXLuIccNn0Gz3dSfkaSUjlDE6Nb9UHMzt8HNDo4

// #include <bits/stdc++.h>

using namespace std;
void printSet(multiset<long int> s){

    for(auto &str : s){
        cout<<str << " ";
    }

    cout<< endl;
}

int main() {
	int T,N, K;
	cin >> T ;    //Reading input from STDIN
	
	while(T--){
		long int input = -1;
		cin >> N >> K;
        multiset<long int> s; 
        for(int i =0; i<N; i++){
            long int temp;
            cin>> temp;
            s.insert(temp);
        }
        long long int sum = 0;
        // printSet(s);
		while(K--){
			auto it = s.end();
            auto temp = --it;
			sum += *(temp);
            s.erase(temp);
			s.insert((*temp)/2);

            // printSet(s);
		}
		cout << sum << endl;
	}
}