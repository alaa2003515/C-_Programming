#include <iostream>
using namespace std;
/**
 *main-Function enter marks obtained subjects,calculates(total,average,percentage)marks,display results.
 *Return:0.
 */
int main() {
    // Variables to store marks in five subjects
    int marks1, marks2, marks3, marks4, marks5;

    // Input marks from the user
    cout << "Enter marks obtained in Subject 1: ";
    cin >> marks1;
    cout << "Enter marks obtained in Subject 2: ";
    cin >> marks2;
    cout << "Enter marks obtained in Subject 3: ";
    cin >> marks3;
    cout << "Enter marks obtained in Subject 4: ";
    cin >> marks4;
    cout << "Enter marks obtained in Subject 5: ";
    cin >> marks5;

    // Calculate total marks
    int totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;

    // Calculate average marks
    
    double averageMarks = static_cast<double>(totalMarks) / 5; 
    /*static_cast<double>(totalMarks): Here, totalMarks is casted 
      to a double data type.The static_cast<double> part is a type
      conversion operatorused to convert the value stored in totalMarks to a double type.
      This is done to ensure that the division operation later on produces
      a floating-point result
     */

    // Calculate percentage marks
    double percentageMarks = (static_cast<double>(totalMarks) / 500) * 100;
/*
static_cast<double>(totalMarks): This part converts the integer value 
totalMarks to a double. It's necessary to perform 
floating-point division later on. By casting totalMarks
to a double, we ensure that the division yields a floating-point
result instead of integer division,
which would truncate any fractional part.
*/
    
    cout << "Average Marks: " << averageMarks << endl;
    cout << "Percentage Marks: " << percentageMarks << "%" << endl;
// Output average and percentage marks

    return (0);
}

