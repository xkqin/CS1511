#include <iostream>
using namespace std;
double total(double price_of_the_house,double down_payment);
double getinterest(double initial_loan_balance);
// Title tell that this function is exist
int main()
{
double price_of_the_house,down_payment;
double annual_mortgage,cost;
char A;
do{
cout<<"Please enter the price of the house \n";
cin>>price_of_the_house;
while(price_of_the_house<0)
{
 cout<<"You enter a negative number"; 
 cout<<"Do you want to enter more date?(Y/N)";
 cin>>A;
 if(A=='N'||A=='n'){
 cout<<"See you \n";
 return 0;
} 
 cout<< "please enter a positive:\n"; 
 cin>>price_of_the_house;
}
cout<<"Please enter the down payment \n";
cin>>down_payment;
while(down_payment<0)
{
cout<<"You enter a negative number ";
cout<<"Do you want to enter more date (Y/N)";
cin>>A;
if(A=='N'||A=='n'){
cout<<"See you \n";
return 0;
}
cout<<"please enter a positive: \n";
cin>>down_payment;
}
// Aske user to enter the parameteters   INPUT
cost=total(price_of_the_house,down_payment);
// Processing and call the total function 
cout<<"The cost is "<<cost<<endl;
// OUTPUT
cout<<"Do you want to enter another group of numbers?(Y/N)";
cin>>A;
// Aske user if he or she want to again
while(A!='Y'&&A!='y'&&A!='N'&&A!='n')
{
cout<<"You enter a wrong letter, please enter again:(Y/N) \n";
cin>>A;
}
}while(A=='Y'||A=='y');
cout<<"See you !\n";
return 0;
}
double total(double price_of_the_house,double down_payment)
{
  double annual_tax,initial_loan_balance,interest;
  initial_loan_balance=price_of_the_house-down_payment;
  annual_tax=0.35*0.06*initial_loan_balance;
  interest=getinterest(initial_loan_balance);
  return (0.03*initial_loan_balance)+interest-annual_tax;
}
double getinterest(double initial_loan_balance)
{

  return 0.06*initial_loan_balance;
}

