#include <iostream>

using namespace std;

int main() {
    // Declare three integer variables
    int num1, num2, num3;

    // Prompt the user to input three integer values
    cout << "Enter three integers: " << endl;
    cin >> num1 >> num2 >> num3;

    // Dynamically allocate memory for each variable using pointers
    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;

    // Store the values into dynamic memory using the pointers
    *ptr1 = num1;
    *ptr2 = num2;
    *ptr3 = num3;

    // Display the values of the variables
    cout << "Values of the variables:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;

    // Display the values stored in the dynamic memory (through pointers)
    cout << "\nValues stored in dynamic memory (via pointers):" << endl;
    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "*ptr3 = " << *ptr3 << endl;

    // Free the dynamically allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    // Set pointers to nullptr after deallocating memory
    ptr1 = nullptr;
    ptr2 = nullptr;
    ptr3 = nullptr;

    return 0;
}
