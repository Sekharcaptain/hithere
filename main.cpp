#include <iostream>                     //working only for 5 digits with a warning
#include<math.h>
using namespace std;
int main()
{
  int n,m,temp,v;
  int count=0;
  cout<<"enter a number "<<endl;
  cin>>n;
  temp=n;
  for (int i=1;i>0;i)
  {
      if(temp>0)
   {
       i=i*10;                // for counting the number of digits
      m=n/i;
      temp=m;
     count++;
      }
      else
        break;
  }
  int d=0;
  int temp2=count;
  int temp4=count;
  int temp5=count;
 int a[count];
 v=pow(10,count-1);
 a[d++]=n/v;                //first term
 int tempo=0,g;
 for(int k=2;k<3;k++)
 {
     tempo=(n/(1*pow(10,count-k)));      //second term
     g=pow(10,1);
    a[d++]=tempo%g;        
 }
 int temper=0,h;
 int q=0;
 int temp3=temp2-d;
 for(int i=3;i<=count;i++)
 {
     for(int j=3;j<temp2;j++)
    { 
    temper += a[q]*pow(10,temp2-j);
    q++;
    }
     h=n/pow(10,temp3-1);
    a[d++]=h%temper;
    temper=0;
    q=0;
    temp2++;
    temp3--;
 }
 int t[temp4];
 for(int l=0;temp4>=0;l++)
 {
     t[l]=a[temp4-1];
     temp4--;
 }
 cout<<"the reversed number is : "<<endl;
 for(int i=0;i<temp5;i++)
 {
     cout<<"  "<<t[i];
 }
 cout<<endl;
 return 0;
}