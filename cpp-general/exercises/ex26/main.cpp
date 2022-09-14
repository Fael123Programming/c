#include <iostream>

using namespace std;

int main() {
    const int STUDENTS = 3;
    double grades[STUDENTS], max;
    cout << "Enter the " << STUDENTS << " grades: ";
    for (int i = 0; i < STUDENTS; i++) {
        cin >> grades[i];
        if (i == 0) {
            max = grades[i];
        } else if (grades[i] > max) {
            max = grades[i];
        }
    }
    cout << "The greatest grade is " << max << endl;
    cout << "The difference between the other grades and the greatest one:\n";
    double grade;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    for (int i = 0; i < STUDENTS; i++) {
        grade = grades[i];
        if (grade == max) {
            continue;
        }
        cout << grade << " less by " << max - grade << " point(s)\n";
    }
    return 0;
}