#include<iostream>
using namespace std;

int main()
{
    char ch;
    int spaces,total = 0;
    cin >> ch;
    while (ch != '.')
    {
        if(ch == ' ')
           ++spaces;
        ++total;
        cin >> ch;
    }
    cout << spaces << " spaces. " << total;
    cout << " characters total in sentence\n";
    return 0;
}