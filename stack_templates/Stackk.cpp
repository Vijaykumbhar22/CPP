int main()
{
    C_Stack<int> obj;   // Instantiating template with int  
    obj.S_push(10);
    obj.S_push(20);
    cout << "size of object: " << obj.size() << endl;
    obj.S_pop();
    if (obj.size() != 0)
    {
        obj.S_pop();
    }
    if (obj.size() != 0)
    {
        obj.S_pop();
    }
    cout <<  "size of object: "<< obj.size() << endl;


    C_Stack<float> obj1;  // Instantiating template with float
    obj1.S_push(10.45);
    obj1.S_push(20.78);
    cout << "size of object: " << obj1.size() << endl;
    obj1.S_pop();
    if (obj1.size() != 0)
    {
        obj1.S_pop();
    }
    if (obj1.size() != 0)
    {
        obj1.S_pop();
    }
    cout << "size of object: " << obj1.size() << endl;
    cout << sizeof(obj1) << endl;
  
    return 0;
}
