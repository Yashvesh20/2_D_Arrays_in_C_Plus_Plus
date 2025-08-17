Yashvesh Singh 24070123138
#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;
    int mat[m][n];
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the elements of the matrix: ";
            cin>>mat[i][j];
        }
    }
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
output:
Enter the number of rows: 4 
Enter the number of columns: 4
Enter the elements of the matrix: 1
Enter the elements of the matrix: 2
Enter the elements of the matrix: 3
Enter the elements of the matrix: 4
Enter the elements of the matrix: 5
Enter the elements of the matrix: 6
Enter the elements of the matrix: 7
Enter the elements of the matrix: 8
Enter the elements of the matrix: 9
Enter the elements of the matrix: 1
Enter the elements of the matrix: 3
Enter the elements of the matrix: 5
Enter the elements of the matrix: 7
Enter the elements of the matrix: 9
Enter the elements of the matrix: 2
Enter the elements of the matrix: 4
1 2 3 4 
5 6 7 8
9 1 3 5
7 9 2 4
