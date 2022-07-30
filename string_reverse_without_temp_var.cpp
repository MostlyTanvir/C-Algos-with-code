/// Write down a program in c/c++ to reverse a char array without using temp array and STL lib function
#include<iostream>
using namespace std;

int main()
{
    string str = "HELLO";
    int len = str.size();

    cout<<"Original stray: "<<str<<endl;

    for(int i=0; i<len/2; i++)
    {
        str[i] = str[i] + str[len-(i+1)];
        str[len-(i+1)] = str[i] - str[len-(i+1)];
        str[i] = str[i] - str[len-(i+1)];
    }

    cout<<"Reversed stray: "<<str<<endl;

    return 0;
}