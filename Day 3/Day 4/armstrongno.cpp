#include<iostream>
#include<cmath>
using namespace std;

int main()
{
 int n;
 cin>>n;
 int temp=n;
 int sum=0;
       int digit;
 int count=0;

        while(temp>0)
 {
  count++;
  temp=temp/10;}

       temp=n;

 while(temp>0)
 {
  digit=temp%10;
           sum=sum+pow(digit,count);
  temp=temp/10; }

 if(sum==n)
 {
       cout<<"Armstrong Number";
 }
 else
 {
      cout<<"Not Armstrong Number";}
 

 return 0;}
