#include <iostream>

using namespace std;

int main()
{
    //cout << "IM A Dragon!" << endl;
    cout << "=======================\n";
    cout << "==calclatour your age==\n";
    cout << "=======================\n";
    int age;
    cout << "your age ";
    cin >> age;
    int age_days = age * 365;
    int age_hours = age_days * 24;
    cout << "your age of days: " << age_days << endl;
    cout << "your age of hours: " << age_hours << endl;
    return 0;
}