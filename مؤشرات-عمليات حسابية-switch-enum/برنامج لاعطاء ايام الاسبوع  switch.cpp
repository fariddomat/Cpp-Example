#include<iostream.h>
#include<conio.h>
main ()
{
     int x;
     do{
         cin>>x;
         switch(x){
                   case 1:{cout<<"sat\n";break;}
                   case 2:{cout<<"sun\n";break;}
                   case 3:{cout<<"mon\n";break;}
                   case 4:{cout<<"tus\n";break;}
                   case 5:{cout<<"wed\n";break;}
                   case 6:{cout<<"thu\n";break;}
                   case 7:{cout<<"sun\n";break;}
                   default :{cout<<"wrong nomber";break;}
                   }}while(x>=1&&x<=7);
                   getch();
                   }
