class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minp=prices[0];
        int maxp=0;
        for(int i=0;i<n;i++){
          maxp=max((prices[i]-minp),maxp);
          minp=min(prices[i],minp);
        }
    return maxp;
    }
};
