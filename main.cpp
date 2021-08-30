#include"linked_Stack.h"
#include<iostream>
using namespace std;
int main()
{
   LinStack <int> s;
   cout<<"the pure stack is :";
   s.push(22);
   s.push(47);
   s.push(52);
   s.push(41);
   s.push(40);
   s.Dsiplay();
   cout<<"After pop the top \" 40\"\n\n";
   s.pop();
   s.Dsiplay();
   int x=0;
   cout<<"\n\nthe top now is = ";s.getTop(x);

}