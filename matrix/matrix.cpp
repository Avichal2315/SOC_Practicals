#include "matrix.h"



matrix::matrix(int n,int m){
    vector<vector<int>> v[n][m];
    cout<<"matrix is created";
}


void matrix::transpose(){
    vector<vector<int>> v;
    vector<vector<int>> v1(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            v1[j][i]=v[i][j];
        }
    }
    v=v1;
}

bool matrix::search(int val){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==val){
                cout<<"value found at "<<i<<" "<<j;
                return true;
            }
        }
    }
    cout<<"value not found";

    return false;
}

void matrix::replaceWI(int n,int m,int val){
    v[n][m]=val;
}

void matrix::replaceWV(int val,int data){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==val){
                v[i][j]=data;
            }
        }
    }
}

vector<vector<int>> matrix::multi(vector<vector<int>> a){
    vector<vector<int>> v1(n, vector<int>(m));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            v1[i][j]=v[i][j]*a[i][j];
        }
    }
    return v1;
}

vector<vector<int>>& matrix::addition(vector<vector<int>> a){
    vector<vector<int>> v1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            v1[i][j]=v[i][j]+a[i][j];
        }
    }
    return v1;
}

vector<vector<int>>& matrix::subtract(vector<vector<int>> a){
    vector<vector<int>> v1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            v1[i][j]=v[i][j]-a[i][j];
        }
    }
    return v1;
}

void matrix::inverse(){
    vector<vector<int>> v1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            v1[j][i]=v[i][j];
        }
    }
    v=v1;
}

void matrix::setValue(int row,int col,int value){
    v[row][col]=value;
}

void matrix::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

