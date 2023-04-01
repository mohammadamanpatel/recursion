
// optimized solution

class Solution {
public:
    void addition(string &num1,string &num2,int i,int j, int carry,string &result)
    {
        //base case
        if(i<0 and j<0)
        {
            if(carry!=0)
            {
                result.push_back(carry + '0');
            }
            return;
        }

        //ek case

        int a = (i>=0 ? num1[i] : '0') - '0';
        int b = (j>=0 ? num2[j] : '0') - '0';
        int c = a + b + carry;
        int digit = c%10;
        carry = c/10;
        result.push_back(digit + '0'); 

        //recursive case
        
        addition(num1,num2,i-1,j-1,carry,result);
    }
    string addStrings(string num1, string num2) {
        string ans = "";
        int carry = 0;
        addition(num1,num2,num1.size()-1,num2.size()-1,carry,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
