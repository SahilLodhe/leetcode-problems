class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,bool> myMap;
        for(int i = 0;i<nums.size();i++){
            if(myMap.count(nums[i]) == 1){
                return nums[i];
            }
            myMap[nums[i]] = true;
        }
        return 0;
    }
};