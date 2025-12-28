/*
 * Problem: Big Multiplication Table 
 * Description: Generates an N x N multiplication table efficiently.
 * Author: Saeid Rostami
 * Source: Quera Challenge
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 */
#include <iostream>

using namespace std;

void printMultiplicationTable(int n) {
    for (int row = 1; row <= n; ++row) {
        for (int col = 1; col <= n; ++col) {
            cout << (row * col) << " ";
        }
        cout << endl; 
    }
}

int main() {
    int n;
    
    if (cin >> n) {
        printMultiplicationTable(n);
    }
    
    return 0;
}
