// For transpose we have to just change the array[i][j] to transpose[j][i] just change i to j and j to i.
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr1[n][m];
    // Taking input for array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr1[i][j];
        }
    }
    int transpose[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            transpose[i][j] = arr1[j][i];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}