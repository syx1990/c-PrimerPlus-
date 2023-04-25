/*
 * @Author: rainNight 838690360@qq.com
 * @Date: 2023-03-21 18:49:04
 * @LastEditors: rainNight 838690360@qq.com
 * @LastEditTime: 2023-03-21 18:51:35
 * @FilePath: /c-PrimerPlus-/textln.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

int main()
{
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to-quit:\n";
    cin >> ch;
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin >>ch;
    }
    cout << endl << count << "characters read\n";
    return 0;
}
