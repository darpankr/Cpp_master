#include<iostream>

using namespace std;

int main()
{
    int ar[2][3] = {1, 2, 3, 4, 5, 6};
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j< 3; j++)
        {
            cout<<"ar["<<i<<"]["<<j<<"] = "<<ar[i][j]<<endl;
        }
    }
    return 0;
}