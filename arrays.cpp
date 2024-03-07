#include <iostream>
using namespace std;

int main() 
{
  int count;
  cin>>count;
  int arr[count];
  for(int i=0;i<count;i++)
    {
      cin>>arr[i];
    }
   int l1=0,l2=0,l3=0;
   for(int i=0;i<count;i++)
     {
       if(arr[i]>l3)
       {
         if(arr[i]>l2)
         {if(arr[i]>l1)
           {l3=l2;l2=l1;l1=arr[i];continue;
           }l3=l2;l2=arr[i];continue;
         }l3=arr[i];continue;
       }
     }
   cout<<"The powerful number is :"<<l1;
}
  
  int max=0;
  for(int i=0;i<count;i++)
  {
    if(max<arr[i])
      max=arr[i];
  }
  cout<<"The max number in array :"<<max;

  int l1=0,l2=0,l3=0;
  for(int i=0;i<count;i++)
    {
      if(arr[i]>l3)
      {
        if(arr[i]>l2)
        {if(arr[i]>l1)
          {l3=l2;l2=l1;l1=arr[i];continue;
          }l3=l2;l2=arr[i];continue;
        }l3=arr[i];continue;
      }
    }
  cout<<"The largest three numbers in the array are :"<<l1<<" "<<l2<<" "<<l3;

 int l1=0,l2=0,l3=0;
 for(int i=0;i<count;i++)
   {
     if(arr[i]>l3)
     {
       if(arr[i]>l2)
       {if(arr[i]>l1)
         {l3=l2;l2=l1;l1=arr[i];continue;
         }l3=l2;l2=arr[i];continue;
       }l3=arr[i];continue;
     }
   }
 cout<<"The second largest :"<<l2;

int l1=INT32_MAX,l2=INT32_MAX,l3=INT32_MAX;
 for(int i=0;i<count;i++)
   {
     if(arr[i]<l3)
     {
       if(arr[i]<l2)
       {if(arr[i]<l1)
         {l3=l2;l2=l1;l1=arr[i];continue;
         }l3=l2;l2=arr[i];continue;
       }l3=arr[i];continue;
     }
   }
 cout<<"The second smallest :"<<l2;
