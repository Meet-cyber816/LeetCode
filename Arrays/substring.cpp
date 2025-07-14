#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
	int len=0;string t("");
	for(int i=0;i<s.length();i++){
		for(int j=i+1;j<s.length();j++){
			if( s[i] == s[j]){
				for(int k=i+1;k<j-2;k++){
					if(s[k] != s[k+1]){
						for(int z=i;z<j;z++){
							t = t + s[i];len++;
						}
						cout<<t<<endl;
						return len;
					}
				}
			}
		}
	}
	cout<<t<<endl;
	return len;
    }
};

int main(){
	Solution s;
	int x = s.lengthOfLongestSubstring("abcabcbb");
	cout<<x<<endl;
}
