#include<iostream.h>
#include<conio.h>
class rat{
friend int g(rat&);
private:
int b;
int m;
public:
rat(int b1=1,int m1=1){b=b1;m=m1;}
rat(const rat & r){b=r.b;m=r.m;}
~rat(){}
void print()const;
int getb()const {return b;}
int getm() const{return m;}
rat& sum(const rat&,const rat &);
};
int g(rat& r)
{
while(r.b!=r.m)
if (r.b>r.m)
r.b-=r.m;
else
r.m-=r.b;
return r.b;
}
rat& rat::sum(const rat& r1,const rat & r2)
{
b=(r1.b*r2.m)+(r2.b*r1.m);
m=(r1.m*r2.m);
return *this;
}
void rat::print()const
{ rat ra;
ra.b=b;
ra.m=m;
int GCD=g(ra);
cout<<(b/GCD)<<"/"<<(m/GCD)<<endl;}
main()
{
int a,b;
cout<<"B=";cin>>a;
cout<<"M=";cin>>b;
rat r, r1(a,b);
cout<<"B=";cin>>a;
cout<<"M=";cin>>b;
rat r2(a,b);
r.sum(r1,r2);
cout<<"sum=";r.print();
getch();
return 0;
}
