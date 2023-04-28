#include <iostream>
using namespace std;
void merge(int *arr,int s,int e)
{
    int m = (s+e)/2;
    int len1 = m-s+1;
    int len2 = e-m;
    int *a1 = new int[m-s+1];
    int *a2 = new int[e-m];
    int k = s;
    for(int i=0;i<len1;i++)
    {
        a1[i] = arr[k++];
    }
     k = m+1;
    for(int i=0;i<len2;i++)
    {
        a2[i] = arr[k++];
    }
    int i=0,j=0,OrigArrIndex=s;
    while(i<len1 and j<len2)
    {
        if(a1[i]<a2[j])
        {
            arr[OrigArrIndex] = a1[i];
            i++;
            OrigArrIndex++;
        }
        else
        {
            arr[OrigArrIndex] = a2[j];
            j++;
            OrigArrIndex++;
        }
    }
    while(i<len1)
    {
         arr[OrigArrIndex] = a1[i];
         i++;
         OrigArrIndex++;
    }
    while(j<len2)
    {
         arr[OrigArrIndex] = a2[j];
         j++;
         OrigArrIndex++;
    }
}
void mergeSort(int *arr,int s,int e)
{
    int m = (s+e)/2;
    if(s>=e)
    {
        return;
    }
    mergeSort(arr,s,m);
    mergeSort(arr,m+1,e);
    merge(arr,s,e);
}
int main() {
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    int s = 0;
    int e = n-1;
    mergeSort(arr,s,e);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
