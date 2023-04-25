/*
 * @Author: rainNight 838690360@qq.com
 * @Date: 2023-03-19 19:45:54
 * @LastEditors: rainNight 838690360@qq.com
 * @LastEditTime: 2023-03-19 19:59:38
 * @FilePath: /c-PrimerPlus-/numstr.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

int main()
{
    cout << "What year was your house built?\n";
    int year;
    cin >>year;
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address,80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}