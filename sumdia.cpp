#include <iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,n,p,sum=0,sum1=0;
    cin>>n;
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           cin>>a[i][j];
        }
    }

   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
            if(i==j)
            sum=sum+a[i][j];
       }
   }

   for(i=0,j=n-1;i<n,j>=0;i++,j--)
   {
           sum1=sum1+a[i][j];

   }
p=sum+sum1;
cout<<p;
return 0;
}
