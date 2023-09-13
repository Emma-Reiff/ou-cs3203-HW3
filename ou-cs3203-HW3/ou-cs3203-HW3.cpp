
#include <iostream>
#include <array>
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

int* reverse(int arr[]) 
{

    int* newArr = new int[5];

    for (int i = 0; i < 5; i++)
    {
        newArr[5 - i - 1] = arr[i];
    }
 
    return newArr;
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

    int* rarrPtr = reverse(arr);

    int index = 0;

    while (index < 5)
    {
        cout << rarrPtr[index] << " ";
        index++;
    }

}


