#include <iostream>
#include <cmath> /* allows to use the mathematical constant M_PI */

using namespace std;

/**
 *main-Function enter(length,breadth,radius),calculates(area_rec,perimeter_rec,area_cir,circumference).
 *Return:0.
 */
int main() {
    double length, breadth, radius;
    
    // Input for rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    
    // Calculate area and perimeter of rectangle
    double rectangleArea = length * breadth;
    double rectanglePerimeter = 2 * (length + breadth);
    
    // Input for circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    // Calculate area and circumference of circle
    double circleArea = M_PI * radius * radius; 
    /* 
    M_PI: This is a predefined constant in the C++ 
    math library that represents the mathematical
    constant π (pi). π is a constant approximately
    equal to 3.14159, which represents the ratio
    of the circumference of a circle to its diameter.
    */
    double circleCircumference = 2 * M_PI * radius;
    
    // Output results
    cout << "Area of the rectangle: " << rectangleArea << endl;
    cout << "Perimeter of the rectangle: " << rectanglePerimeter << endl;
    cout << "Area of the circle: " << circleArea << endl;
    cout << "Circumference of the circle: " << circleCircumference << endl;
    
    return (0);
}
