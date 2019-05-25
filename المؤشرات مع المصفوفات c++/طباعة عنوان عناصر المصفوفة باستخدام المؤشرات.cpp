#include <iostream>
using namespace std;

int main()
{
    float arr[5]={
    	1,2,3,4,5
    };
    float *ptr;
    
    cout << "Displaying address using arrays: " << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<< endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "ptr + " << i << " = "<<*( ptr + i )<< endl;
    }
    return 0;
}