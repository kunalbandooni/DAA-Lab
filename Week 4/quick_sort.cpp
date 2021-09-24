#include<iostream>
using namespace std;
int comp = 0;
int partition(int *arr, int l, int r){
    int pivot = arr[r];
    int p1 = l - 1, p2;
    for (p2 = l; p2 <= r - 1; p2++)
        if (arr[p2] < arr[pivot]){
            comp++;
            swap(arr[++p1], arr[p2]);
        }
    swap(arr[++p1], arr[pivot]);
    cout << comp << endl;
    return p1;
}
void quick_sort(int *arr, int l, int r){
    if (l < r){
        int pi = partition(arr, l, r);
        quick_sort(arr, l, pi - 1);
        quick_sort(arr, pi, r);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        comp = 0;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        quick_sort(arr,0,n-1);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}