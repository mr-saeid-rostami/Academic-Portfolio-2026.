  /*
 * Problem: A Simple Question (یک سوال ساده)
 * Description: Printing "man khoshghlab hastam" n times based on input.
 * Author: Saeid Rostami
 * Date: 2025
 */
#include <iostream>
using namespace std;
void print_rep()
{
    cout << "man khoshghlab hastam" << endl;
}
int main()
{
 int number;
   cin >> number;
    for (int i = 0; i < number; i++)
    {
        print_rep();
    }
return 0;
}
