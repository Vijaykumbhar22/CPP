#include "Queue.h"
Quee::Quee()
{
    Head = NULL;
}
Quee::~Quee()
{
    PNODE temp = Head;

    while (Head != NULL)
    {
        Head = Head->Next;
        delete temp;
        temp = Head;
    }
}


void Quee::Enqueuee(int N)
{
    PNODE temp = Head;
    PNODE newn = new NODE;
    newn->Data = N;
    newn->Next = NULL;
    if (Head == NULL)
    {
        Head = newn;
    }
    else
    {
        while (temp->Next != NULL)
        {
            temp = temp->Next;
        }
        temp->Next = newn;
    }
}
int Quee::Dequeue()
{
    int var = 0;
    if (Head != NULL)
    {
        
        PNODE temp = Head;
        if (temp->Next == NULL)
        {
            var = temp->Data;
            delete temp;
            Head = NULL;
        }
        else
        {
            Head = temp->Next;
            var = temp->Data;
            delete temp;
        }
   }
    else
    {
        cout << "No values to dequeue" << endl;
    }
    
    return var;
}
void Quee::Display()
{
    cout << "Displaying the values" << endl;
    PNODE temp = Head;
    while (temp != NULL)
    {
        cout << temp->Data << endl;
        temp = temp->Next;
    }
}


int main()
{
    Quee obj;
    obj.Enqueuee(10);
    obj.Enqueuee(20);
    obj.Display();
    obj.Enqueuee(40);
    obj.Display();
    obj.Dequeue();
    obj.Display();
    obj.Dequeue();
    obj.Display();
    obj.Dequeue();
    obj.Display();
    obj.Dequeue();
    obj.Display();

}
