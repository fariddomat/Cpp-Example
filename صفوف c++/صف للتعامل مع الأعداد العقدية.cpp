# include <iostream.h>
# include <math.h>
#include<conio.h>
class complex
{
private:
    float r;
    float m;
public:
    complex (float =1,float =2);
    void set (float ,float);
    float getr(){return r;}
    float getm(){return m;}
    void print ();
    complex sum(complex &,complex&);
    float s();
    ~complex(){}
};
complex::complex(float r1,float m1)
{
    r=r1;
    m=m1;
}
void complex::set(float r1,float m1)
{
    r=r1;
    m=m1;
}
void complex::print()
{
   std:: cout<<r<<"+i"<<m<<"\n";
}
complex complex::sum (complex&p1,complex&p2)
{
    complex z;
    z.r=p1.r+p2.r;
    z.m=p1.m+p2.m;
    return z;
}
float complex::s()
{
    return sqrt(pow(r,2)+pow(m,2));
}
main()
{
    complex c1,c2(2,3);
    float x,y;
   std:: cin>>x>>y;
    complex c3 (x,y);
    c1.sum(c2,c3);
    c1.print();
   std:: cout<<c3.s();
   getch();
    return 0;
}
