class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int temp;
        for(int i = m,j=0; j<n ;i++,j++){
            nums1[i] = nums2[j];
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++){
                if(nums1[j]>nums1[j+1]){
                    temp = nums1[j];
                    nums1[j] = nums1[j+1];
                    nums1[j+1] = temp;
                }
            }
        }
    }
}


