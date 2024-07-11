#include <iostream>
using namespace std;

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    // Demonstrating pointer reassignment.
    int x = 5;
    int *ptr = &x;

    int y = 25;
    ptr = &y; // In case of pointers, we can change the address stored in the pointer.

    cout << *ptr << endl; // 25 

    int arr[4];
    cout << arr << endl;

    int z = 10;
    // arr = &z; // error -- expression must be modifiable value (array names are constant pointers)

    // Pointer arithmetic
    // ptr++ or ++ptr and ptr-- or --ptr

    int a = 10;
    int *aptr = &a; 

    cout << aptr << endl; // Prints the address of 'a'
    aptr++;
    cout << aptr << endl; // Address increased by 4 bytes because the pointer was to an integer

    char ch = 'a';
    char *cptr = &ch;

    cout << static_cast<void*>(cptr) << endl; // Prints the address of 'ch'
    cptr++;
    cout << static_cast<void*>(cptr) << endl; // Address increased by 1 byte because the pointer was to a character

    // Addition and subtraction of constants

    int k = 10;
    int *kptr = &k; 

    cout << kptr << endl; // Prints the address of 'k'
    kptr += 3;
    cout << kptr << endl; // Address increased by 3 * sizeof(int)
    kptr -= 3;
    cout << kptr << endl; // Address decreased back

    int arr2[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr2) / sizeof(int);

    printArray(arr2, n);
    return 0;
}
