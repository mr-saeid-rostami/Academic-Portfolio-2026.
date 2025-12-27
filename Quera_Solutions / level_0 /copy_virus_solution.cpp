/*
 * Problem: Help to Copy (Quera Level 0)
 * Description: Prepend "copy of " to a filename 'n' times.
 * Author: Saeid Rostami
 * Date: 2025
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number_of_repetitions = 0;
    string copied_file_name;
    cin >> number_of_repetitions >> copied_file_name;
    for (int i = 0; i < number_of_repetitions; i++)
    {
        cout << "copy of " ;
    }
    cout << copied_file_name << endl;
    return 0;
}
