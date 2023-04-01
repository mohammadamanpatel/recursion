class Solution {
public:
    string addStrings(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        string ans;
      int carry = 0;
      int digit = 0;
      int x = 0;
      while(i>=0 && j>=0)
      {
          x = (a[i] - '0') + (b[j]-'0') + carry;
          digit = x%10;
          ans.push_back(digit + '0');
          carry = x/10;
          i--; j--;
      }
      while(i>=0)
      {
          x = (a[i] - '0') + 0 + carry;
          digit = x%10;
          ans.push_back(digit + '0');
          carry = x/10;
          i--; 
      }
      while(j>=0)
      {
          x = 0 +  (b[j]-'0') + carry;
          digit = x%10;
          ans.push_back(digit + '0');
          carry = x/10;
          j--;
      }
      if(carry!=0)
      {
          ans.push_back(carry + '0');
      }
      if(ans[ans.size()-1] == 0)
      {
          ans.pop_back();
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};
