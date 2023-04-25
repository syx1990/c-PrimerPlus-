#include<iostream>
using namespace std;

/**
 * 定义一个数题累 
 */
class Book
{
    public:
          void stend(int a,int b);
    private:
          int a;
          int b;
};

void Book::stend(int a,int b){
        cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
}

/**
 * 简单主函数
 * 读取两个数，求它们的和
 */
int main()
{
    cout << "Enter two numbers:" << endl;
    int v1=0,v2=0;
    cin >> v1 >> v2;
    Book book;
    book.stend(v1,v2);
    return 0;
}