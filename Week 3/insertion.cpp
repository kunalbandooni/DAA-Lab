#include<iostream>
#include<vector>
using namespace std;
void insertion_sort(vector<int> a){
    int comp=0,swaps=0;
    for(int i=1;i<a.size();i++){
        int key=a[i];
        int j=i-1;
        swaps++;
        while(j>=0 && a[j]>key){
            swaps++;
            a[j+1]=a[j];
            j--;   
            comp++;
        }
        a[j+1]=key;
    }
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl<<"Comparisons: "<<comp<<endl;
    cout<<"Shifts: "<<swaps;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,l;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            cin>>l;
            a.push_back(l);
        }
        insertion_sort(a);
    }
    return 0;
}