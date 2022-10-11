#include<bits/stdc++.h>
using namespace std;
int countDistinct(int arr[], int n)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);        
    }
    return s.size();

    
    
}
int main()
{   
    int arr[]={1,2,2,3,4,4,6,6};
    cout<<countDistinct(arr,8);
    return 0;
}