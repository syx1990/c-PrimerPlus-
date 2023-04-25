/*
 * @Author: rainNight 838690360@qq.com
 * @Date: 2023-03-21 19:54:58
 * @LastEditors: rainNight 838690360@qq.com
 * @LastEditTime: 2023-03-21 20:08:30
 * @FilePath: /c-PrimerPlus-/switch.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;
void showmenu();
void report();
void comfort();

int main()
{
    showmenu();
    int choice;
    while (choice != 5)
    {
            switch (choice)
            {
                case 1: cout << "\a\n";
                break;
                case 2: report();
                break;
                case 3: cout << "The bose was in all day.\n";
                break;
                case 4: comfort();
                break;
                default: cout << "That's not a choice.\n";
            }
            showmenu();
            cin >> choice;
    }
    cout << "Bye!\n";
    return 0;
}

void showmenu()
{
    cout << "Please enter 1,2,3,4, or 5:\n"
            "1) alarm         2) report\n"
            "3) alibi         4) comfort\n"
            "5) quit\n";
}

void report()
{
    cout << "It's been an excellent week for business.\n"
            "Sales are up 120%. Expenses are down 35%.\n";
}

void comfort()
{
    cout << "Your employees think you are the finest CEO\n"
            "in the induetry.The board of directore think\n"
            "you are the finest CEO in the industry.\n";
}