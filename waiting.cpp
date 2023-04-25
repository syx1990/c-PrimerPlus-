/*
 * @Author: rainNight 838690360@qq.com
 * @Date: 2023-03-21 17:58:29
 * @LastEditors: rainNight 838690360@qq.com
 * @LastEditTime: 2023-03-21 18:41:22
 * @FilePath: /c-PrimerPlus-/waiting.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)

    cout << "done \a\n";
    return 0;
}
