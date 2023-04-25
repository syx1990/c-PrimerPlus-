/*
 * @Author: rainNight 838690360@qq.com
 * @Date: 2023-03-19 21:16:06
 * @LastEditors: rainNight 838690360@qq.com
 * @LastEditTime: 2023-03-19 21:19:01
 * @FilePath: /c-PrimerPlus-/address.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

int main()
{
    int donuts = 6;
    double cups = 4.5;

    cout << "douts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;

    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    return 0;
}