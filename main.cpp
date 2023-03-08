#include<bits/stdc++.h>
using namespace std;
void box_of_stars(int a, int h)
{
    for (int i = 1; i <a ; ++i) {
        cout<<"*";
    }
    cout<<endl;
    for(int b=1;b<=h;b++)
    {
        for(int c=1;c<=1;c++)
        {
            cout<<"*";
        }
        for(int d=1;d<=8;d++)
        {
            cout<<" ";
        }
        cout<<" * "<<endl;
    }
    for (int i = 1; i <a ; ++i) {
        cout<<"*";
    }
    cout<<endl;
}
int main()
{
    int height, width;
    cout<<"please inpute the width :";
    cin>>width;
    cout<<"Please inpute the height :";
    cin>>height;
    box_of_stars(width,height);

    return 0;
}