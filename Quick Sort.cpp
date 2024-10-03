#include <iostream>
using namespace std;

// Function to swap two elements in the array
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Function to partition the array and return the pivot index
int partition(int arr[], int low, int high)
{
    int pivot = arr[high], i = low - 1;
    for (int j = low; j < high; j++)
        if (arr[j] <= pivot)
            swap(arr[++i], arr[j]);
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Function to perform Quick Sort
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
