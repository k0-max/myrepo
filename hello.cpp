#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
void swap2(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}
void print(int arr[] , int n ){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    cout << "namstey duniya" << endl;
    int a = 56, b = 89;
    swap2(a, b);
    cout << a << " " << b;

    cout<<"this is v4"<<endl;
    cout<<"this is v5"<<endl;
}