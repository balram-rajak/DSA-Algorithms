#include <iostream>
#include <vector>

using namespace std;

string getnextCircularString(string currentString)
{
    return currentString.substr(1) + currentString[0];
}

bool isPalindrome(string s)
{
    int n = s.length();

    for (int i = 0; i < n / 2; i++)
        if (s[i] == s[n - i - 1])
            ;
        else
            return false;
    return true;
}
vector<int> circularPalindromes(string s)
{
    int i = 0;
    int n = s.length();
    int highestPalindromeArr[n] = {0};
    while (i < n)
    {
        for (int unit = n; unit > 1; unit--)
        {
            for (int j = 0; n - j >= unit; j++)
            {
                int lastPos = j;
                while (n - lastPos >= unit)
                {
                    if (isPalindrome(s.substr(lastPos, unit)) && highestPalindromeArr[i] < unit)
                    {
                        highestPalindromeArr[i] = unit;
                        break;
                    }
                    lastPos += unit;
                }
                if (highestPalindromeArr[i] >= unit)
                    break;
            }
            if (highestPalindromeArr[i] >= unit)
                break;
        }
        s = getnextCircularString(s);
        i++;
    }

    vector<int> vect(highestPalindromeArr, highestPalindromeArr + n);
    return vect;
}

int main()
{
    /* code */
    vector<int> result = circularPalindromes("1234567890[]-!*%$)(??()$%*!-][0987654321");
    for (size_t i = 0; i < result.size(); i++)
    {
        cout << result[i];

        if (i != result.size() - 1)
        {
            cout << "\n";
        }
    }
    return 0;
}
