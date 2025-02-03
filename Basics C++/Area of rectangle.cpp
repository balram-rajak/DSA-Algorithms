/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdio.h>

using namespace std;

template <class T>
class Rectangle
{

private:
    T length;
    T breath;

public:
    T getArea();
    Rectangle(T length, T breath)
    {
        this->length = length;
        this->breath = breath;
    }
    T getLength()
    {
        return length;
    }
    ~Rectangle()
    {
        cout << "Releasing dynamic allocated memory";
    }
};

template <class T>
T Rectangle<T>::getArea()
{
    return length * breath;
}

int main()
{
    Rectangle<int> r(2, 7);
    cout << "Area " << r.getArea() << endl;

    Rectangle<float> rf(5.43, 8.45);
    cout << "Area " << rf.getArea() << endl;
    return 0;
}
