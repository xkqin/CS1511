#include <iostream>
using namespace std;
int main()
{
int weight_in_pounds,height_in_inches,age,bmrf,bmrm;//Declaer the variable
char A;//Declear a letter
cout<<"Welcome to xukun Qin's program !" <<endl<<"First you need to enter your age: \n";
cin>>age;//input the age
cout<<"and you should enter your weight in pounds: \n";
cin>>weight_in_pounds;//input the weight in pounds
cout<<"and enter your height in inches: \n";
cin>>height_in_inches;//input the height in inches
cout<<"Choose your sex: (M/F)";// input the letter
cin>>A;
if (A=='M'||A=='m'){
    cout<<" You are male and your weight is "<<weight_in_pounds<<" pounds and your height is "<<height_in_inches;
    cout<<"inches \n";
    cout<<" The BMR you need is ";
    bmrm=66+(6.3*weight_in_pounds)+(12.9*height_in_inches)-(6.8*age);//processing
    cout<<bmrm;
    cout<<" calories \n";
    cout<<"So you need "<<bmrm/230<<"chocolates bars to maintain your body \n";//output the numbers
}
else  if (A=='F')
{
   cout<<" Your are female and your weight is "<<weight_in_pounds<<" pounds and your height is "<<height_in_inches;
   cout<<"inches \n";
   cout<<"The BMR you need is ";
   bmrf=655+(4.3*weight_in_pounds)+(4.7*height_in_inches)-(4.7*age);//processing
   cout<<bmrf;
   cout<<" calories \n";
   cout<<"So you need "<<bmrf/230<<" chocolates bars to maintain your body \n";// output the numbers
}

else
{
 cout<<"WRONG INPUT \n ";
}
return 0;
}

