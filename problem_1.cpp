#include "iostream"
#include "cmath"

using namespace std;

int adding(int, int);

int main(){
    
    int num1, num2;
    
    cout << "Enter the 1st number: ";
    cin >> num1;
    cout << "Enter the 2nd number: ";
    cin >> num2;
    
    cout << "The sum of " << num1 << " and " << num2 << " is "<< adding(num1, num2) << endl;
    
}

int adding(int num1, int num2){
    int sum = num1 + num2;
    
    return sum;
}
