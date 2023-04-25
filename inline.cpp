/*
 * @Author: rainNight 838690360@qq.com
 * @Date: 2023-03-23 23:09:01
 * @LastEditors: rainNight 838690360@qq.com
 * @LastEditTime: 2023-03-23 23:13:04
 * @FilePath: /c-PrimerPlus-/inline.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

inline double square(double x) { return x * x;}

int main()
{
    double a,b;
    double c = 13.0;
    a = square(5.0);
    b = square(4.5 + 7.5);
    cout << "a = " << a <<",b = " << b <<endl;
    cout << "c = " << c;
    cout << ", squared = " << square(c++) << endl;
    cout << "Now c = " << c << endl;
    return 0;
}
