#include <iostream>
using namespace std;

int main()
{
   int data[5];
   cout << "Enter elements: ";

   for(int i = 0; i < 5; ++i)
      cin >> data[i];

	int *p;
	p=data;
   cout << "You entered: ";
   for(int i = 0; i < 5; ++i)
      cout << endl << p[i];

   return 0;
}