#include <iostream>
using namespace std;
void getInput(int& year,int& month,int& day)
//Precondition: year,month and day are the input
//user will enter.
//Postcondition:these three values will be changed from main memory
//and saved in main memory.
{
cout<<"Please enter the year you want \n";
cin>>year;
cout<<"Pleasr enter the month you want(1-12) \n ";
cin>>month;
cout<<"Please enter the day you want \n ";
cin>>day;
cout<<"The date that you enter is "<<month;
cout<<"/"<<day;
cout<<"/"<<year<<endl;
}
bool isleapyear(int year)
//precondition: the year from main function
//Postcondition:judging if the year is a leap year.
{
if( year%400==0||year%4==0&&year%100!=0){
return true;
}
else
return false;
}
int getcenturyvalue(int year)
//Precondition:the year is from main function
//and is pass by value
//Postcondition:calculate the century value
//and return the value to main function.
{
return (3-year/100%4)*2;
}
int getyearvalue(int year)
//Precondition:the year is from main function
//and is pass by value.
//Postcondition:calculate the year value
//and return the value to main function
{
return year%100/4+year%100;
}
int getmonthvalue(int month,int year)
//Preconditon: the month and year are from main function
//and are pass by values
//Postcondition:calculate the month value
//and return the month value to mian function
{
bool year_leap;
year_leap=isleapyear(year);
if(month==1)
{
   if(year_leap==1)
  {
   return 6;
  }
 else{
  return 0;
  }
}
if(month==2)
{
  if(year_leap==1)
  {
   return 2;
   }
 else
   return 3;
}
if(month==3)
{
return 3;
}
else if(month==4)
{
return 6;
}
else if(month==5)
{
return 1;
}
else if(month==6)
{
return 4;
}
else if(month==7)
{
return 6;
}
else if(month==8)
{
return 2;
}
else if(month==9)
{
return 5;
}
else if(month==10)
{
return 0;
}
else if(month==11)
{
return 3;
}
else if(month==12)
{
return 5;
}
}
void getday(int sum)
//Precondition:sum is from main function
//and it is pass by value
//Postcondition:calculate the sum value
//and find the day of the week.
{
if(sum%7==0)
{
cout<<"It is Sunday of the week \n";
}
else if(sum%7==1)
{
cout<<"It is Monday of the week \n";
}
else if(sum%7==2)
{
cout<<"It is Tuesday of the week \n";
}
else if(sum%7==3)
{
cout<<"It is Wednesday of the week \n";
}
else if(sum%7==4)
{
cout<<"It is Thursday of the week \n";
}
else if(sum%7==5)
{
cout<<"It is Friday of the week \n";
}
else if(sum%7==6)
{
cout<<"It is Saturday of the week \n";
}
}
int main()
{
int year=0,month=0,day=0;
getInput(year,month,day);
bool leap_year;
leap_year=isleapyear(year);
cout<<"judging if the year you enter is a leap year \n ";
if(leap_year==1)
{
cout<<"true"<<endl;
}
else
cout<<"false"<<endl;
int centuryvalue;
centuryvalue=getcenturyvalue(year);
int yearvalue;
yearvalue=getyearvalue(year);
int monthvalue;
monthvalue=getmonthvalue(month,year);
int sum;
sum=day+centuryvalue+yearvalue+monthvalue;
getday(sum);
return 0;
}

