#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void heapify(int arr[], int n, int i) {
    int small = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[small])
        small = left;

    if (right < n && arr[right] < arr[small])
        small = right;

    if (small != i) {
        swap(arr[i], arr[small]);
        heapify(arr, n, small);
    }
}

void heapSort(int arr[], int n) {
    // Build min heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Heap sort
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int size;
    cout<<"enter size\n";
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"enter element of"<<i<< "array\n";
        cin >> input[i];
    }

    heapSort(input, size);

    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }

    delete[] input;
}