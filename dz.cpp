//#include <iostream>
//using namespace std;
//
//bool Is_perfect(int num) {
//    int sum = 0;
//
//    for (int j = 1; j < num; j++) {
//        if (num % j == 0)
//            sum += j;
//    }
//
// 
//    if (sum == num)
//        return true;
//    else
//    {
//        return false;
//    }
//}
//
//int main() {
//    const int a = 5;
//    int arr[a] = { 1,5,6,7,28 };
//    for (int i = 1; i < a; i++) 
//    {
//        if (Is_perfect(arr[i]) == true) 
//        {
//            cout << "yes";
//            break;
//        } 
//    }
//}

//#include <iostream>
//using namespace std;
//
//bool isPerfect(int num) {
//    int sum = 0;
//    for (int i = 1; i <= num / 2; i++) {
//        if (num % i == 0) {
//            sum += i;
//        }
//    }
//    return sum == num;
//}
//
//int main() {
//    int n;
//    bool foundPerfect = false;
//    cout << "Enter the sequence of integers: ";
//    while (cin >> n) {
//        if (isPerfect(n)) {
//            foundPerfect = true;
//            break;
//        }
//    }
//    if (foundPerfect) {
//        cout << "The sequence contains at least one perfect number." << endl;
//    }
//    else {
//        cout << "The sequence does not contain any perfect numbers." << endl;
//    }
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//bool isPrime(int num) {
//    if (num <= 1) {
//        return false;
//    }
//    for (int i = 2; i <= num / 2; i++) {
//        if (num % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    int n;
//    bool foundPrime = false;
//    cout << "Enter the sequence of integers: ";
//    while (cin >> n) {
//        if (isPrime(n)) {
//            foundPrime = true;
//            break;
//        }
//    }
//    if (foundPrime) {
//        cout << "The sequence contains at least one prime number." << endl;
//    }
//    else {
//        cout << "The sequence does not contain any prime numbers." << endl;
//    }
//    return 0;
//}
//

//#include <iostream>
//using namespace std;
//
//int countDigits(int num) {
//    int count = 0;
//    while (num > 0) {
//        count++;
//        num /= 10;
//    }
//    return count;
//}
//
//int main() {
//    int n, maxDigits = 0, maxNum = -1;
//    cout << "Enter the sequence of integers: ";
//    while (cin >> n) {
//        int numDigits = countDigits(n);
//        if (numDigits > maxDigits) {
//            maxDigits = numDigits;
//            maxNum = n;
//        }
//    }
//    if (maxNum == -1) {
//        cout << "The sequence is empty." << endl;
//    }
//    else {
//        cout << "The number " << maxNum << " has the most digits (" << maxDigits << ")." << endl;
//    }
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int sumDivisors(int num) {
//    int sum = 0;
//    for (int i = 1; i <= num / 2; i++) {
//        if (num % i == 0) {
//            sum += i;
//        }
//    }
//    return sum;
//}
//
//bool areFriendly(int num1, int num2) {
//    if (num1 == num2) {
//        return false;
//    }
//    int sum1 = sumDivisors(num1);
//    int sum2 = sumDivisors(num2);
//    return (sum1 == num2 && sum2 == num1);
//}
//
//int main() {
//    int n, prev = -1;
//    bool foundFriendly = false;
//    cout << "Enter the sequence of integers: ";
//    while (cin >> n) {
//        if (prev != -1 && areFriendly(prev, n)) {
//            foundFriendly = true;
//            break;
//        }
//        prev = n;
//    }
//    if (foundFriendly) {
//        cout << "The sequence contains at least one pair of adjacent friendly numbers." << endl;
//    }
//    else {
//        cout << "The sequence does not contain any pair of adjacent friendly numbers." << endl;
//    }
//    return 0;
//}

