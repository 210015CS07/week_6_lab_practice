#include "iostream"
#include "cmath"

using namespace std;

int factorial(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    cout << fact << endl;
    
    return fact;
}

int main(){
    int num;
    
    cout << "Enter the number: ";
    cin >> num;
    
    factorial(num);
    
}

