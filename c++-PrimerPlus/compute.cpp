#include<iostream>
#include<cmath>
using namespace std;

/**
 * 计算主题
 * 读取两个数，计算它们的数据
 */

class Compute 
{
    friend void getCompute(Compute &compute);
    public:
      Compute();
      ~Compute();
      void sum(int a,int b);
      void subtract(int a,int b);
      void multiply(int a,int b);
      void except(int a,int b);
    private:
      int _a;
      int _b;
};

Compute::Compute()
{
    cout <<" 执行Compute构造函数～" <<endl;
}

Compute::~Compute()
{
    cout << "执行Compute析构函数～" <<endl;
}

void Compute::sum(int a,int b)
{
    cout << "计算 a+b= " << a + b << endl;
}

void Compute::subtract(int a,int b)
{
    cout << "计算 a-b= " << a - b << endl;
}

void Compute::multiply(int a,int b)
{
    cout << "计算 a*b= " << a * b << endl;
}

void Compute::except(int a,int b)
{
    cout << "计算 a/b= " << a / b << endl;
}

void  getCompute(Compute &compute)
{
    cout << "友元函数的使用～" << endl;
    compute._a = 10;
    compute._b = 5;
    cout << "😄 计算10和5相加的根号: " << sqrt(compute._a + compute._b)  << endl;
}

class Squrt:public Compute
{
    public:
        Squrt();
        void s(int c);
        ~Squrt();
    private:
        int _c;
};

Squrt::Squrt()
{
    cout << " 执行Squrt构造函数～" <<endl;
}

void Squrt::s(int c)
{
    cout << "计算 c的根号: " << sqrt(c) << endl;
}

Squrt::~Squrt()
{
    cout << "执行Squrt析构函数～" <<endl;
}

int main()
{
    cout << "输入两个值:" << endl;
    int v1=0,v2 = 0;
    cin >> v1 >> v2;

    Compute c;
    getCompute(c); 
    c.sum(v1,v2);
    c.subtract(v1,v2);
    c.multiply(v1,v2);
    c.except(v1,v2);
    Squrt s;
    s.sum(10,2);
    s.s(10);
    return 0;
}