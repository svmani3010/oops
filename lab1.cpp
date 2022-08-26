#include <iostream>
using namespace std;
//user-defined function
int largestNumber(int a,int b,int c){
int max;
if (a>=b&&a>=c){
max=a;
}
else if (b>=a&&b>=c){
max=b;
}
else{
max=c;
}
return max;
}
int main(){
int num1,num2,num3,largest;
cout<<"enter the first number:";
cin>>num1;
cout<<"enter the second number:";
cin>>num2;
cout<<"enter the third number:";
cin>>num3;
//calling out function
largest=largestNumber(num1,num2,num3);
cout<<"largest number is:"<<largest<<endl;
return 0;
}