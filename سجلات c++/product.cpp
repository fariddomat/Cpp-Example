#include<iostream.h>
#include<conio.h>

struct product { int num; char name[15]; float price,units,total;};
void read(product &);
void print(product);
void convert(product &);
main()
{
      int n;
      cin>>n;
	product(p);
	int sum=0;
	for (int i=0;i<n;i++)
	{
	read (p);
	print (p);
	convert (p);
	print (p);
	sum=sum+p.total;
     }
     cout<<"\nsum="<<sum<<endl;
     getch();
}
void read(product &p)
{
	cin>>p.num>>p.name>>p.price>>p.units;
	p.total=p.price*p.units;
}
void print (product p)
{
	cout<<"p.num="<<p.num<<"\t p.name="<<p.name<<"\t p.price="<<p.price<<"\t p.units="<<p.units<<"\t p.total="<<p.total<<endl;
}
void convert(product &p)
{
	for (int i=0;p.name[i]!='\0';i++)
	if(p.name[i]>='a'&&p.name[i]<='z')
	p.name[i]=p.name[i]-32;
}
