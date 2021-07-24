#include "Stackk.h"
Stackk::Stackk()
{
    Head = NULL;
}
void Stackk::Push(int N)
{
    PNODE newn = new NODE;

    newn->Data = N;
    newn->Next = NULL;
    if (Head == NULL)
    {
        Head = newn;
    }
    else
    {
        newn->Next = Head;
        Head = newn;
    }
}
void Stackk::Pop()
{

    if (Head != NULL)
    {
        cout << "Popping value" << endl;
        PNODE temp = Head;
        if (temp->Next == NULL)
        {
            cout << "Value:" << temp->Data << endl;
            delete temp;
            Head = NULL;
        }
        else
        {
            Head = temp->Next;
            cout << temp->Data << endl;
            delete temp;
        }
    }
}
void Stackk::findd(int val)
{
    PNODE temp = Head;
    while (temp != NULL)
    {
        if (temp->Data == val)
        {
            cout << "Data exists:" << temp->Data<<endl;
            return;
       }
        temp = temp->Next;
    }
    cout << "Data does not exists" << endl;
    return;
}

void Stackk::Display()
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

    Stackk obj;
    obj.Push(10); obj.Push(40);
    obj.Display();
    obj.Push(50);
    obj.Display();
    obj.Pop();
    obj.Display();
    obj.Pop();
    obj.Display();
    obj.Push(40);
    obj.findd(40);
}
