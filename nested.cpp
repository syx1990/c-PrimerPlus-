/*
 * @Author: rainNight 838690360@qq.com
 * @Date: 2023-03-21 18:53:56
 * @LastEditors: rainNight 838690360@qq.com
 * @LastEditTime: 2023-03-21 19:07:12
 * @FilePath: /c-PrimerPlus-/nested.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

const int Cities = 5;
const int Years = 4;
int main()
{
    const char * cities[Cities] = {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Gribble"
    };

    int maxtemps[Years][Cities] = 
    {
        {96,100,87,101,105},
        {96,98,91,107,104},
        {97,101,93,108,107},
        {98,103,95,109,108}
    };

    cout << "Maximum temperatures for 2008 - 2011\n\n";
    for (int city = 0;city< Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0;year < Years;++year)
           cout << maxtemps[year][city] << "\t";
        cout << endl;   
    }

    return 0;
}