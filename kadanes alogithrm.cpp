#include <iostream>
using namespace std;
int main() {
    int n,i;
    cout<<"ENTER NO OF ELEMENTS IN AN ARRAY"<<endl;
    cin>>n;
    int a[n];
    for( i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int cs=0,ms=0;
    for(i=0;i<n;i++)
    {
       cs=cs+a[i];
       if(cs<0)
       cs=0;
       ms=max(cs,ms);
    }
    cout<<"THE MAXIMUM SUBARRAY SUM IS : "<<ms;
    return 0;
}
