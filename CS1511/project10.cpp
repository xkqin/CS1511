#include <iostream>
using namespace std;
class dayofweek
{
public:
	int year;
	int month;
	int day;
	bool isleapyear();
	int getcenturyvalue();
	int getyearvalue();
	int getmonthvalue();
	dayofweek(int y=999,int m=1,int d=1)
	{
		year=y;
		month=m;
		day=d;
	}
	bool check();
	void getda();
};
bool dayofweek::check()
{
if(year>999&&month>0&&day>0&&month<12&&day<31)
{
return true;
}
else
{
cout<<"You enter a wrong number"<<endl;
}
return false;
}

bool dayofweek::isleapyear()
{
if( year%400==0||year%4==0&&year%100!=0){
return true;
}
else
return false;
}
int dayofweek::getcenturyvalue()
{
return (3-year/100%4)*2;
}
int dayofweek::getyearvalue()
{
return year%100/4+year%100;
}
int dayofweek::getmonthvalue()
{
bool year_leap;
year_leap=isleapyear();
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
void dayofweek::getda()
{
int centuryvalue;
centuryvalue=getcenturyvalue();
int yearvalue;
yearvalue=getyearvalue();
int monthvalue;
monthvalue=getmonthvalue();
int sum;
sum=day+centuryvalue+yearvalue+monthvalue;
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
dayofweek u1;
cout<<"Please enter the year you want \n";
cin>>u1.year;
cout<<"Pleasr enter the month you want(1-12) \n ";
cin>>u1.month;
cout<<"Please enter the day you want \n ";
cin>>u1.day;
bool ok;
ok=u1.check();
cout<<"The date you enter is "<<u1.month<<"/"<<u1.day<<"/";
cout<<u1.year<<endl;
if(ok)
u1.getda();
else
cout<<"Please try again";
return 0;
}

