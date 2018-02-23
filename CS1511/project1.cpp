#include <iostream>
using namespace std;
int main()
{
  int width_of_fence,height_of_fence;
  cout<<"Press return after entering a number."<<endl<<"Enter the width of fence:\n";
  cin>>width_of_fence;
  cout<<"Enter the height of fence:\n";
  cin>>height_of_fence;
  cout<<"if the width of fence is "<<width_of_fence<<" feets and "<<endl;
  cout<<"the height of fence is "<<height_of_fence;
  cout<<" feets,then \n"<<"the totallength is: "<<2*width_of_fence+2*height_of_fence<<endl;
  return 0;
}

