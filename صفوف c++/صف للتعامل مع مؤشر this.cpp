#include<iostream.h>
class test{
private:
int x;
public:
test(int x1){x=x1;}
void print()const
{ cout<<x<<endl;
cout<<(*this).x<<endl;
cout<<this->x<<endl;
}
~test(){}
};
main()
{
test t(10);
t.print();
return 0;
}
