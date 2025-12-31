#include <iostream>
#include <ctime>
#include <string>
#include <thread>
#include <chrono>
#include <iomanip>

using namespace std;

void wait(int seconds) {
    this_thread::sleep_for(chrono::seconds(seconds));
}

void clear() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void printHeader() {
    cout << "====================================================" << endl;
    cout << "      FINAL MISSION: 2025 CASE CLOSURE              " << endl;
    cout << "====================================================" << endl;
}

int main() {
    bool running = true;
    while (running) {
        clear();
        printHeader();
        cout << "1. Days Passed in 2025" << endl;
        cout << "2. Seconds to/from Past Year 2025" << endl;
        cout << "3. past Year Message (EN/DE)" << endl;
        cout << "4. Leap Year Check (2026)" << endl;
        cout << "5. System Metadata & Credits" << endl;
        cout << "0. Exit" << endl;
        cout << "----------------------------------------------------" << endl;
        cout << ">> Select Option: ";

        int choice;
        cin >> choice;

        if (choice == 0) {
            clear();
            cout << "\n  22222   00000   22222   55555" << endl;
            cout << "      2  0     0      2  5     " << endl;
            cout << "  22222  0     0  22222   5555 " << endl;
            cout << "  2      0     0  2           5" << endl;
            cout << "  22222   00000   22222   55555" << endl;
            cout << "\n    --- 2025 IS FINISHED ---" << endl;
            break;
        }

        clear();
        time_t now = time(0);
        tm *ltm = localtime(&now);

        switch (choice) {
            case 1: {
                cout << "[LOG] Calculating days passed in 2025..." << endl;
                wait(2);
                int dayOfYear = ltm->tm_yday + 1;
                cout << "\n>>> Result: " << (dayOfYear - 365) << " days have passed in 2025." << endl;
                break;
            }
            case 2: {
                cout << "[LOG] Measuring time to Midnight (00:00:00)..." << endl;
                wait(2);
                
                tm nextYear = {0};
                nextYear.tm_year = 126; 
                nextYear.tm_mday = 1;
                time_t target = mktime(&nextYear);
                
                double seconds = difftime(target, now);
                if (seconds > 0)
                    cout << "\n>>> " << (long long)seconds << " seconds remaining until 2026!" << endl;
                else
                    cout << "\n>>> " << (long long)abs(seconds) << " seconds passed since 2026 started!" << endl;
                break;
            }
            case 3: {
                cout << "[LOG] Translating Message..." << endl;
                wait(3);
                cout << "\n****************************************************" << endl;
                cout << "   EN: There's no time like the present." << endl;
                cout << "       (Fish is fresh whenever you catch it from water)" << endl;
                cout << "\n   DE: Es ist nie zu spät, um anzufangen." << endl;
                cout << "       (Es ist immer der richtige Zeitpunkt)" << endl;
                cout << "****************************************************" << endl;
                break;
            }
            case 4: {
                cout << "[LOG] Checking Leap Year status for 2026..." << endl;
                wait(3);
                int year = 2026;
                bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
                cout << "\n>>> Is 2026 a Leap Year? " << (isLeap ? "YES" : "NO") << endl;
                cout << ">>> 2026 has 365 days." << endl;
                break;
            }
            case 5: {
                cout << "\n[METADATA]" << endl;
                cout << "- Created: Dec 31, 2025 | 23:15" << endl;
                cout << "- Music Context: Dzhovanna (Kazus Remix Cover Enrasta)" << endl;
                cout << "- Engineer: Saeid Rostami" << endl;
                cout << "- Status: Level 0 COMPLETED." << endl;
                break;
            }
        }

        cout << "\n[b] Back to Menu | [e] Exit: ";
        char back; cin >> back;
        if (back == 'e' || back == 'E') running = false;
    }

    return 0;
}
