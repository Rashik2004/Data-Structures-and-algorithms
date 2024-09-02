//
//  Arrays.cpp
//  Data Structures and algorithms
//
//  Created by Rashik Ghosh on 01/09/24.
//

//-------------Reverse the array----------
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout << "enter the value of n: ";
//    cin >> n;
//    int array[n];
//    for (int i=0; i<n; i++) {
//        cin >> array[i];
//    }
//    for (int i=n-1; i>=0; i--) {
//        cout << array[i] << " ";
//    }
//}
//---------------find the maximun and minimun element in an array------

//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cout << "enter the value of n: ";
//    cin >> n;
//    int array[n];
//    for (int i=0; i<n; i++) {
//        cin >> array[i];
//    }
//    int min=array[0];
//    int max=array[0];
//    for (int i=0; i<n; i++) {
//        if (array[i]<min) {
//            min=array[i];
//        }
//        else if (array[i]>max){
//            max=array[i];
//        }
//    }
//    cout <<"The minimum number in an array is: " << min << endl;
//    cout << "The maximum number in an array is: " << max << endl;
//    return 0;
//}

//--------------Find the "Kth" max and min element of an array-----------
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int array[n];
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (array[j]>array[j+1]) {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for (int i=0; i<n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    int k;
    cout << "Enter which element you want to choose: ";
    cin >> k;
    int min=array[k-1];
    int max=array[n-k];
    cout << "The min element of an array is: "<< min <<endl;
    cout << "The max elemnet of an array is: "<< max <<endl;
}
