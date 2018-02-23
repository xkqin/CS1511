#include <iostream>
#include <fstream>
#include <cmath>
double calculate(double* p,int size);
//precondition: myarr[]and the size is the array that store the number in the file.
//Postcondition:In this function,it will calculate the the "S" by using the number
//in the file and return the "S" to the result.
using namespace std;
int main()
{
ifstream fin;
fin.open("project8.dat");
int count=0,size=0;
int ch;
while(fin>>ch)
{
count++;
}
size=count;
fin.close();
fin.open("project8.dat");
double* p=new double[count];
for(int i=0;i<count;i++)
{
fin>>ch;
*(p+i)=ch;
}
double result=calculate(p,size);
cout<<"The result is"<<result<<endl;
for(int i=0;i<size;i++,p++)
{
cout<<"array"<<" is "<<*p<<endl;
}
p-=size;
delete []p;
fin.close();
return 0;
}
double calculate(double* p,int size)
{
double sum=0;
for (int i=0;i<size;i++)
{
sum+=*(p++);
}
p-=size;
double mean;
mean=sum/size;
double sum2=0;
for(int j=0;j<size;j++)
{
sum2+=pow(*(p++)-mean,2.0);
}
double mean2=0;
mean2=sum2/size;
return pow(mean2,0.5);
}
