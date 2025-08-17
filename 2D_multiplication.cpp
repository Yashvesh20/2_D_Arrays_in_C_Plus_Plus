Yashvesh Singh 24070123138
#include <iostream>
using namespace std;
int main(){
    int m,n,x,y;
    cout<<"Enter the number of rows for matrix 1:";
    cin>>m;
    cout<<"Enter the number of columns for matrix 1:";
    cin>>n;
    int mat[m][n];
    cout<<"Enter the number of rows for matrix 2:";
    cin>>x;
    cout<<"Enter the number of columns for matrix 2:";
    cin>>y;
    int mat2[x][y];
    if(n==x){
        cout<<"The matrices can be multiplied"<<endl;
    }else{
        cout<<"The matrices cannot be multiplied"<<endl;
        return 0;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the elements of the matrix 1:";
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<"Enter the elements of the matrix 2:";
            cin>>mat2[i][j];
        }
    }
    int mat3[m][y];
    for(int i=0;i<m;i++){
        for(int j=0;j<y;j++){
            mat3[i][j]=0;
            for(int k=0;k<n;k++){
                mat3[i][j]+=mat[i][k]*mat2[k][j];
            }
        }
    }
    cout<<"The matrix 1 is:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The matrix 2 is:"<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The Final matrix is:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<y;j++){
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
}
output:
Enter the number of rows for matrix 1:3
Enter the number of columns for matrix 1:3
Enter the number of rows for matrix 2:3
Enter the number of columns for matrix 2:3
The matrices can be multiplied
Enter the elements of the matrix 1:1
Enter the elements of the matrix 1:2
Enter the elements of the matrix 1:3
Enter the elements of the matrix 1:4
Enter the elements of the matrix 1:5
Enter the elements of the matrix 1:6
Enter the elements of the matrix 1:7
Enter the elements of the matrix 1:8
Enter the elements of the matrix 1:9
Enter the elements of the matrix 2:2
Enter the elements of the matrix 2:4
Enter the elements of the matrix 2:6
Enter the elements of the matrix 2:8
Enter the elements of the matrix 2:0
Enter the elements of the matrix 2:1
Enter the elements of the matrix 2:3
Enter the elements of the matrix 2:5
Enter the elements of the matrix 2:7
The matrix 1 is:
1 2 3 
4 5 6 
7 8 9 
The matrix 2 is:
2 4 6 
8 0 1 
3 5 7 
The Final matrix is:
27 19 29 
66 46 71 
105 73 113 
