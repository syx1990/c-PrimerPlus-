/*
 * @Author: rainNight 838690360@qq.com
 * @Date: 2023-03-23 22:16:50
 * @LastEditors: rainNight 838690360@qq.com
 * @LastEditTime: 2023-03-23 22:28:27
 * @FilePath: /c-PrimerPlus-/travel.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;
struct travel_time
{
    int hours;
    int mins;
};
const int Mins_pre_hr = 60;

travel_time sum(travel_time t1,travel_time t2);
void show_time(travel_time t);

int main()
{
    travel_time day1 = {5,45};
    travel_time day2 = {4,55};

    travel_time trip = sum(day1,day2);
    cout << "Two-day total: ";
    show_time(trip);

    travel_time day3 = {4,32};
    cout << "Three-day total: ";
    show_time(sum(trip,day3));
    return 0;
}

travel_time sum(travel_time t1,travel_time t2)
{
    travel_time total;

    total.mins = (t1.mins + t2.mins) % Mins_pre_hr;
    total.hours = t1.hours + t2.mins + (t1.mins + t2.mins) / Mins_pre_hr;

    return total;
}

void show_time(travel_time t)
{
    cout << t.hours << " hours, "
         << t.mins << " minutes\n";
}
