#include <iostream>
using namespace std;
int main()
{
char A;
cout<<"This program is to calculate the approximate value of pi \n ";
 int i;
 double n,s,a,pi=0;
cout<<"Please enter the a n that determines the number of terms in the approximation of value of pi: \n";
cin>>n;// aske user the number of the terms  Input 
for(i=1;i<=n;i++)
{
if (i%2==0){
s=1.0/(2.0*i+1.0);
}
else{
s=(-1.0)/(2.0*i+1.0);
}
pi=pi+s;
}
a=4.0*(pi+1);
cout<<"The approximation is \n ";
cout<<a;// Display the pi Output

return 0;
}
