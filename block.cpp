#include <iostream>
using namespace std;

int main()
{
    cout << "The Amazzing Accounto will sum and average ";
    cout << "five numbers for you.\n";
    cout << "Please enter five values:\n";
    double number;
    double sum = 0.0;
    for(int i=1;i<=5;i++)
    {
        cout << "Value " << i << ":";
        cin >> number;
        sum += number;
    }
    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and Average to " << sum/ 5 << ".\n";
    return 0;
}