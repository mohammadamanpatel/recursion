#include <iostream>
#include<vector>
using namespace std;
void printsubarray(vector<int>&arr,int i,int j)
{
   if(i==arr.size()-1) 
   {
       return;
   }
   if(j>arr.size()-1)
   {
       i = i+1;
       j=i;
   }
   for(int x = i;x<=j;x++)
   {
       cout<<arr[x]<<" ";
   }
   cout<<endl;
   printsubarray(arr,i,j+1);
}
int main()
{
    vector<int>arr = {1,2,3,4,5,6,7};
    int i = 0;
    int j = i;
    vector<int>brr;
    printsubarray(arr,i,j);
    return 0;
}
