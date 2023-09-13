
#include <iostream>
using namespace std;

///////////////////////////////////////////////
// Making a comment to change my code (part 10)
///////////////////////////////////////////////.

int add(int arr[]) {

    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    return sum;
}

int multiply(int arr[]) {
    int prod = 1;

    for (int i = 0; i < 5; i++) {
        prod *= arr[i];
    }

    return prod;
}

int main()
{
    cout << "Enter 5 numbers to perform addition and multiplication on: \n";

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int sum = add(arr);
    int product = multiply(arr);

    cout << "Sum: " << sum << endl << "Product: " << product << endl;


}