/*
 * @Author: rainNight 838690360@qq.com
 * @Date: 2023-03-23 22:37:32
 * @LastEditors: rainNight 838690360@qq.com
 * @LastEditTime: 2023-03-23 22:50:09
 * @FilePath: /c-PrimerPlus-/ruler.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;
const int Len = 66;
const int Divs = 6;
void subdivide(char ar[],int low,int high,int level);

int main()
{
    char ruler[Len];
    int i;
    for (int i = 0; i < Len - 2; i++)
    {
        ruler[i] = ' ';
    }
    ruler[Len - 1] = '\0';
    int max = Len - 2;
    int min = 0;
    ruler[min] = ruler[max] = '|';
    cout << ruler <<endl;
    for (int j = 0; j < Divs; j++)
    {
        subdivide(ruler,min,max,i);
        cout << ruler << endl;
        for (int z= 1; z < Len - 2; z++)
        {
            ruler[j] = ' ';
        }
    }
    return 0;
}

void subdivide(char ar[],int low,int high,int level)
{
    if(level == 0)
      return;
    int mid = (high + low) / 2;
    ar[mid] = '|';
    subdivide(ar,low,mid,level - 1);
    subdivide(ar,mid,high,level - 1);
}
