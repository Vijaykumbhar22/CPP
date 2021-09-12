
template <class T>
class C_Stack {

public:
	//template <class S>
	struct Nodee
	{
		T Val;
		Nodee* next;
	};
	Nodee* head;
	size_t size_val;

	C_Stack()
	{
		head = NULL;
    size_val = 0;
	}

	void S_push(T val);
	void S_pop();
	size_t size();
};

template <class T>
void C_Stack<T>::S_push(T val)
{
	Nodee* newn = new Nodee;
	newn->next = NULL;
	newn->Val = val;
	if ( head == NULL)	// Don't check *head== NULL
	{
		size_val = 1;
		head = newn;
	}
	else
	{
		newn->next = head;
		head = newn;
		size_val = size_val + 1;
	}
}

template <class T>
size_t C_Stack<T>::size()
{
	return size_val;
}

template <class T>
void C_Stack<T>::S_pop()
{
	T val;
	if (head != NULL)
	{
		
		Nodee* newn = NULL;
		val = head->Val;
		cout << val << endl;
		newn = head;
		head = head->next;
		delete newn;
		size_val = size_val - 1;

	}
	else
	{
		cout << "Stack is empty" << endl;
		return;
		size_val = 0;
	}
	//return val;
}
#pragma once
