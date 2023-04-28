#include<iostream>
using namespace std;
int partition(int s,int e,int arr[])
{
   //pivot element ko dundo pehle

   int p_index = s;
   int p_element = arr[s];

   //pivot element kitte element chote hai uska count nikaalo 
   int count = 0;
   for(int i=s+1;i<=e;i++)
   {
    if(arr[i]<=p_element)
    {
        count++;
    }
   }
   int sahiPivotindex = s+count;
   swap(arr[sahiPivotindex],arr[p_index]);
   p_index = sahiPivotindex;
   //ab left me chote pivot se aur right me bade pivot se
   
   int i = s;
   int j = e;
   while(i<p_index and j>p_index)
   {
    while(arr[i]<=p_element)
       {
         i++;
       }
    while(arr[j]>p_element)
       {
         j--;
       }
    if(i<p_index and j>p_index)  
        swap(arr[i],arr[j]);
   }
   return p_index;
}
void quicksort(int arr[],int s,int e)
{
    //base case
    if(s>=e)
    {
        return;
    }
    //ek case
    int p = partition(s,e,arr);  

    //recursive calls
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}
int main()
{
    int arr[] = {11,7,2,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int s = 0;
    int e = n-1;
    quicksort(arr,s,e);
    for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
    cout<<endl;
}
