#include<iostream>
using namespace std;
int main()
{
    int arr2D[10][10], * arr1D;
    int n, m, i, j;

    cout<<"Enter Number of Rows: "<<endl;
    cin>>n;
    cout<<"Enter Number of colums: "<<endl;
    cin>>m;
    cout<<"Enter 2D Array: "<<endl;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            cin>>arr2D[i][j];
        }
    }
    arr1D = (int*)malloc(n * m * sizeof(int));

    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            arr1D[i * m + j] = arr2D[i][j];
        }
    }
    cout<<"1D Array: ";
    for (i = 0; i < n * m; ++i) {
        cout<<arr1D[i]<<", ";
    }
}