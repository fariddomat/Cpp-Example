#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
struct Birthday
{
	int day,month,year;
};
struct client 
{
	int number;
	char  name [50];
	double balance;
	Birthday Bdate;
};
const int n=5;
client *fileRead(fstream &);
void fileWrite(fstream &,client);
void print (fstream &);
void writeAll(fstream &,client []);
void update(fstream &,char [],float);
void search(fstream &,int);
main()
{
	ofstream out ("D:\\client.dat",ios::out );
	fstream io("D:\\client.dat",ios::in|ios::out);
	client a[n];
	writeAll(io,a);
	print(io);
	char name [50];
	cout<<"Enter Client name ";
	cin>>name;
	float  x;
	cout <<"Enter Balance Adjustment ";
	cin>>x;
	int y;
	update (io,name,x);
	cout<<"Enter Client Number ";
	cin>>y;
	search(io,y);
	getch();
}
client *fileRead(fstream &io)
{
	client *c=new client ;
	io.read((char *)c,sizeof(client));
	return c;
}
void fileWrite(fstream &io,client c)
{
	io.write((char*)&c,sizeof(client));	
}
void print (fstream  &io)
{
	io.seekg(0,ios::beg);
	client *c=fileRead(io);
	while(!io.eof())
	{
		cout<<c ->balance<<"\t"<<c ->name<<"\t"<<c ->Bdate.day<<"/"<<c ->Bdate.month<<"/"<<c ->Bdate.year<<endl;
		c=fileRead(io);
	}
}
void writeAll(fstream &io,client a[])
{
	io.seekp(0,ios::beg);
	cout<<"Enter name balance birthday (day,month,year)"<<endl;
	for(int i=0;i<n;i++)
	{
		a[i].number=i+1;
		cout<<i+1<<"\t";
		cin>>a[i].name>>a[i].balance>>a[i].Bdate.day>>a[i].Bdate.month>>a[i].Bdate.year;
		fileWrite(io,a[i]);	
	}
}
void update(fstream &io,char name[],float x)
{
	io.seekg(0);
	int rec_count=0;
	client *c=fileRead(io);
	while(!io.eof())
	{
		if(strcmp(c->name,name)==0)
		{
			c->balance+=c->balance*x;
			io.seekp(rec_count*sizeof(client));
			fileWrite(io,*c);
			break;
		}
		c=fileRead(io);
		rec_count++;
	}
}
void search(fstream &io,int x)
{
	io.seekg(0,ios::end);
	int high=io.tellg()/sizeof(client);
	int low=0;
	while(low<high)
	{
		int mid=(low+high)/2;
		io.seekg(mid*sizeof(client));
		client*c=fileRead(io);
		if(c->number==x)
		{
		cout<<"asdasdsa";	
		}
		else if(c->number>x)
		high=mid-1;
		else
		low=mid+1;
		if(low>high)
		cout<<"clint not found"; 
	}
}