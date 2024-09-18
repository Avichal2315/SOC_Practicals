#include "matrix.h"
#include<bits/stdc++.h>

using namespace std;

int main(){
    matrix *m=new matrix(5,5);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int a;
            cin>>a;
            m->setValue(i,j,a);
        }
    }

    m->display();
    m->transpose();
    m->display();
    m->search(5);
    m->replaceWI(2,2,10);
    m->display();
    m->inverse();
    
}