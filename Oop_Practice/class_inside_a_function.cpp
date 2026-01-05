//accessing a class inside a function 

// Class definition
class somefuncinclass{
    public:
    void funcdata(){
        cout << "This function is used to access data outside the class" << endl;
    }
};

// Function that accesses class object via pointer
void accessable(somefuncinclass *ptr){
    // Using pointer to call the class function
    ptr->funcdata();
}

/*
Extra Details & Points:

1) Accessing class functions from outside a class:
   - We can call a class function by passing an object or pointer to it into another function.
   - This allows **separation of concerns**: the logic inside the class is reused without changing it.

2) Why pointer is used here:
   - Efficient: no copy of the object is made.
   - Can work with dynamically allocated objects:
        somefuncinclass *obj = new somefuncinclass();
        accessable(obj);
        delete obj;
   - Changes made to the object inside the function reflect on the original object.

3) Alternative ways:
   a) Pass by reference (modern C++ best practice):
      void accessable(somefuncinclass &obj){
          obj.funcdata();
      }
      accessable(obj);  // cleaner, no pointer syntax needed

   b) Pass by value (creates a copy — usually not recommended for large objects):
      void accessable(somefuncinclass obj){
          obj.funcdata();
      }

4) Using pointers is necessary if:
   - The object may be `nullptr`.
   - We want runtime polymorphism with base class pointers.
   - Working with dynamic memory allocation.

5) Summary:
   - `.` operator → used with objects.
   - `->` operator → used with pointers to objects.
   - This method allows external functions to **reuse class functionality without being member functions themselves**.
*/
