//#include "iostream"
//#include "time.h"
//
//using namespace std;
//
//void rand_numbers(){
//    int n = 0;
//    int arr[10];
//    int arr_number = 0;
//    bool is_exists = false;
//    
//    for(int i = 0; i < 10; i++)
//    {
//        is_exists = true;
//        
//        if(is_exists)
//        {
//            while (is_exists)
//            {
//                n = rand()%10+1;
//                is_exists = false;
//                
//                for(int j = 0; j < arr_number; j++)
//                {
//                    if(n == arr[j])
//                    {
//                        is_exists = true;
//                        break;
//                    }
//                }
//            }
//        }
//        
//        arr[arr_number] = n;
//        arr_number++;
//    }
//    
//    for(int j = 0; j < 10; j++)
//    {
//        cout << arr[j] << endl;
//    }
//    
//}
//
//int main(){
//    
//    srand((unsigned) time(NULL));
//    
//    rand_numbers();
//    
//    return 0;
//}
