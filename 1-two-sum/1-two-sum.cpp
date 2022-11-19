class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        
        for(int i=0; i<nums.size(); i++){
            int value = target - nums[i] ;
            if(map.find(value) != map.end()){
                return {map[value] , i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};