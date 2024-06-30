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

// character pyramid pattern

/*

A
B C
D E F
G H I J

*/

/*
char ch = 'A';
for (int i = 1; i <= n; i++){
    for (int j = 1; j <= i; j++){
        cout << ch << " " ;
        ch++;
    }
    cout << endl;
}
*/

// Hollow rectangle pattern

/*

*****
*   *
*   *
*****

*/
/*
for (int i = 1; i <= n; i++){

    cout << "*"; // for first star

    for (int j = 1; j <= n-1; j++){
        if (i == 1 || i == n){
            cout << "*";
        } else {
            cout << " ";
        }
    }

    cout << "*" << endl;
}

*/

// inverted and rotated half pyramid pattern

/*

   *
  **
 ***
****

*/

/*

for (int i = 1; i <= n; i++){ // outer loop

    // spaces
    for (int j = 1; j <= n-i; j++){
        cout << " ";
    }

    // stars
    for (int j = 1; j <= i; j++){
        cout << "*";
    }

    cout << endl;

}

*/

// floyd's triangle pattern

/*

1 
2 3
4 5 6
7 8 9 10

*/

/*

int num = 1;

for (int i = 1; i <= n; i++){
    for (int j = 1; j <= i; j++){
        cout << num << " ";
        num++;
    }

    cout << endl;
}

*/

// diamond pattern

/*

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

*/


/*

// first pyaramid

for (int i = 1; i <= n; i++){

    // spaces
    for (int j = 1; j <= n-i; j++){
        cout << " ";
    }

    // stars
    for (int j = 1; j <= 2*i-1; j++){
        cout << "*";
    }
    
    cout << endl;

}

// second pyramid

for (int i = n; i >= 1; i--){
    
    // spaces
    for (int j = 1; j <= n-i; j++){
        cout << " ";
    }

    // stars
    for (int j = 1; j <= 2*i-1; j++){
        cout << "*";
    }

    cout << endl;

}

*/

// butterfly pattern

/*

*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *

*/

/*

for (int i = 1; i <= n; i++){
    
    for (int j = 1; j <= i; j++){
        cout << "*";
    }

    for (int j = 1; j <= 2*(n-i); j++){
        cout << " ";
    }

    for (int j = 1; j <= i; j++){
        cout << "*";
    }

    cout << endl;
}

for (int i = n; i >= 1; i--){

    for (int j = 1; j <= i; j++){
        cout << "*";
    }

    for (int j = 1; j <= 2*(n-i); j++){
        cout << " ";
    }

    for (int j = 1; j <= i; j++){
        cout << "*";
    }

    cout << endl;
}

*/

    return 0;
}




