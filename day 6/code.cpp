#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    /*
    1 1 1 1
    2 2 2 2
    3 3 3 3
    4 4 4 4
    */
   /*
    // outer loop
    for (int i = 1; i <= n ;i++){
        // inner loop
        for (int j = 1; j <= n; j++){
            // work
            cout << i <<  " ";
        }
        cout << endl;
    }
    */

   // print star pattern
   /*
   *
   **
   ***
   ****
   */
  /*
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= i; j++){
        cout << "* ";
    }
    cout << endl;
  }
  */

 // inverted star pattern
 /*

 ****
 ***
 **
 *
 
 */

/*
for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n - i + 1; j++){
        cout << "* ";
    }
    cout << endl;
}
*/

// half pyramid pattern

/*
1
1 2
1 2 3
1 2 3 4
*/
/*
for (int i = 1; i <= n; i++){
    for (int j = 1; j <= i; j++){
        cout << j << " ";
    }
    cout << endl;
}
*/

char ch = 'A';
for (int i = 1; i <= n; i++){
    for (int j = 1; j <= i; j++){
        cout << ch << " " ;
        ch++;
    }
    cout << endl;
}


    return 0;
}
