#include<iostream.h>

class point{
protected :
    int x,y;
public :
    point(int,int);
     void setx(int);
     void sety(int);
     int getx(){return x;}
     int gety(){return y;}
     void print();
     ~point(){}
} ;
point::point(int x1,int y1)
{setx(x1);sety(y1);}
void point::print()
{cout<<"("<<x<<","<<y<<")";}
void point::setx(int x1){x=x1;}
void point::sety(int y1){y=y1;}

class circle : public point{
protected:
    float r;
public :
    circle(int,int,float);

    void setr(float r1)
    {
        r=r1;
    }

    float getr(){return r;}
    void print();
    ~circle(){}
};

circle::circle(int x1,int y1,float r1) : point(x1,y1)
{r=r1; }
void circle::print()
{
    cout<<r; point::print();
}

class cylinder : public circle{
private :
    float h;
public :
    cylinder(int,int,float,float);
    void seth(float h1)
    {
        h=h1;
    }
    float geth(){return h;}
    void print();
    ~cylinder(){}
};
cylinder::cylinder(int x1,int y1,float r1,float h1) : circle(x1,y1,r1)
{h=h1; }
void cylinder::print()
{
    cout<<"high="<<h<<"\n"<<"rdius="<<r<<"\n"<<"position ("<<x<<","<<y<<")"<<endl;
}



main()
{
    point p(1,2);
    circle c(3,2,8.5);
    cylinder q(9,8,7,6);
    q.print();

}
