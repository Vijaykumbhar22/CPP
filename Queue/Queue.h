#include <iostream>
using namespace std;

typedef struct Node {
    int Data;
    struct Node* Next;
}NODE,*PNODE;


class Quee {
public:
    PNODE Head;

    Quee();
    Quee(Quee& obj);
    ~Quee();

    void Enqueuee(int);
    int Dequeue();
    void Display();

};
