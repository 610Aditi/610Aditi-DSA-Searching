#include<iostream>
using namespace std;

int linearsearch(int A[],int num, int n)
{ 
for(int i=0;i<n-1;i++)                   // Loop until we have processed all elements
{
  if(A[i]==num)
  {
  return i+1;
  }
} 
return -1; 

}

int main()
{   int A[]={74,498,537,920,983,32,5643,745,43,467};
    int num,result;
    int n=sizeof(A)/sizeof(A[0]);

    cout<<"enter the number do you want to search in the list : ";
    cin>>num;
    result=linearsearch(A,num,n);
    if(result!=-1)
    cout<<"found the number at : "<<result;
    else 
    cout<<"element not found ";
    return 0;

}