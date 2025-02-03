#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    int i = 0;
    while (i < 10)
    {
        // srand(time(0));
        int sequence_length = rand() % 10;
        cerr << rand();
        cerr << sequence_length << "\n";
        vector<int> a;
        for (int i = 0; i < sequence_length; ++i)
        {
            a.push_back(rand() % 100000);
        }
        for (int i = 0; i < sequence_length; ++i)
        {
            cerr << a[i] << ' ';
        }
        cerr<<"\n";
        i++;
    }
}
