#include <iostream>
using namespace std;

typedef struct Node {
    int Data;
    struct Node* Next;
}NODE, * PNODE;

class Stackk {
public:
    PNODE Head;
    Stackk();
    void Push(int);
    void Pop();
    void Display();
    void findd(int);
};
