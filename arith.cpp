/*
 * @Author: syx1990 838690360@qq.com
 * @Date: 2023-03-19 16:44:29
 * @LastEditors: syx1990 838690360@qq.com
 * @LastEditTime: 2023-03-19 16:51:43
 * @FilePath: /c-PrimerPlus-/arith.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

int main()
{
    float hats,heads;
    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout << "Enter a number: ";
    cin>>hats;
    cout <<"Enter another number:";
    cin>>heads;

    cout << "hats = " << hats << "; heads= "<< heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    return 0;   
}