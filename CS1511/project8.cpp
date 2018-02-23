#include <iostream>
#include <fstream>
#include <cmath>
double calculate(double myarr[],int size);
//precondition: myarr[]and the size is the array that store the number in the file.
//Postcondition:In this function,it will calculate the the "S" by using the number
//in the file and return the "S" to the result.
using namespace std;
int main()
{
double myarr[100];
ifstream fin;
fin.open("project8.dat");
int count=0,size=0;
while(fin>>myarr[count])
{
count++;
}
//This part is matchin the array to the number in the file
//and calculate how many numbers in the file.
size=count;
double result=calculate(myarr,size);
cout<<"The array in file are"<<endl;
for(int i=0;i<size;i++)
{
cout<<myarr[i]<<"    ";
}
cout<<"The result is"<<result<<endl;
//Dispalying the result and comparing it to the numbers in the file.
fin.close();
return 0;
}

double calculate(double myarr[],int size)
{
double sum=0;
for (int i=0;i<size;i++)
{
sum+=myarr[i];
}
double mean;
mean=sum/size;
double sum2=0;
for(int j=0;j<size;j++)
{
sum2+=pow(myarr[j]-mean,2.0);
}
double mean2=0;
mean2=sum2/size;
return pow(mean2,0.5);
}
//calculating the S by using the equation.
