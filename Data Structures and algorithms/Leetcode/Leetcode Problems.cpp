//
//  Leetcode Problems.cpp
//  Created by Rashik Ghosh on 04/09/24.
//||___________________________________________________________EASY___________________________________________________________
//Give an integer number n; return the difference between the product of its digit and the sum of its digit...

//#include <iostream>
//using namespace std;
//
//int main() {
//    int num;
//    cout << "Enter the number num: ";
//    cin >> num;
//
//    int num1;
//    int sum = 0;
//    int mult = 1;
//
//    while (num != 0) {
//        num1 = num % 10;
//        sum += num1;
//        mult *= num1;
//        num /= 10;
//    }
//
//    cout << "Sum of the digits of the number is: " << sum << endl;
//    cout << "Product of the digits of the number is: " << mult << endl;
//    cout << "Difference between the product and sum of the number is: " << mult - sum << endl;
//
//    return 0;
//}

//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside
//the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0...
#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout << "enter the value of n: " ;
//    cin >> n;
//    int ans=0;
//    int i=0;
//    while (n != 0) {
//        int digit=n%10;
//        ans= (ans*10) + digit;
//        n=n/10;
//    }
//    cout << ans << endl;
//}
