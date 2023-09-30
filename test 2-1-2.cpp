#include<iostream>

using namespace std;

int main()

{

// Declare an integer variable called myInt and assign the value 15 to it

int myInt = 15;

// Declare a pointer variable called myPointer using the dereference operator (*) and

// assign it to the memory location of myInt using the address-of operator (&)

int *myPointer = &myInt;

// Print the memory location of myInt (remember the address-of operator!) and the value of myPointer.

cout<<"Address of myInt : "<<&myInt<<endl;

cout<<"value of myPointer : "<<myPointer<<endl<<endl;

// Print the value of myInt and the value pointed to by myPointer (remember the dereference operator!)

cout<<"Value of myInt : "<<myInt<<endl;

cout<<"Value pointed by myPointer : "<<*myPointer<<endl<<endl;

// Change the value of myInt to 10.

myInt = 10;

// Print the memory location of myInt (remember the address-of operator!) and the value of myPointer.

cout<<"Address of myInt : "<<&myInt<<endl;

cout<<"value of myPointer : "<<myPointer<<endl<<endl;

// Print the value of myInt and the value pointed to by myPointer (remember the dereference operator!)

cout<<"Value of myInt : "<<myInt<<endl;

cout<<"Value pointed by myPointer : "<<*myPointer<<endl<<endl;

return 0;

}