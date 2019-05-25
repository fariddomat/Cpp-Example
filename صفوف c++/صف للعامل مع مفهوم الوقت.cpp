#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<conio.h>
class time {
private:
int second, minute, hour;
public:
time(int=1,int=1,int=2);
void set(int,int,int);
void print( );
int getsecond( ) {return second;}
int getminute( ){return minute;}
int gethour( ) {return hour;}
~time( ){}
};
time::time(int s,int m,int h)
{ set(s,m,h); }
void time::set(int s,int m,int h)
{ second=s; minute=m; hour=h; }
void time::print(time p )
{
    cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
main()
{
time t,t1(2,2,2);
int x,y,z;
cin>>x>>y>>z;
time t2(x,y,z);
t.print( );
t1.print( );
t2.print( );
cout<<t.gethour( );
return 0;
}
