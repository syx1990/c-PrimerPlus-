/*
 * @Author: rainNight 838690360@qq.com
 * @Date: 2023-03-23 23:25:16
 * @LastEditors: rainNight 838690360@qq.com
 * @LastEditTime: 2023-03-23 23:34:03
 * @FilePath: /c-PrimerPlus-/funtemp.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

template <typename T>
void Swap(T &a,T &b);

int main()
{
    int i = 10;
    int  j = 20;
    cout << "i, j = " << i << ", " << endl;
    cout << "Using compiler-genrated int swapper:"<<endl;
    Swap(i,j);
    cout << "Now i, j = " << i << "," << j <<endl;

    double x = 24.5;
    double y = 81.7;
    cout << "x,y = "<< x << ", "<< y << endl;
    cout << "Using compiler-genrated int swapper:"<< endl;
    Swap(x,y);
    cout  << "Now x,y = " << x << ", " << y << endl;
    return 0;
}


template <typename T>
void Swap(T &a,T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}




