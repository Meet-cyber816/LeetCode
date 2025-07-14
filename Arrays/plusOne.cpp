#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;
    
       
        if(digits[i] < 9){
            digits[i] += 1;
        }
        else{
            digits[i]++;
            if(i == (digits.size()-1) && digits[i] == 10 )
                 digits.push_back(0);
            while(digits[i] == 10 && i > 0){
                //digits[i-1]++;
                digits[i] -= 10;
		digits[i-1]++;
          	i--;
            }
	    if(digits[0] == 10)
		    digits[0] /= 10;
        }
        return digits;
    }
};
void display(vector<int> &v){
	for(auto i : v)
		cout<<i<<" ";
	cout<<endl;
}
int main(){
	Solution s1;
	vector<int> v;
	v.push_back(9);
//	v.push_back(9);
	display(v);
	s1.plusOne(v);
	display(v);
}
