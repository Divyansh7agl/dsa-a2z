#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted halves
void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low, right = mid + 1;

    // Merge the two halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right])
            temp.push_back(arr[left++]);
        else
            temp.push_back(arr[right++]);
    }

    // Copy remaining elements from left half
    while (left <= mid)
        temp.push_back(arr[left++]);

    // Copy remaining elements from right half
    while (right <= high)
        temp.push_back(arr[right++]);

    // Copy back to original array
    for (int i = low; i <= high; i++)
        arr[i] = temp[i - low];
}

// Recursive merge sort
void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int x : arr)
        cout << x << " ";

    return 0;
}
