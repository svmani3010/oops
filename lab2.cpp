#include <iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
int s,l,b;
float r,bs,ht;
cout<<"enter side of a square:";
cin>>s;
cout<<"enter length and breadth of the rectangle:";
cin>>l>>b;
cout<<"enter radius of a circle:";
cin>>r;
cout<<"enter base and height of a triangle:";
cin>>bs>>ht;
cout<<"area of a square is"<<area(s);
cout<<"\n area of the rectangle is"<<area(l,b);
cout<<"\n area of a circle is"<<area(r);
cout<<"\n area of a triangle is"<<area(bs,ht);
}
int area(int s)
{
    return(s*s);
}
int area(int l,int b)
{
   return(l*b);
}
float area(float r)
{
   return (3.14*r*r);
}
float area(float bs,float ht)
{
   return((bs*ht)/2);
}