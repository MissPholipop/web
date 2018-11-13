/*
1.建立一个名为A的类，在构造函数中输出对象被构造的信息，
在析构函数中输出对象被析构的信息。在main（）中定义A类对象及A对对象的数组，
观察构造函数和析构函数何时被执行。
2.设计一个三角形（Triangle）类，构造函数初始化三边，
写一成员函数输出其面积。在main（）中测试这个类。
*/
#include<iostream>
class Triangle
{
public :
    Triangle();
    Triangle(float a,float b,float c);
    float  getArea();
private:
    float a;
    float b;
    float c;
    float area;

};
Triangle::Triangle()
{
    a=0;
    b=0;
    c=0;
    area=0;
}
Triangle::Triangle(float a1,float b1,float c1)
{
    a=a1;
    b=b1;
    c=c1;
    //S=√[p(p-a)(p-b)(p-c)]
    //p=(a+b+c)/2
    float p;
    p=(a1+b1+c1)/2;
      area=sqrt(p(p-a1)*(p-b1)*(p-c1));
}
float Triangle::getArea()
{
    float p;
    p=(a+b+c)/2;
      area=sqrt(p(p-a)*(p-b)*(p-c));
}
int main()
{
    Triangle t (3,4,5);

    cout<<"Area :"+t.getArea();
}
