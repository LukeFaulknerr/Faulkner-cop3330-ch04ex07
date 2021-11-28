/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Luke Faulkner
 */

 #include <iostream>
 #include <vector>
 #include <string>


 using namespace std;

 int stringToNumber(string stringToConvert);

 int main(){
     // Variables
     char op;
     
     string operand1, operand2;
     int result;

     // Input
     cin >> op;
     cin >> operand1;
     cin >> operand2;

     // Computation & Output 
     // Change operand(s) to their numerical values
     int numericalOperand1 = stringToNumber(operand1);
     int numericalOperand2 = stringToNumber(operand2);

     if (op == '+'){
         result = numericalOperand1 + numericalOperand2;
         cout << "The sum of " << operand1 << " and " << operand2 << " is " << result << ".";
     }
     else if (op == '-'){
         result = numericalOperand1 - numericalOperand2;
         cout << "The subtraction of " << operand2 << " from " << operand1 << " is " << result << ".";
     }
     else if (op == '*'){
         result = numericalOperand1 * numericalOperand2;
         cout << "The product of " << operand1 << " and " << operand2 << " is " << result << ".";
     }
     else if (op == '/'){
         result = numericalOperand1 / numericalOperand2;
         cout << "The division of " << operand2 << " from " << operand1 << " is " << result << ".";
     }
     else {
         cout << "You did not enter a valid operand.";
     }


    return 0;
 }

int stringToNumber(string stringToConvert){
     // Convert from word to number
    if (stringToConvert.size() > 1){
        vector<string> stringConverter = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        for (int i = 0; i < stringConverter.size(); i++){
            if (stringToConvert.compare(stringConverter[i]) == 0){
                return i;
            }
        } 
    }
    // Convert from number string  to number
    else {
        return stoi(stringToConvert);
    }

    return 0;
 }
