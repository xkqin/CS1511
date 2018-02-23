#include <iostream>
#include <cmath>
using namespace std;
int main()
{
char A;
cout<<"This program is to calculate the approximate value of pi \n ";
do{
 double n,pi,s=0,i;
cout<<"Please enter the a n that determines the number of terms in the approximation of value of pi: \n";
cin>>n;// aske user the number of the terms  Input 
while(n<=0){
cout<<"You enter a wrong number please enter a positive number :\n";
cin>>n;
}//If user enter a wrong number ask user reenter
for(i=1;i<=n;i++)
{
   s+=pow(-1.0,i)/(2*i+1);
}
pi=4*(1+s);
//processing 
cout<<"The approximation is \n ";
cout<<pi;// Display the pi Output
cout<<"Do you want to enter the number of terms again?(Y/N)\n";
cin>>A;// Ask user if he or she want to again
while (A!='Y'&& A!='N')
{
cout<<"You enter a wrong letter, please enter again:  \n";
cin>>A;// If the user enter a wrong letter ask user reenter
}
}while(A=='Y'&&A!='N');
{
cout<<"See you \n";
}
return 0;
}
