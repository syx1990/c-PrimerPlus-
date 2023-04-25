/*
 * @Author: shiyuxiang 1853817569@163.com
 * @Date: 2023-04-04 22:11:15
 * @LastEditors: shiyuxiang 1853817569@163.com
 * @LastEditTime: 2023-04-06 19:50:36
 * @FilePath: /c++-PrimerPlus/Shape.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

class Shape{
    protected:
      int width,height;
    public:
      Shape(int a=0,int b=0)
      {
        width = a;
        height = b;
      }

      virtual int area()
      {
        cout << "Parent class area:"<<endl;
        return 0;
      }
};

class Rectangle:public Shape {
    public:
      Rectangle(int a = 0,int b = 0):Shape(a,b){}
      int area()
      {
        cout << "Rectangle class area:"<<endl;
        return (width*height);
      }
};

class Triangle:public Shape {
    public:
    Triangle(int a = 0,int b = 0):Shape(a,b){}
    int area()
    {
        cout << "Triangle class area:"<<endl;
        return (width*height / 2);
    }
};

// 主程序
int main()
{
    Shape *shape;
    Rectangle rec(10,7);
    Triangle tri(10,5);

    // 存储矩形的地址
    shape = &rec;

    // 调用矩形的求面积函数
    shape->area();

    // 存储三角形的地址
    shape = &tri;

    // 调用三角形的求面积函数
    shape->area();

    return 0;
}