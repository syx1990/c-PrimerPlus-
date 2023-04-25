/*
 * @Author: rainNight 838690360@qq.com
 * @Date: 2023-03-23 22:33:06
 * @LastEditors: rainNight 838690360@qq.com
 * @LastEditTime: 2023-03-23 22:34:50
 * @FilePath: /c-PrimerPlus-/recur.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;
void countdown(int n);

int main()
{
    countdown(4);
    return 0;
}

void countdown(int n)
{
    cout << "Counting down...." << n << endl;
    if(n>0)
      countdown(n-1);
    cout << n << ":Kaboom!\n";
}
