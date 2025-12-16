#include<iostream>

using namespace std;

int main(){
	double number1,number2,result;
	char op;
	bool valid= true;
    cout << "Enter the first number: ";
    if (!(cin >> number1)) {
        cout << "Invalid input!!\n";
        return 1;
    }

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second number: ";
    if (!(cin >> number2)) {
        cout << "Invalid input!!\n";
        return 1;
    }

	switch(op){
	
	 case '+' : result = number1 + number2;
	 break;
	 case '-' : result = number1 - number2;
     break;
     case '*' :result  = number1 * number2;
     break;
     case '/' :if (number2 == 0) {
                cout << "Error: Division by zero is not allowed.\n";
                valid = false;
            } else {
                result = number1 / number2;
            }
     break;
     default:
     	cout<<"Invalid Operator!!";
     	valid = false;
		 }
		 if (valid){
		 	cout << number1 << " " << op << " " << number2 << " = " << result << endl;
		 }
	 	return 0;
}
