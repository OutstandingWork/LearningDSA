#include<bits/stdc++.h>
using namespace std;
void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
}
int main()
{
int x;int y;
cin>>x;
cin>>y;
vector<std::vector<int>> matrix(x, std::vector<int>(y));
vector<std::vector<int>> matrixT1(y, std::vector<int>(x));
for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cin >> matrixT1[i][j];
        }
    }


vector<std::vector<int>> matrixT2(y, std::vector<int>(x));
// for(int i=0;i<x;i++)
// {
//     for(int j=0;j<y;j++)
//     {
//         matrixT1[j][i]=matrix[i][j];
//     }
// }
//printMatrix(matrixT1);
for(int i=0;i<y;i++)
{
    for(int j=0;j<x;j++)
    {
        if(i%2==1)
        matrixT2[i][x-j-1]=matrixT1[i][j];
        else
        matrixT2[i][j]=matrixT1[i][j];
    }
}
//printMatrix(matrixT2);
for(int i=0;i<y;i++)
{
    for(int j=0;j<x;j++)
    {
        matrix[j][i]=matrixT2[i][j];
    }
}
for(int i=0;i<x;i++)
{
    for(int j=0;j<y;j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}