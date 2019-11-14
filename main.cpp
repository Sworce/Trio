#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void rearrange(int&, int&, int&);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
  rearrange(red, green, blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
void rearrange(int& num1, int& num2, int& num3) 
{   
    if(num1 < num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if(num1 < num3)
    {
        int temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if(num2 < num3)
    {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
}
