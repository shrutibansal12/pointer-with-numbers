#include<iostream>
using namespace std;
int main()
{
int *p;
int arr[]={1,2,3,4,5,6};
p=arr;
cout<<"Enter elements"<<endl;
for(int i=0;i<6;i++)
{
cout<<*p<<endl;
p++;
}
return 0;
}
