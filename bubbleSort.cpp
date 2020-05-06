//Bubble Sort

#include <iostream>

using namespace std;

//Bubble Sort function
void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
        for (int j = 0; j < n - i; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main()
{

    int size, a[1000];
    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> a[i];

    bubbleSort(a, size);

    for (int i = 0; i < size; i++)
        cout << a[i] << " ";

    return 0;
}