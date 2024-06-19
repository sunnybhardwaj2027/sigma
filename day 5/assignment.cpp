#include <iostream>
using namespace std;

int main(){
    // Question 1 : WAP to find the Factorial of a number entered by the user.
    /*
    int num;
    cin >> num;

    int fact = 1;
    for (int i = 1; i <= num; i++){
        fact *= i;
    }

    cout << "factorial of " << num << " is " << fact << endl;
    */

   // Question 2 : WAP to print the multiplication table of a number, entered by the user.
   /*
    int num;
    cout << "Enter number : ";
    cin >> num;

    for (int i = 1; i <= 10; i ++){
        cout << num << " * " << i << " = " << num * i << endl;
    }
    */

   // Question 3 : WAP to input a number and check whether the number is an Armstrong number or not.
    /*
   int num, count = 0, sum=0;
   cout << "Enter numer : ";
   cin >> num;

   int temp = num;

   while (temp != 0){
        count++;
        temp /= 10;
   }

   temp = num;
   powe(a){
    int k = 1;
    for (let i = 1; i <= count; i++){
        
    }
   }

   while (temp != 0){
        int x = temp % 10;
        sum += powe(x);
        temp /= 10;
   }
    */

   // For a positive N , WAP that prints all the prime numbers from 2 to N.

   int num;
   cout << "Enter number : ";
   cin >> num;

   for (int i = 3; i <= num; i++){
        for (int j = 2; j < num; j++){
            if (i % j == 0){
                break;
            }
            cout << i << endl;
        }
        
   }

    return 0;
}