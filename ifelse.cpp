#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout << " Type,and I sha1 repeat.\n";
    cin >> ch;
    while (ch !='.')
    {
        if(ch == '\n')
          cout << ch;
        else
          cout << ++ch;
        cin >> ch;
    }

    cout << "\nPlease excuse the slight confusion.\n";
    return 0;
}