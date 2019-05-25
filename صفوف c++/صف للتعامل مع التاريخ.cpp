#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<conio.h>
class date{
private:
int day, month, year;
public:
date(int=1,int=1,int=2000);
date(date&);
void setday(int);
void setmonth(int);
void setyear(int);
int getday( ) {return day;}
int getmonth( ) {return month;}
int getyear( ) {return year;}
void print( );
~date(){}
};
date::date(int d1,int m1,int y1)
{ setday(d1); setmonth(m1); setyear(y1); }
date::date(date& da)
{ setday(da.day); setmonth(da.month); setyear(da.year);}

void date::setday(int d) { day=d;}
void date::setmonth(int m) { month=m;}
void date::setyear(int y) { year=y; }
void date::print( )
{cout<<day<<"-"<<month<<"-"<<year<<endl;}

main( )
{
date da,da1(1,2,2003);
int x,y,z;
cin>>x>>y>>z;
da1.setday(x);
da1.setmonth(y);
da1.setyear(z);
da.print( );
da1.print( );
cout<<da.getday( );
return 0;
}
