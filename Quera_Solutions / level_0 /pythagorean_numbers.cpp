/*
 * Problem: Pythagorean Numbers
 * Description: Checks if three input numbers can form a right-angled triangle.
 * Strategy: Identify the hypotenuse (largest side) first to apply a^2 + b^2 = c^2.
 * Author: Saeid Rostami
 * Source: Quera Challenge
 */
#include <iostream>
#include <algorithm>

using namespace std;

bool isRightTriangle(long long a, long long b, long long c)
{
    if (a > c)
        swap(a, c);
    if (b > c)
        swap(b, c);

    return (a * a + b * b == c * c);
}

int main()
{
    int side1, side2, side3;

    if (cin >> side1 >> side2 >> side3)
    {
        if (isRightTriangle(side1, side2, side3))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
