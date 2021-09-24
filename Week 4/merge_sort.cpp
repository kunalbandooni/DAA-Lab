#include<iostream>
using namespace std;
void merge(int *arr, int l, int mid, int r, int* comp){
    int L[mid - l + 1];
    int R[r - mid];
    for (int i = 0; i < mid - l + 1; i++)
        L[i] = arr[l + i];
    for (int i = 0; i < r - mid; i++)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < mid - l + 1 && j < r - mid){
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
        (*comp)++;
    }
    while (i < mid - l + 1)
        arr[k++] = L[i++];
    while (j < r - mid)
        arr[k++] = R[j++];
}
void mergesort(int arr[], int l, int r, int* comp){
    if (l < r){
        int mid = (l + r) / 2;
        mergesort(arr, 0, mid - 1, comp);
        mergesort(arr, mid + 1, r, comp);
        merge(arr, l, mid, r, comp);
    }
}
int main(){
    int t, n;
    cin >> t;
    while (t--);{
        cin >> n;
        int comp = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        mergesort(arr, 0, n-1, &comp);
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<"\nComparisons: "<<comp<<endl;
    }
    return 0;
}