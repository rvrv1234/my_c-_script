#include <iostream>
using namespace std;


int add(int num1, int num2) {    //adding two numbers
    return num1 + num2;
}

// Function to validate user input (ensure it is a number)
bool get_input(int& num) {
    cin >> num;
    if (cin.fail()) {  
        cin.clear();  
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
        return false;  // Return false for invalid input
    }
    return true;  // Return true for valid input
}

int main() {
    int a, b;

    
// ask user to enter two numbers


    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    
    int result = add(a, b);

//print the result

    cout << "The sum of " << a << " and " << b << " is: " << result << endl;

    return 0;
}


//This c++ script is asking user to input two numbers and add the two numbers. Then print the output.

