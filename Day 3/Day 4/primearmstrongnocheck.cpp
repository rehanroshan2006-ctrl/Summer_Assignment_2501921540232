#include<iostream>
#include<cmath>
using namespace std;

int main()
{
 int start,end;

 cin>>start>>end;

 for(int num=start;num<=end;num++)
 {
  int temp=num;
  int count=0;
  int sum=0;

  while(temp>0)
  {
   count++;
   temp=temp/10;
  }

  temp=num;

  while(temp>0)
  {
   int digit=temp%10;
   sum=sum+pow(digit,count);
   temp=temp/10; }

  if(sum==num)
  {
   cout<<num<<" ";
  }
 }

 return 0; }