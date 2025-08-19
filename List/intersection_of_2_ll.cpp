#include <iostream>
#include <Forward_list.h>
using namespace std;

class Solution {
public:
		template <typename T>
    Node<T> *getIntersectionNode(Node<T> *headA, Node<T> *headB) {
          auto left = headA, right = headB;
          while(left != nullptr && right != nullptr){
						while( right != nullptr ){ 
                            if(right == left) return right;
                            right=right->next;
                        }
						left=left->next;	
                        right = headB;
		  }
		  return nullptr;
    }
};

int main(int argc, char **argv)
{
	Forward_list<int> l1,l2;
	l1.push_back(4);l1.push_back(1);l1.push_back(8);l1.push_back(4);l1.push_back(5);
	
	//l2.push_back(5);l2.push_back(6);l2.push_back(1);
	//l1.display();	l2.display();
	//l1.mergeAtLast(l2);
	//cout<<"l1 size: "<<l1.getSize()<<'\t'<<"l2 size: "<<l2.getSize()<<endl;
	cout<<"Size: "<<l1.getSize()<<endl;
	l1.display();
	//l2.display();
	l1.pop_back();
	l1.display();
	l1.pop_front();
	l1.display();
	l1.push_front(99);
	l1.display();
	//l2.pop_back();
	 //l1.display();
	 //l2.display();
	//cout<<"l1 size: "<<l1.getSize()<<'\t'<<"l2 size: "<<l2.getSize()<<endl;
	cout<<l1.at(99)<<' '<<l1.at(0)<<endl;
	//Solution x;
	//auto *t = x.getIntersectionNode(l1.getFirst(),l2.getFirst());
	//cout<<t->data;	
	return 0;
}

