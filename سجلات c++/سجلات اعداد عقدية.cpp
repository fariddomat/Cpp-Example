#include <iostream.h>
#include <conio.h>
#include <math.h>
struct complex
{
    float re, im;
};
void read(complex &);
complex sum(complex, complex);
void print(complex);
main()
{
    complex c, c1, c2;
    read(c1);
    read(c2);
    c = sum(c1, c2);
    cout << "sum=";
    print(c);
    getch();
}
void read(complex &c)
{
    cin >> c.re >> c.im;
}
complex sum(complex c1, complex c2)
{
    complex c;
    c.re = c1.re + c2.re;
    c.im = c1.im + c2.im;
    return c;
}
void print(complex c)
{
    cout << c.re;
    if (c.im > 0)
        cout << "+i" << c.im << endl;
    else
        cout << "-i" << abs(c.im) << endl;
}
