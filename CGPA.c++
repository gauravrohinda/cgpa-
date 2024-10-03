#include<iostream>
using namespace std;

int main() {
    int totalMarks, obtainMarks;
    float percent = 0.0, gpa;
    
   
    cout << "Enter the total Marks: ";
    cin >> totalMarks;
    
    cout << "Enter your obtained Marks: ";
    cin >> obtainMarks;
    
    
    if (obtainMarks <= totalMarks) {
        percent = 100 * float(obtainMarks) / float(totalMarks);
    } else {
        cout << "Incorrect obtained Marks!" << endl;
        return 0; // Exit if invalid marks are entered
    }
    
    // Calculate GPA based on percentage
    if (percent >= 90 && percent <= 100) {
        gpa = 4.00;
    } else if (percent >= 80) {
        gpa = 3.50;
    } else if (percent >= 70) {
        gpa = 3.00;
    } else if (percent >= 60) {
        gpa = 2.50;
    } else if (percent >= 50) {
        gpa = 2.00;
    } else if (percent >= 40) {
        gpa = 1.50;
    } else {
        gpa = 0.00; // Failed case
    }
    
    // Output the calculated GPA
    cout << "Your Percentage is: " << percent << "%" << endl;
    cout << "Your GPA is: " << gpa << endl;
    
    return 0;
}
