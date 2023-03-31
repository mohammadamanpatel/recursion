

#include <iostream>

using namespace std;
void findLasOcc(int i,char target,int length,string s,int &ans)
{
    if(i==length)
    {
      return;
    }
    if(s[i]==target){
       ans = i;
    }
    findLasOcc(i+1,target,length,s,ans);
}
int main()
{
    string s = "aman";
    int i=0;
    char target = 'a';
    int ans;
    findLasOcc(i,target,s.size(),s,ans);
    cout<<ans<<endl;
    return 0;
}
