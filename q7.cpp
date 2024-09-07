#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

    bool isLeapYear(int y) const {
        return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
    }

    bool isValidDate() const {
        if (month < 1 || month > 12) return false;
        if (day < 1 || day > 31) return false;
        
        if (month == 2) {
            if (isLeapYear(year)) return day <= 29;
            return day <= 28;
        }
        if (month == 4 || month == 6 || month == 9 || month == 11) return day <= 30;

        return true;
    }

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void setDay(int d) { day = d; }
    void setMonth(int m) { month = m; }
    void setYear(int y) { year = y; }

    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }
    // Function to validate the date
    void validateAndPrint() const {
        if (isValidDate()) {
            cout << "Date is valid: " << day << "/" << month << "/" << year << endl;
        } else {
            cout << "Invalid date: " << day << "/" << month << "/" << year << endl;
        }
    }
};
int main() {
    Date d1(29, 2, 2024); // Valid leap year date
    Date d2(31, 4, 2023); // Invalid date
    d1.validateAndPrint();
    d2.validateAndPrint();
    return 0;
}
