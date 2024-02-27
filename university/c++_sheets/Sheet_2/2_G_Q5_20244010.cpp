
#include <iostream>

using namespace std;

/**
 *main-Function to check whether a triangle is valid or not based on the sum of its three angles.
 *Return:0.
 */
 
int main() {
    int angle1, angle2, angle3;

    // Input three angles from the user
    cout << "Enter the three angles of the triangle: ";
    cin >> angle1 >> angle2 >> angle3;

    // Check if the triangle is valid
    if (angle1 + angle2 + angle3 == 180) {
        cout << "The triangle with angles " << angle1 << ", " << angle2 << ", and " << angle3 << " is valid." << endl;
    } else {
        cout << "The triangle with angles " << angle1 << ", " << angle2 << ", and " << angle3 << " is not valid." << endl;
    }

    return 0;
}
