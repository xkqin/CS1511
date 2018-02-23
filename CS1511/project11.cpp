#include <iostream>
using namespace std;
class dayofweek
{
private:
	int year;
	int month;
	int day;
	bool isleapyear();
	int getcenturyvalue();
	int getyearvalue();
	int getmonthvalue();
public:
	dayofweek(int y=999,int m=1,int d=1)
	{
		year=y;
		month=m;
		day=d;
	}
	int getday(){return day;}
	int getmonth(){return month;}
	int getyear(){return year;}
	bool setter(int y,int m, int d);
	void getda();
};
bool dayofweek::setter(int y,int m, int d)
{
if(y>999&&m>0&&d>0&&m<12&&d<31)
{
year=y;
month=m;
day=d;
return true;
}
else
{
cout<<"You enter a wrong number"<<endl;
year=y;
month=m;
day=d;
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
dayofweek u1(1,1,1);
int a,b,c;
cout<<"Please enter the year you want \n";
cin>>a;
cout<<"Pleasr enter the month you want(1-12) \n ";
cin>>b;
cout<<"Please enter the day you want \n ";
cin>>c;
bool ok;
ok=u1.setter(a,b,c);
cout<<"The date you enter is "<<u1.getmonth()<<"/"<<u1.getday()<<"/";
cout<<u1.getyear()<<endl;
if(ok)
u1.getda();
else
cout<<"Please try again";
return 0;
}

