//Part-d
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int p, int r, int num)
{
    if (p <= r)
    {
        int mid = (p + r) / 2;
        if (arr[mid] == num)
            return mid;
        if (arr[mid] > num)
            return binarySearch(arr, p, mid - 1, num);
        if (arr[mid] < num)
            return binarySearch(arr, mid + 1, r, num);
    }
    return -1;
}

int main()
{
    //1. Covert an Array into a Vector
    int src[] = {1, 2, 3, 4, 5};

    std::vector<int> dest(std::begin(src), std::end(src));
    cout << "Converted array into vector: ";
    for (int i : dest)
    {
        std::cout << i << " ";
    }

    //2. Sort a Vector
    vector<int> v{1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    sort(v.begin(), v.end());
    cout << "Sorted Vector: ";
    for (auto x : v)
        cout << x << " ";
    cout << endl;

    //3. Reverse a vector
    reverse(v.begin(), v.end());
    cout << "Reversed Vector: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    //4,5.Max and Min element in a vector
    vector<int> a = {1, 45, 54, 71, 76, 12};
    cout << "Vector: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
    cout << "\nMin Element = " << *min_element(a.begin(), a.end());
    cout << "\nMax Element = " << *max_element(a.begin(), a.end());

    //6.Occurence of x in vector
    std::vector<int> vc = {7, 2, 2, 4, 3, 2, 6};
    int x = 2;
    int freq = count(vc.begin(), vc.end(), x);
    cout << "Element " << x << " occurs " << freq << " times" << endl;

    //7.Sort an array
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout << "\nArray after sorting using default sort is : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    //8. Binary Search in an Array
    int arr1[] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int num = 33;
    int index = binarySearch(arr1, 0, n1 - 1, num);
    if (index == -1)
        cout << num << " is not present in the array";
    else
        cout << num << " is present at index " << index << " in the array";
    cout << endl;

    return 0;
}