#include <iostream>
using namespace std;

static int count = 0;

class Node {
public:
    int data;
    Node link;
public:
    Node(int d) {
        data = d;
        link = NULL;
        count++;
    }
};

class List {
    Node *first;
public:
    List() {
        first = NULL;
    }
    void Insert(int x, int index = count) {
        if (first == NULL) {
            first = new Node(x);
        }
    }
    void display() {
        cout<< first->data;
    }
};

int main() {
    List l;
    l.Insert(2);
    l.display();
}
