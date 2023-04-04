class Solution {
public:
    void houserob(vector<int>&nums,int i,int &maxi,int sum)
    {
        //base case
        if(i>=nums.size())
        {
            maxi = max(sum,maxi);
            return;
        }

        //recursives calls directly
        //include
        houserob(nums,i+2,maxi,sum+nums[i]);
        //exclude
        houserob(nums,i+1,maxi,sum);
    }
    int rob(vector<int>& nums) {
        int i = 0;
        int maxi = INT_MIN;
        int sum = 0;
        houserob(nums,i,maxi,sum);
        return maxi;
    }
};
