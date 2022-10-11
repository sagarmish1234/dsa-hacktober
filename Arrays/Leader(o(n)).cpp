#include <iostream>
using namespace std;                                                    // Method 3:  Reverse algorithm
void Leader(int arr[], int n)
{
    int current_leader = arr[n-1];
    cout<<current_leader<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>current_leader)
        {
            current_leader=arr[i];
            cout<<current_leader<<" ";
        }
    }
}
int main()
{
    int arr[] = {1,1,2,2,3,4,5,6,7};
    int n=9;
     Leader(arr,n);
    return 0;
}