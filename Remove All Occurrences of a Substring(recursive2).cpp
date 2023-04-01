class Solution {
public:
    void removeAllocc(string &s,string&part)
    {
        int pos = s.find(part);
        if(pos!=string::npos)
        {
            
        string left = s.substr(0,pos);
        string right = s.substr(pos+part.length(),s.size());
        s = left + right;
        removeAllocc(s,part);
        }
        else{
            return;
        }
    }
    string removeOccurrences(string s, string part) {
        int pos = s.find(part);
        removeAllocc(s,part);
        return s;
    }
};
