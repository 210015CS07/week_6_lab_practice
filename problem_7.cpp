#include "iostream"
#include "cmath"

using namespace std;

int get_max(int num1, int num2, int num3){
    
    if(num1 > num2 && num1 > num3){
        return num1;
    }else if(num2 > num1 && num2 > num3){
        return num2;
    }else{
        return num3;
    }

}

int get_min(int num1, int num2, int num3){

    if(num1 < num2 && num1 < num3){
        return num1;
    }else if(num2 < num1 && num2 < num3){
        return num2;
    }else{
        return num3;
    }
    
}


int main(){
    
    int num1 = 0, num2 =0, num3=0;
    
    cout << "Enter number: " << endl;
    
    cin >> num1;
    cin >> num2;
    cin >> num3;
    
    cout << get_max(num1, num2, num3) << endl;
    cout << get_min(num1, num2, num3) << endl;
    
}
