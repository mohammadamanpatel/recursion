#include <iostream>
using namespace std;

void reverseString(string &s,int length,int i,int j){
    if(i>=j){
        return;
    }
    swap(s[i],s[j]);
    reverseString(s,length,i+1,j-1);
}
int main()
{
    string s = "amanpatel";
    int i = 0;
    int j = s.length()-1;
    reverseString(s,s.length(),i,j);
    cout<<s;
    return 0;
}
