/*
1.����һ����ΪA���࣬�ڹ��캯����������󱻹������Ϣ��
���������������������������Ϣ����main�����ж���A�����A�Զ�������飬
�۲칹�캯��������������ʱ��ִ�С�
2.���һ�������Σ�Triangle���࣬���캯����ʼ�����ߣ�
дһ��Ա����������������main�����в�������ࡣ
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
    //S=��[p(p-a)(p-b)(p-c)]
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
