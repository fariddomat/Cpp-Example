#include<iostream.h>
#include<math.h>
class complex{
private:
int r;
int i;
public:
complex( ){r=i=0;} //Default Constructor
complex(const complex &) ; //Copy Constructor
complex(int , int);
complex sum(const complex&, const complex&);
float le( );
void print( );
~complex(){}
};
complex ::complex(const complex & co)
{r=co.r;i=co.i;}
complex ::complex(int r1,int i1)
{r=r1;i=i1;}
complex complex ::sum(const complex& co, const complex& co1)
{complex z; z.r=co.r+co1.r; z.i=co.i+co1.i;return z;}
float complex ::le( )
{return sqrt(pow(r,2)+pow(i,2));}
void complex ::print( )
{cout<<r<<" +i "<<i<<endl;}
main( )
{
complex c,c1(c),c2(2,3),c3(7,4);
cout<<"c=" ; c.print( );
cout<<"c1=";c1.print( );
cout<<"c2=";c2.print( );
cout<<"c3=";c3.print( );
c=c.sum(c2,c3);
cout<<"c=after sum c2 and c3"<<endl;
cout<<"c="; c.print( );
cout<<"Lenght ="<<c.le( );

return 0;
}
