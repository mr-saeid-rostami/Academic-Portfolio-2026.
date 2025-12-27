/*
 * Problem: Health and Hygiene
 * Description: Calculating final grade based on travel days.
 * Author: Saeid Rostami
 */
#include <iostream>

using namespace std;

bool has_traveled(int travel_days)
{
    return travel_days > 0;
}

bool is_valid_grade(int grade)
{
    return (grade >= 0 && grade <= 20);
}

void calculate_and_print_grade(int grade, int days)
{
    bool traveling = has_traveled(days);

    if (!traveling)
    {
        cout << 20 << endl;
    }
    else if (days == 7)
    {
        cout << grade << endl;
    }
    else
    {
        int final_score = grade - days;
        if (final_score < 0)
            final_score = 0;
        cout << final_score << endl;
    }
}

int main()
{
    int grade, travelDays;
    if (!(cin >> grade >> travelDays))
        return 0;

    if (is_valid_grade(grade))
    {
        calculate_and_print_grade(grade, travelDays);
    }
    else
    {
        return 0;
    }

    return 0;
}
