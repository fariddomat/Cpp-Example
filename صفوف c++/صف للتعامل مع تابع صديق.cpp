#include<iostream.h>
class c{
friend void setx(c&,int);
private:
int x;
public:
c(){x=0;}
void print()const{cout<<x<<endl;}
~c(){}
};
void setx(c & c1,int x1)
{c1.x=x1;}
main()
{
c cc;
cc.print();
setx(cc,3);
cc.print();
return 0;
}
