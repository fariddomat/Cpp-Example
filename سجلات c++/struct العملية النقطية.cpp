#include<iostream>
using namespace std;
struct Time{
	int houre;
	int minutes;
	int seconde;
}wakeup, lunch;

int main(){
wakeup.houre=10;
wakeup.minutes=12;
wakeup.seconde=14;
cout<<wakeup.houre<<":"
	<<wakeup.minutes<<":"
	<<wakeup.seconde<<endl;
	
}