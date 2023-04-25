#include<iostream>
using namespace std;
int main()
{
    cout << "This program may reformt your hard disk\n"
            "and destroy all your data.\n"
            "Do you wish to continue? <y/n>";

    char ch;        
    cin >> ch;
    if (ch =='y' || ch == 'Y')
       cout << "You were warned:\a\a\n";
    else if(ch == 'n' || ch =='N')
       cout << "A wise choice....bye\n";
    else
    cout << "The wasn't a y or n! Appareently you "
            "can't follow\ninstructions.so "
            "I'll trash your disk anyway.\a\a\a\n";
    return 0;        
}