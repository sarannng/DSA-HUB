// This is the program to impliment the bubble sort

#include <iostream>

using namespace std;

int main()
{
    int arr[50], size;

    cout << "\nEnter the size of the array";
    cin >> size;

    cout << "\nEnter the elements of the array";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Now array is scanned

    //sorting algo start

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size  - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // printing out the sorted array

    for(int i=0; i< size; i++){
        cout<<arr[i];
    }



}