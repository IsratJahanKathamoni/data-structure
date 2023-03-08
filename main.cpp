#include<bits/stdc++.h>
using namespace std;
int main()
{
    int z;
    char a[100];
    cout<<" Enter the size of  array size : ";
    cin>>z;
    for (int i = 0; i <z ; ++i)
    {
        cin>>a[i];
    }
    int temp;
    for (int i = 0; i <z ; ++i) {
        for (int j = i+1; j <z ; ++j) {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (int i = 0; i <z ; ++i)
    {
        cout<<a[i]<<" ";

    }
}