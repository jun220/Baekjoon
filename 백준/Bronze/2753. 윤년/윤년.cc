#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 != 0) return false;
    if (year % 100 == 0 && year % 400 != 0) return false;
    return true;
}

int main(void) {
    int year;
    cin >> year;
    cout << (int)isLeapYear(year);

    return 0;
}
