class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mp;
        int count = 0;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>1){
                count = 1;
                break;
            }
        }
        if(count == 1)
            return true;
        else
            return false;
    }
};