#include<iostream.h>
class point
{
	private:
	float x,y;
	public:
	point(float=1,float=1);
	void set(float,float);
	float getx(){return x;}
	float gety(){return y;}
	friend void print(point);
	~point(){}
};

point::point(float x1,float y1)
{
	x=x1;
	y=y1;
}
void point::set(float x1,float y1)
{
	x=x1;
	y=y1;
}
void print(point c)
{
	cout<<"x="<<c.x<<endl;
	cout<<endl<<"y="<<c.y<<endl;
}


class circle{
	private:
	float r;
	point p;
	public:
	circle(float ,float,float);
	void setc(float);
	float getc(){return r;}
	void print1();
	~circle()
	{
	cout<<"end"<<endl;
	};

};
circle::circle(float x,float y,float r1)
{
	r=r1;
	p.set(x,y);
}
void circle::setc(float r1)
{
	r=r1;
}
void circle::print1 ()
{
cout<<"r= "<<r<<endl;
print (p);
}
main()
{
	float xb,yb,rb,u,w;
	cout<<"* please enter x  ";
    cin>>xb;
	cout<<"* please enter y  ";
    cin>>yb;
	cout<<"* plaese enter r  ";
    cin>>rb;
    point p(xb,yb);
	circle c(xb,yb,rb);
	print(p);
	cout<<"enter the new x  ";
	cin>>u;
	cout<<"enter the new y  ";
	cin>>w;
	p.set(u,w);
	cout<<"the point after editing "<<endl;
	print(p);
	cout<<endl;
	cout<<"the circle "<<endl;
	c.print1();


}
