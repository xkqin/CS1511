#include <iostream>
#include <fstream>
using namespace std;
void getresult();
void getnonspace();
void getletter();
void getevery();
int main()
{
getresult();
//invoke the function called getresult.en("project7.dat");
fout.open("project7a.dat",ios::app);
char ch;
int count=0;
while(fin.get(ch)){
count++;
}
//open the file and find all the characters in the file.
cout<<"The total number of occurrences of characters in the file is"<<count<<endl;
fout<<"The total number of occurrences of characters in the file is "<<count<<endl;

getnonspace();
//invoke the function called getnonspace.
getletter();
//invoke the function called getletter.
getevery();
//invoke the function to find how many times every characters occupied.
fin.close();
fout.close();
}
void getnonspace()
{
char ch;
ifstream fin;
ofstream fout;
//fin.open("project7.dat");
//fout.open("project7a.dat",ios::app);
int count2=0,count=0;
while(fin.get(ch)){
count++;
if(ch==' '||ch=='\n'||ch=='\t'){
count2++;
}
//open the file and find the nonwhitespace.
}
cout<<"The total number of non-whitespace is  "<<count-count2<<endl;
fout<<"The total number of non-whitespace is  "<<count-count2<<endl;
fin.close();
fout.close();
}
void getletter()
{
ifstream fin;
ofstream fout;
fin.open("project7.dat");
fout.open("project7a.dat",ios::app);
char ch;
int numbers[128];
int letter=0,letter2=0;
for(int j=0;j<128;j++){
numbers[j]=0;
}
while(fin.get(ch)){
int i=ch;
numbers[i]++;
if(i>=65&&i<=90)
letter++;
if(i>=97&&i<=122)
letter2++;
}
//find how many numbers of letter in the file and output on the screen and another file.
cout<<"The total number of letter is"<<letter+letter2<<endl;
fout<<"The total number of letter is"<<letter+letter2<<endl;
fin.close();
fout.close();
}

void getevery()
{
ifstream fin;
ofstream fout;
fin.open("project7.dat");
fout.open("project7a.dat",ios::app);
char ch;
int numbers[128];
int letter=0,letter2=0;
for(int j=0;j<128;j++){
numbers[j]=0;
}
while(fin.get(ch)){
int i=ch;
numbers[i]++;
}
for (int k=32;k<128;k++)
{
if(k!=0){
cout<<(char) k<<" has showed up "<<numbers[k]<<"times"<<endl;
fout<<(char) k<<"has showed up "<<numbers[k]<<"times"<<endl;
}
// find how many times every characters occupied in the flie.
}
}

