#include "iostream"
#include "cmath"

using namespace std;

int circle(double radius, double pi){

    double area = pi*pow(radius, 2);
    double cir = 2*pi*radius;

    cout << "The circumference of a circle of radius " << radius << " is " << cir << endl;
    cout << "The area of a circle of radius " << radius << " is " << area << endl;

    cout << endl;

    return cir;
    return area;
}

int main(){
    
    //A=pi*r^2
    //C=2pi*r

    double radius;
    double pi = 3.14;

    cout << "Enter the radius of circle: ";
    cin >> radius;

    circle(radius, pi);


}
