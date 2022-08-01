class Solution {
public:
    int maxProfit(vector<int> prices){
    int max_profit = 0 ;
	int buy=INT_MAX ,profit;

	for(int i=0; i<prices.size(); i++){
		if(prices[i] < buy){
            buy = prices[i];
        }
        profit = prices[i] - buy;
        if(max_profit < profit){
            max_profit = profit;
        }
	}
	cout << "profit " << max_profit << endl;
	return max_profit;
    } 
};