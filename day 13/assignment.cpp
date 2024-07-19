#include<iostream>
using namespace std;

void countof7(int arr[][3], int n, int m){
    int countof7 = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] == 7){
                countof7++;
            }
        }
    }

    cout << "count of '7' = " << countof7 << endl;
}

int main(){
    /*
    Question 1 : Print the number of all 7’s that are in the 2d array.
    Example :
    Input - int arr[ ][ ] = { {4,7,8}, {8,8,7} }; n = 2, m = 3
    Output - 2

    */
   int arr[ ][3] = { {4,7,8}, {8,8,7} };
   countof7(arr, 2, 3);

    /*
    Question 2 : Print out the sum of the numbers in the second row of the “nums” array.
    Example :
    Input - int nums[ ][ ] = { {1,4,9}, {11,4,3}, {2,2,3} };
    Output - 18
    */

   int nums[ ][3] = { {1,4,9}, {11,4,3}, {2,2,3} };
   int sum = 0;
   for (int j = 0; j < 3; j++){
    sum  += nums[1][j];
   }

   cout << "sum of 2nd row numbers = " << sum << endl;

    return 0;
}