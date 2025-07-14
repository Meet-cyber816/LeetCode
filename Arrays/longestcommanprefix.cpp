#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
   	int min = strs[0].size();
	for(auto i : strs)
		if(i.size() < min)
			min = i.size();
		

        for(int i=0;i<min;i++){
            if(strs[0][i] == strs[1][i] && strs[1][i] == strs[2][i]){
                    s = s + strs[0][i];
            }
            else
                    break;
        }       
        return s;
    }    
};

int main(){
	Solution s1;
	vector<string> v1;
	v1.push_back("go");
	v1.push_back("goes");v1.push_back("gone");
	string ans = s1.longestCommonPrefix(v1);
	cout<<ans;
}
