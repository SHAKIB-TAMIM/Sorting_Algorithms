#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements in the array (max 10): ";
    cin >> n;

    // Limit the size to a maximum of 10
    if (n > 10)
    {
        cout << "The maximum allowed size is 10. Setting size to 10." << endl;
        n = 10;
    }
    else if (n < 1)
    {
        cout << "Invalid size. Setting size to 1." << endl;
        n = 1;
    }

    int myarray[10]; // Declare an array of size 10

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> myarray[i];
    }

    cout << "\nInput list is:\n";
    for (int i = 0; i < n; i++)
    {
        cout << myarray[i] << "\t";
    }

    // Insertion sort
    for (int k = 1; k < n; k++)
    {
        int temp = myarray[k];
        int j = k - 1;
        while (j >= 0 && temp <= myarray[j])
        {
            myarray[j + 1] = myarray[j];
            j = j - 1;
        }
        myarray[j + 1] = temp;
    }

    cout << "\nSorted list is:\n";
    for (int i = 0; i < n; i++)
    {
        cout << myarray[i] << "\t";
    }

    return 0;
}
