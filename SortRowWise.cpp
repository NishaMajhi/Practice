//sort array in row wise
#include<bits/stdc++.h>
using namespace std;
#define n 4
#define m 4
void display(int arr[4][4])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
           cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
//method 1 using stl
// void sortRowWise(int arr[n][m])
// {
//     for(int i=0;i<n;i++)
//     {
//         sort(arr[i],arr[i]+m);
//     }
//     display(arr);
// }

//method 2 using bubble sort
void sortRowWise(int arr[n][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<m-j-1;k++)
            {
                if(arr[i][k]>arr[i][k+1])
                  swap(arr[i][k],arr[i][k+1]);
            }
        }
    }
}

int main()
{
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
          cin>>arr[i][j];
    }
    cout<<"before sorting "<<endl;
    display(arr);
    cout<<endl;
    sortRowWise(arr);
    cout<<"after sorting"<<endl;
    display(arr);
 
    return 0;
}

/*
input:---
7 11 22 3
11 89 1 12
32 11 56 7
11 22 44 33

output:----
before sorting 
7 11 22 3      
11 89 1 12     
32 11 56 7     
11 22 44 33 

after sorting  
3 7 11 22
1 11 12 89
7 11 32 56
11 22 33 44
