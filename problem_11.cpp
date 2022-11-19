#include "iostream"
#include "time.h"

using namespace std;

int main(){
    int arr_i[3];
    float arr_f[4] = {5, 6, 7, 8};
    double arr_d[7] = {1, 2, 3, 4, 5, 6, 7};
    char arr_ch[11] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
    int l = 0;
    
    //    while(l<3){
    //        cin >> arr[l];
    //        l++;
//        }
    for(int i = 0; i <= 11; i++){
        cout << arr_ch[i];
    }
    cout << endl;

    
  
    return 0;
}
