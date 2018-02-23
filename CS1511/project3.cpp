#include <iostream>
using namespace std;
int main()
{
const double pi=3.1415926,y=62.4;
double weight_in_pounds,radius_in_feets,V,Fb;
char A;
// Declear the variables
cout<<" Welcme to xukun Qin's program \n";
do{
cout<<" You should enter the weigth in pounds of the sphere \n";
cin>>weight_in_pounds;
while(weight_in_pounds<=0){
cout<<" You enter a wrong number please enter again \n";
cin>>weight_in_pounds;
}
cout<<" Then you should enter the radius in feet of the sphere\n";
cin>>radius_in_feets;
while(radius_in_feets<=0){
cout<<"You enter a wrong number please enter again \n ";
cin>>radius_in_feets;
// Enable the user to enter a right number    Input
}
V=4/3*pi*radius_in_feets*radius_in_feets*radius_in_feets;
Fb=V*y;
// Processing the V and Fb
 if (Fb>=weight_in_pounds){
  cout<<" The sphere will float in water\n";
} 
 else{
 cout<<"The sphere will sink in water \n";
}
// calculate if the sphere will float in the water   Output
cout<<"Do you want to again?(Y/N) \n";
cin>>A;
// Asking the user if he or she want to again
}while(A=='Y'&&A!='N');
{
cout<<"See you!\n";
}
return 0;
}
