#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Limit the size to a maximum of 100 for safety
    if (n <= 0 || n > 100)
    {
        cout << "Please enter a valid number of elements (1-100)." << endl;
        return 1; // Exit with error code
    }

    int arr[n]; // Declare an array of user-defined size

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
