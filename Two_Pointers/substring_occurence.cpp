#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int flag=0;
        for(int i=0;i<(int)haystack.length();i++){
						for(int j=0;j<(int)needle.length();j++){
								if(haystack.at(i+j) == needle.at(j)) flag=1;
								else{
										flag = 0;break;
								}
						}
						if(flag){
								return i; 
						}
				}
				return -1;
    }
};
int main(int argc, char **argv)
{
	string x="adbutsad",y="sad";
	Solution s;
	cout<<s.strStr(x,y);
	return 0;
}

