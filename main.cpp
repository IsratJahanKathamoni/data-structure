#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"please inpute the size of array :";
    cin>>z;
    cout<<"Please inpute the range of array"<<'\n';
    cout<<"please inpute the first number range  :";
    cin>>y;
    cout<<"Please inpute the last numbe of range :";
    cin>>x;
    int a[z];
    for (int i = 0; i <z ; ++i) {
        a[i]=rand()%(x-y)+y;
    }
    int temp;
    for (int i = 0; i <z ; ++i) {
        for (int j = i+1; j <z ; ++j) {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<'\n';
    cout<<"DESCENDING ORDER : ";
    for (int i = 0; i <z ; ++i) {
        cout<<a[i]<<" ";
    }
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
    cout<<'\n';

    cout<<"ASCENDING ORDER : ";
    for (int i = 0; i <z ; ++i) {
        cout<<a[i]<<" ";
    }
    return 0;
}