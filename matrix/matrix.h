#include<bits/stdc++.h>
using namespace std;


class matrix
{
    protected:
    int n;
    int m;
    vector<vector<int>> v;
     


    public:
    matrix(int n, int m);
    void setValue(int row, int col, int value);
    void transpose();
    bool search(int val);
    void replaceWI(int n,int m,int val);
    void replaceWV(int val,int data);
    vector<vector<int>>& multi(vector<vector<int>> a);
    vector<vector<int>>& addition(vector<vector<int>> a);
    vector<vector<int>>& subtract(vector<vector<int>> a);
    void inverse();
    void display();
};