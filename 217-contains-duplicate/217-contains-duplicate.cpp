class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;

        for(int i=0; i<nums.size(); i++){
            if(umap.find(nums[i]) == umap.end()){
                umap[nums[i]] ;

            }else return true;
        }
	    return false;
    }         
};