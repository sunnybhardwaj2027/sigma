#include <iostream>
#include <climits>
using namespace std;

void trappedWater(int *height, int n){
    int leftMax[200000];
    int rightMax[200000];
    leftMax[0] = INT_MIN;
    rightMax[n-1] = INT_MIN;

    for (int i = 1; i < n; i++){
        leftMax[i] = max(leftMax[i - 1], height[i - 1]);
        rightMax[n-i-1] = max(rightMax[n-i], height[n-i]);
    }

    int trappedWater = 0;
    for (int i = 0; i < n; i++){
        int minHeight = min(leftMax[i], rightMax[i]);
        if (height[i] < minHeight){
            trappedWater += (minHeight - height[i]);
        }
    }

    cout << "trapped Water = "  << trappedWater << endl;
}

int main(){
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);

    trappedWater(height, n);

    return 0;
}