#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = nums.size();
        for(int i=1;i<nums.size()-1;i++){
            for(int &j : nums){
                if( j == nums[i] ){
                    nums[i] = nums[i+1];
                    nums.pop_back();
                    k--;
                }
            }
        }
        return k;
    }
};

int main(){
	Solution s;
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(1);
	v1.push_back(2);
	for(auto i : v1){
		cout<<i<<" ";
	}
	cout<<endl<<endl;
	int n = s.removeDuplicates(v1);
	for(auto i : v1){
		cout<<i<<" ";
	}
	cout<<endl<<n<<endl;
}
