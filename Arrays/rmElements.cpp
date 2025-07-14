class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = (int)nums.size();
        int n=0;
        for(int i=0;i<k;i++)
           if(nums[i] != val)
                nums[n++] = nums[i];

        return n;
    }
};
