//Selection Sort

#include <iostream>

using namespace std;

//selectionSort function
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i; j <= n - 1; j++)
            if (arr[j] < arr[i])
                min_index = j;
        swap(arr[i], arr[min_index]);
    }
}

int main()
{
    int size, a[1000];
    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> a[i];

    selectionSort(a, size);

    for (int i = 0; i < size; i++)
        cout << a[i] << " ";

    return 0;
}