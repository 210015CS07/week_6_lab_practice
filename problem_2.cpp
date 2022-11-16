#include "iostream"
#include "cmath"

using namespace std;

int mult(int, int);

int main(){
    
    int num1, num2;
    
    cout << "Enter the 1st number: ";
    cin >> num1;
    cout << "Enter the 2nd number: ";
    cin >> num2;
    
    cout << "The product of " << num1 << " and " << num2 << " is "<< mult(num1, num2) << endl;
    
}

int mult(int num1, int num2){
    int product = num1 * num2;
    
    return product;
}
