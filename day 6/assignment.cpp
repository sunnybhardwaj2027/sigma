#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // Question 1 : Print the 0-1 Triangle Pattern.

    /*
        
    1 
    0 1 
    1 0 1 
    0 1 0 1 
    1 0 1 0 1 

    */


    /*

    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            bool val = false;
            for (int j = 1; j <= i; j++){
                cout << val << " ";
                val = !val;
            }
        }  else {
            bool val = true;
            for (int j = 1; j <= i; j++){
                cout << val << " ";
                val = !val;
            }
        }

        cout << endl;
    }

    */

   // Print the Rhombus Pattern.

   /*
    * * * * * 
   * * * * * 
  * * * * * 
 * * * * * 
* * * * * 

*/

/*

    for (int i = 1; i <= n; i++){

        // spaces
        for (int j = 1; j <= n-i; j++){
            cout << " ";
        }

        // stars
        for (int j = 1; j <= n; j++){
            cout << "* " ;
        }

        cout << endl;
   }

   */

  // Question 3 : Print the Palindromic Pattern with Numbers. 

  /*
  
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

*/

/*
  for (int i = 1; i <= n; i++){
        
        // spaces
        for (int j = 1; j <= 2*(n-i); j++){
            cout << " ";
        }

        // numbers backward
        for (int j = i; j >= 1; j--){
            cout << j << " ";
        }

        // numbers forward
        for (int j = 2; j <= i; j++){
            cout << j << " ";
        }

        cout << endl;
  }

*/

    return 0;

}
