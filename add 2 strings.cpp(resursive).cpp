class Solution {
public:
    string addition(string num1,string num2,int i,int j, int carry = 0)
    {
        //base case
        if(i<0 and j<0)
        {
            if(carry!=0)
            {
                return string(1,carry + '0');
            }
            return "";
        }

        //ek case

        int a = (i>=0 ? num1[i] : '0') - '0';
        int b = (j>=0 ? num2[j] : '0') - '0';
        int c = a + b + carry;
        int digit = c%10;
        carry = c/10;
        string result = "";
        result.push_back(digit + '0'); 

        //recursive case
        
        result += addition(num1,num2,i-1,j-1,carry);
        return result;
    }
    string addStrings(string num1, string num2) {
        string ans = addition(num1,num2,num1.size()-1,num2.size()-1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
