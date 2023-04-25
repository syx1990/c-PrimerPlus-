/*
 * @Author: rainNight 838690360@qq.com
 * @Date: 2023-03-20 20:03:46
 * @LastEditors: rainNight 838690360@qq.com
 * @LastEditTime: 2023-03-20 20:06:42
 * @FilePath: /c-PrimerPlus-/compstr.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#include<string>
using namespace std;

int main()
{
    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word,"mate");ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends,word is " << word << endl;
    return 0;
}