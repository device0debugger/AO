#include<iostream>
using namespace std;
int main()
{
char ch;
float n1,n2;
cout<<"\n\n1st Number : ";
cin>>n1;
cout<<"\n\n2nd Number : ";
cin>>n2;
do
{
cout<<"\n\n\n\n\t0. All ";
cout<<"\n\t1. Addition (+)";
cout<<"\n\t2. Substraction (-)";
cout<<"\n\t3. Multiplication (*)";
cout<<"\n\t4. Division (/)";
cout<<"\n\t5. Exit (E)";
cout<<"\n\t6. Try New Numbers";
cout<<"\n\nChoose : ";
cin>>ch;
switch(ch)
{
case '0' :
cout<<"\n\t Added : "<<n1+n2;
cout<<"\n\t Substracted : "<<n1-n2;
cout<<"\n\t Multiplied : "<<n1*n2;
cout<<"\n\t Divided : "<<n1/n2;
break;

case '1' :
case '+' : cout<<"\n\n\t\t->\t"<<n1+n2;
cout<<"\t<-";
break;

case '2' :
case '-' : cout<<"\n\n\t\t->\t"<<n1-n2;
cout<<"\t<-";
break;

case '3' :
case '*' : cout<<"\n\n\t\t->\t"<<n1*n2;
cout<<"\t<-";
break;

case '4' :
case '/' : cout<<"\n\n\t\t->\t"<<n1/n2;
cout<<"\t<-";
break;

case '5' :
case 'E' :
case 'e' :
cout<<"\n\t-------------------------------";
 cout<<"\n\tThank you for using the program";
cout<<"\n\t-------------------------------\n\n\n"; 
break;
default : cout<<"\nInvalid Choice !!!";
}
}
while (ch!='5' && ch!='E' && ch!='e');
return 0;
}
