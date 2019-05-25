#include<iostream.h>
class point{
private:
int x,y;
public:
point(int=0,int=0);
void print()const;
int getx() const {return x;}
int gety()const{return y;}
void set (int ,int);
~point(){}
};
point::point(int x1,int y1)
{set(x1,y1);}
void point::set(int x1,int y1)
{x=x1; y=y1;}
void point::print() const
{cout<<"("<<x<<","<<y<<")";}
class circle{
private:
float r;
point p;
public:
circle(float,int ,int);
void setr(float);
float getr()const {return r;}
void print()const;
~circle(){}
};
circle::circle(float r1,int I,int j)
{p.set(I,j); r=r1;}

void circle::setr(float r1){r=r1;}
void circle:: print()const{p.print();cout<<r;}
main()
{
point po(3,4);
circle c(10,po.getx(),po.gety());
c.print();
return 0;
}
