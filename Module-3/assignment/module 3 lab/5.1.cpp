#include <iostream>
using namespace std;
int main() {
    int n;
    // Ask the user for the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    // Declare an array with size up to 100
    int arr[100];
    int sum = 0;
    // Input array elements
    cout << "Enter " << n << " integer values:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];  // Add to sum while inputting
    }
    // Calculate average
    float average = (float)sum / n;
    // Display results
    cout << "\nSum of array elements = " << sum << endl;
    cout << "Average of array elements = " << average << endl;

    return 0;
}

