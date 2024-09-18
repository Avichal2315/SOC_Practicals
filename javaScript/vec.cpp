#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> grid;


    vector<int> temp;

    

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            temp.insert(temp.begin()+j,j);
        }
        grid.insert(grid.begin()+i,temp);
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}