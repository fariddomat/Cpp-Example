#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

struct birthday {int day, month, year;
};

struct client {int number;
			   char name[30];
			   double balance;
			   birthday bDate;
};

void fileRead (ifstream &, client &);
void fileWrite (ofstream &, client);
void writeAll (ofstream &, client []);
void print (ifstream &);
void copy (ifstream &, ofstream &);
void update (ifstream &, ofstream &, char [], float);
void search (ifstream &, int);

const int n = 3;
main()
{
	ofstream out("E:\\clients.txt", ios :: out);
	client a[n];
	writeAll (out, a);
	ifstream in;
	in.open ("E:\\Clients.txt", ios :: in);
	print (in);
	ofstream out2("E:\\Clients2.txt", ios :: out);
	cout << "Enter name of client:" << endl;
	char name [30];
	cin >> name;
	cout << "Enter balance" << endl;
	float x;
	cin >> x;
	in.close();
	in.open("E:\\Clients.txt", ios :: in);
	update (in, out2, name, x);
	cout << "Enter client number:" << endl;
	int num;
	cin >> num;
	in.close();
	in.open ("E:\\Clients.txt", ios :: in);
	search (in,num);
}

void fileRead (ifstream & inf, client & c)
{
	inf >> c.number >> c.name >> c.balance
		>> c.bDate.day >> c.bDate.month >> c.bDate.year;
}

void fileWrite (ofstream & outf, client c)
{
	outf << c.number << "\t" << c.name << "\t" << c.balance << "\t"
		 << c.bDate.day << "-" << c.bDate.month << "-" << c.bDate.year << endl ;
}

void writeAll (ofstream & outf, client a [])
{
	cout << "Enter Number, Name, Balance, Birthday (Day, Month, Year)" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].number >> a[i].name >> a[i].balance
			>> a[i].bDate.day >> a[i].bDate.month >> a[i].bDate.year;
		fileWrite (outf, a[i]);
	}
}

void print (ifstream & inf)
{
	while (!inf.eof())
	{
		client c;
		fileRead(inf, c);
		cout << c.number << "\t" << c.name << "\t" << c.balance << "\t"
		<< c.bDate.day << "-" << c.bDate.month << "-" << c.bDate.year << endl;
	}
}

void search (ifstream & inf, int num)
{
	client c;
	int sum = 0;
	while (!inf.eof())
	{
		fileRead (inf, c);
		if (c.number == num)
		{
			cout << c.number << "\t" << c.name << "\t" << c.balance << "\t"
				 << c.bDate.day << "-" << c.bDate.month << "-" << c.bDate.year << endl;
			++sum;
		}

		if (sum == 0)
			cout << "Data NOT Found" << endl;
	}
}

void update (ifstream & inf, ofstream & outf, char name [], float x)
{
	client b;
	while (!inf.eof())
	{
		fileRead (inf,b);
		if (strcmp (b.name, name) == 0)
			b.balance += x*b.balance;
		fileWrite (outf, b);
	}
}
