#include <iostream>
using namespace std;


float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);
int modulus(int, int);

int main() {
    int choice;
    float num1, num2, result;
    int num1_int, num2_int, mod_result;
   

  
    do {
     
        cout << "Menu:"<<endl;
        cout << "Press 1 for +"<<endl;
        cout << "Press 2 for -"<<endl;
        cout << "Press 3 for *"<<endl;
        cout << "Press 4 for /"<<endl;
        cout << "Press 5 for %"<<endl;
        cout << "Press 0 for Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

 
        switch (choice) {
            case 1:
                cout << "Enter the first numbers: ";
                cin >> num1;
                cout << "Enter the second number: ";
                cin >> num2;
                result = add(num1, num2);
                cout << "Addition of: "<<(num1) <<" and "<<(num2)<< " is "<< result << endl;
                break;

            case 2:
            cout << "Enter the first numbers: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
                result = subtract(num1, num2);
                cout << "subtraction of: "<<(num1) <<" and "<<(num2)<< " is "<< result << endl;
                break;

            case 3:
            cout << "Enter the first numbers: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
                result = multiply(num1, num2);
                cout << "Multiplication of: "<<(num1) <<" and "<<(num2)<< " is "<< result << endl;
                break;

            case 4:
            cout << "Enter the first numbers: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
            
                if (num2 != 0) {
                    result = divide(num1, num2);
                    cout << "Divition of: "<<(num1) <<" and "<<(num2)<< " is "<< result << endl;
                } else {
                    cout << "Error! Division by zero is not allowed"<<endl;
                }
                break;


                case 5:
                cout << "Enter the first numbers: ";
                cin >> num1;
                cout << "Enter the second number: ";
                cin >> num2;
         
                
                
                // if (num2_int != 0) {
                //     mod_result = modulus(num1_int, num2_int);
                //     cout << "Result: " << mod_result << endl;
                // } else {
                //     cout << "Error!."<<endl;
                // }
                // break;


            case 0:
            cout << "Exiting the program."<<endl;
            break;

        default:
            cout << "Invalid choice! Please try again."<<endl;
    }

} while (choice != 0);  

return 0;
}
//  UDF arithmetic operations

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
int modulus(int a, int b) {
    return a % b;
}