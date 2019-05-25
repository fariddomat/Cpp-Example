
#include<iostream.h>
#include<fstream.h>
class date{
private:
int day,month,year;
public :
date(int=9,int=11,int=1995);
void set(int,int,int);
void setm(int d){day=d;}
void setd(int m){month=m;}
void sety(int y){year=y;}
int date::getd(){return day;}
int date::getm(){return month;}
int date::gety(){return year;}
void print();
~date(){}
};
date::date(int d,int m,int y)
{set(d,m,y);}
void date::set(int d,int m,int y)
{day=d;month=m;year=y;}
void date::print()
{cout<<day<<"/"<<month<<"/"<<year<<endl;}
class employee{
private :
int number;
char name[50];
date d;
public:
employee(int=1,char[]="Farid",date=date());
void set(int,char[],date);
char* getname(){ return name;}
void print();
void write(ofstream&);
~employee(){}
friend void read(employee &e);
};
employee::employee(int n,char na[],date d1)
{
set(n,na,d1);
}
void employee::set(int n,char na[],date d1)
{
number=n;
strcpy(name,na);
d.set(d1.getd(),d1.getm(),d1.gety());
}
void employee::print()
{
cout<<number<<"\t"<<name<<"\t";
d.print();
}
void employee::write(ofstream &of)
{
of<<number<<"\t"<<name<<"\t"
<<d.getd()<<"\t"<<d.getm()<<"\t"<<d.gety()<<endl;
}
void read(employee &e)
{
int d1,m1,y1;
cout<<"enter number name day month year\n";
cin>>e.number>>e.name>>d1>>m1>>y1;
e.d.set(d1,m1,y1);
}
main()
{
int number,day,month,year;char name[50];
cout<<"enter number name day month year\n";
cin>>number>>name>>day>>month>>year;
date d(day,month,year);
employee e(number,name,d),e2,e3;
e.print();
e2.print();
read(e3);
e3.print();
ofstream of("c:\\f.txt",ios::out);
e.write(of);
of.close();
getchar();
}
