#include "iostream"
#include "cmath"

using namespace std;

int prime(int num){
    int crt = 0;
    for(int i = 1; i <= num; i++){
        if(i%2==0) crt++;
    }
    if(crt <= 2){
        cout << "The number is prime" << endl;
    } else {
        cout << "The number is not prime" << endl;
    }
    
    return 0;
}

int main(){
    
    int num;
    
    cout << "Enter the number: ";
    cin >> num;
    
    prime(num);
    
}
