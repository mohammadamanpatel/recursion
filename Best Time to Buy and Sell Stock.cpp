class Solution {
public:
    void buy_sellstock(vector<int>&prices,int &max_profit,int&min_price,int i)
    {
        //base case
        if(i>prices.size()-1)
        {
            return;
        }
        //ek case
        if(prices[i]<min_price)
        {
            min_price = prices[i];
        }  
        int  BestTimetoBuyandSellStock = prices[i]-min_price;
        if(BestTimetoBuyandSellStock>max_profit)
        {
            max_profit = BestTimetoBuyandSellStock;
        }
        //recursive call
        buy_sellstock(prices,max_profit,min_price,i+1);
    }
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int max_profit = INT_MIN;
        int min_price = INT_MAX;
        buy_sellstock(prices,max_profit,min_price,i);
        return max_profit;
    }
};
