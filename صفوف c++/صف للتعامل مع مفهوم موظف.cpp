//ÃßÊÈ Õİ íÊÚÇãá ãÚ ãİåæã ãæÙİ ÍíË íæÕİ ãä ÎáÇá ÇÓã æÑŞã æÊÇÑíÎ ãíáÇÏ æíÊÖãä ÇáØÑÇÆŞ ÇáÃÓÇÓíÉ
//ÈÇáÅÖÇİÉ Åáì
//1. ØÑíŞÉ áÊÎÒíä ãÚáæãÇÊ ãæÙİ Öãä ãáİ ÊÓáÓáí
//2. ØÑíŞÉ áØÈÇÚÉ ãÚáæãÇÊ ãæÙİ.
#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<fstream.h>

class date{
private:
int d,m,y;
public:
date(int=1,int=1,int=2008);
void set(int,int,int);
int getd() { return d;}
int getm() { return m;}
int gety() { return y;}
void print()const;
~date(){}
};


date::date(int d1,int m1,int y1)
{ set(d1,m1,y1); }
void date::set(int a,int n,int e)
{ d=a; m=n; y=e; }
void date::print() const
{cout<<d<<"/"<<m<<"/"<<y<<endl;}


class emp{
private:
int num;
char fn[25];
date birth;
public:
emp(int,char*,int,int,int);
void set(int,char*);
int getn(){return num;}
char* getname(){return fn;}
void print_text(ofstream &);
void print() const;
~emp(){}
};

emp::emp(int n,char* f ,int d1,int m1,int y1)
{ set(n,f); birth.set(d1,m1,y1); }
void emp::set(int n,char* f )
{ if (n>0) num=n;
strcpy(fn,f);}
void emp::print() const
{
cout<<num<<"\t"<<fn<<"\t";
birth.print();
}
void emp::print_text(ofstream & outf)
{
outf<<num<<"\t"<<fn<<"\t"<<birth.getd()<<"\t"<< birth.getm()<<"\t"
<< birth.gety()<<"\n";
}

main()
{
ofstream outf ("c:\\test.txt",ios::out);
int n;cout<<"n=";cin>>n;
char name[30];cout<<"name=";cin>>name;
date da;
int x,y,z;
cin>>x>>y>>z;
da.set(x,y,z);
emp e(n,name,da.getd(),da.getm(),da.gety());
e.print();
e.print_text(outf);
getch();
return 0;
}
