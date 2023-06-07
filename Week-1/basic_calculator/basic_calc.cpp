#include<iostream>

using namespace std;

double calculate(double firstNum, double secondNum, char op);

int main() {
   bool isFinished = false;
   while (!isFinished){
      double firstNum {}; 
      double secondNum {};
      char op {};
      char answer {};
      cout << "Please enter firts number:\n";
      cin >> firstNum;
      cout << "Please chose an operator (+ - * /):\n";
      cin >> op; 
   cout << "Please enter second number:\n";
      cin >> secondNum;
      cout << calculate(firstNum, secondNum, op) << endl;
      cout << "Do you want to make another calculation? (y/n)\n";
      cin >> answer;
      if (answer == 'y') {
         isFinished = false;
      } else {
         isFinished = true;
      }
   }
}

double calculate(double firstNum, double secondNum, char op) {
   switch (op)
   {
      case '+':
         return firstNum + secondNum;
         break;
      case '-':
         return firstNum - secondNum;
         break;
      case '*':
         return firstNum * secondNum;
         break;
      case '/':
         return firstNum / secondNum;
         break;
      default:
         cout << "Please enter a valid operator\n";
         cin >> op;
         return calculate(firstNum, secondNum, op);
         break;
   }
}