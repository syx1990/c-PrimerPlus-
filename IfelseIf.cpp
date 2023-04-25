/*
 * @Author: rainNight 838690360@qq.com
 * @Date: 2023-03-21 19:27:02
 * @LastEditors: rainNight 838690360@qq.com
 * @LastEditTime: 2023-03-21 19:39:08
 * @FilePath: /c-PrimerPlus-/IfelseIf.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;
const int Fave = 27;
int main()
{
    int n;

    cout << "Enter a number in the range 1-100 to find ";
    cout << "my favorite number: ";
    do{
        cin >> n;
        if (n < Fave)
           cout << " Too low -- guess again: ";
        else if (n > Fave)
           cout << "Too high -- guess again: ";
        else
           cout << Fave << " is right!\n";
    }while (n != Fave);
    return 0;
}
