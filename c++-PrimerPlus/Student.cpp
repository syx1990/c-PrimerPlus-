/**
 * 学生类 
 */
#include<iostream>
using namespace std;

class Student 
{
    public:
      Student(); // 构造函数
      ~Student(); // 析构函数
      void studentInfo(string name,int age);
    
    private:
     string name;
     int age;
};

Student::Student()
{
    cout << "构造函数～" << endl;
}

Student::~Student()
{
    cout << "析构函数～" << endl;
}

void Student::studentInfo(string name,int age)
{
        cout << "学生姓名:"<<name << " , 年龄为：" << age << endl;
}

int main()
{
    Student stu;   
    stu.studentInfo("小明",12);
    return 0;
}

