#include "iostream"
#include "cmath"

using namespace std;

bool odd_even(int num){
    if(num%2==0){
        cout << true << endl;
    } else {
        cout << false << endl;
    }
    return 0;
}

int main(){
    
    int num;
    
    cout << "Enter the number: ";
    cin >> num;
    
    odd_even(num);
    
    
}
