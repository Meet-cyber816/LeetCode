class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        int flag = 1;
        for(int i=0;i<nums.size() && flag;i++){
            for(int j=1+i;j<nums.size();j++){
                if( (nums[i] + nums[j]) == target){
                    indices.push_back(i);
                    indices.push_back(j);
                }
                if(indices.size()>0)
                    flag = 0;
            }
        }
        return indices;
    }
};


