#include <iostream>
#include <string>
#include <vector>
using namespace std;
int checkPalindrome( string x ){
		int n = x.size();
		for(char c : x){
			if( n>=0 && c != x[--n] )
				return 0;
		}		
		return n;
}
int main(int argc, char **argv)
{
	size_t left, right;
	string str,s("");
	cin>>str;
	vector<string> vs;
	if (str.empty()) return -1;	
	for(left = 0;left<str.size();left++){
		for(right = left +1; right<str.size(); right++){
				s = str[left];
				if ( s[left] != str[right]) {
					s = s + str[right];		
				}
		}
		if(checkPalindrome(s))
			vs.push_back(s);
	}
	int ind;
	if(!vs.empty())
	{
			size_t max = vs[0].size();
			for(size_t i=1;i<vs.size();i++){
				if( vs[i].size() > max ){
					max = vs[i].size(); ind = i;
				}
			}		
	}	
	string ans = vs[ind];
	cout<<ans;	
	return 0;
}

