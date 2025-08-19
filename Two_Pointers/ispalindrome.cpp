#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        for(auto &c : s){
						if(c>='A' && c<='Z')
							c = c + 32;
				}
				for (int i = 0; i < (int)s.size(); ) {
						if (!isalnum(s[i]) || s[i] == ' ') {
							s.erase(i, 1); // don't increment i here
					} else {
						i++; // only increment if no erase
					}
				}
				cout<<s;
				int n= (int)s.length();
				for(auto c : s){
						if( c != s.at(--n))
									return false;
							
				}
        return true;
    }
};

int main(int argc, char **argv)
{
	string x = "A man, a plan, a canal: Panama";
	Solution c;
	cout<<c.isPalindrome(x);
	return 0;
}

