#include <iostream>

using namespace std;
void removeAllocc(string &s,string &part,int pos)
{
    //base case
    if(pos==string::npos)
    {
        return;
    }
    
    //ek case
    s.erase(pos,part.length());
    removeAllocc(s,part,s.find(part));
}
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    int pos = s.find(part);
    removeAllocc(s,part,pos);
    cout<<s;
    return 0;
}
