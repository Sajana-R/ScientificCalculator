#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {

    Calculator calc;

    int choice;
    double a, b;

    do {

        cout << "........Scientific Calculator........\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Power\n";
        cout << "6. Square Root\n";
        cout << "7. Sine\n";
        cout << "8. Cosine\n";
        cout << "9. Tangent\n";
        cout << "10. Natural Logarithm\n";
        cout << "11. Common Logarithm\n";
        cout << "12. Exponential\n";
        cout << "13. Exit\n";

        cout<<"Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << calc.add(a, b) << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << calc.subtract(a, b) << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << calc.multiply(a, b) << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                if (b==0) {
                    cout<< "Error: Division by zero is not allowed." << endl;
                } else {
                    cout << "Result: " << calc.divide(a, b) << endl;
                }
                break;

            case 5:
                cout << "Enter base and exponent: ";
                cin >> a >> b;
                cout << "Result: " << calc.power(a, b) << endl;
                break;

            case 6:
                cout << "Enter a number: ";
                cin >> a;
                if (a < 0) {
                    cout << "Error: Square root of negative number is not allowed." << endl;
                } else {
                    cout << "Result: " << calc.squareRoot(a) << endl;
                }
                break;

            case 7:
                cout << "Enter an angle in degrees: ";
                cin >> a;
                cout << "Result: " << calc.sine(a) << endl;
                break;

            case 8:
                cout << "Enter an angle in degrees: ";
                cin >> a;
                cout << "Result: " << calc.cosine(a) << endl;
                break;

            case 9:
                cout << "Enter an angle in degrees: ";
                cin >> a;
                cout << "Result: " << calc.tangent(a) << endl;
                break;

            case 10:
                cout << "Enter a positivenumber: ";
                cin >> a;
                
                if (a <= 0) {
                    cout << "Error: Natural logarithm of non-positive number is not allowed." << endl;
                } else {
                    cout << "Result: " << calc.naturalLog(a) << endl;
                }
                break;

            case 11:
                cout << "Enter a positive number: ";
                cin >> a;
                
                if (a <= 0) {
                    cout << "Error: Common logarithm of non-positive number is not allowed." << endl;
                } else {
                    cout << "Result: " << calc.commonLog(a) << endl;
                }
                break;

            case 12:
                cout << "Enter an exponent: ";
                cin >> a;
                cout << "Result: " << calc.exponential(a) << endl;
                break;

            case 13:
                cout << "Exiting the calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;    
        }
    } while (choice != 13);

    return 0;
}