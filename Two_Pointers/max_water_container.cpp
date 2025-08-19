#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
		int Mode(int x){
			if( x < 0)
				return -x;
			return x;	
		}
    int maxArea(vector<int>& height) {
				int max=0;int d;
        for(size_t i=0;i< height.size(); i++){
						for(size_t j=i+1;j<height.size(); j++){
                                d = height[j] < height[i]?Mode(i-j)*height[j]:Mode(i-j)*height[i];
								if( d > max ){
									max = d;
								}		
						}
				}
				return max;
    }
};


int main(){
		int n,z;
		cin>>n;
		vector<int> vi;
		for(int i=0;i<n;i++){
				cin>>z; vi.push_back(z);
		}
		Solution s;
		cout<<"\n Ans: "<<s.maxArea(vi);
}
