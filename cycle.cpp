#include<iostream>
using namespace std;

int main()
{
    int x = 20;
    {
        int y = 100;
        cout << x << endl;
        cout << y << endl;
    }
    cout << x << endl;
    cout<<y<<endl;
    return 0;
}