// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int lsf = INT_MAX;
//         int op = 0;
//         int pist = 0;
        
//         for(int i = 0; i < prices.size(); i++){
//             if(prices[i] < lsf){
//                 lsf = prices[i];
//             }
//             pist = prices[i] - lsf;
//             if(op < pist){
//                 op = pist;
//             }
//         }
//         return op;
//     }
// };

class Solution {
  public:
  int maxProfit(vector<int> &prices)
  {
      int minimal=prices[0];
      int profit=0;
      int cost;
      for(int i=1;i<prices.size();i++)
      {
          
          cost=prices[i]-minimal;
         profit=max(profit,cost);
         minimal=min(minimal,prices[i]);
      }
      return profit;
  }
};