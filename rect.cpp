// rect.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double length = 0;
    double width = 0;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    double area = (length * width);
    double perimeter = 2 * (length + width);
    cout << "The area of the rectangle is: " << area << endl;
    cout << "The perimrter of the rectangle is: " << perimeter;
}
