#include<iostream>
using namespace std;
int main()
{
    
    int n;
    int max_num = 0;
    int dem = 0;
    cin>>n;
    int matrix[n+2][n+2];
    for(int i = 0; i < n+2 ; i++)
    {
        matrix[0][i] = 0;
        matrix[i][0] = 0;
        matrix[n+1][i] = 0;
        matrix[i][n+1] = 0;
    }
    for(int i = 1; i < n+1; i++)
    {
        for(int j = 1; j < n+1; j++)
        {
            cin>>matrix[i][j];
        }
    }
    for(int i = 1; i < n+1; i++)
    {       
        for(int j = 1; j < n+1; j++ )
        {
            int temp[8];
            int core = matrix[i][j];
            temp[0] = core + matrix[i-1][j-1];
            temp[1] = core + matrix[i-1][j];
            temp[2] = core + matrix[i-1][j+1];
            temp[3] = core + matrix[i][j-1];
            temp[4] = core + matrix[i][j+1];
            temp[5] = core + matrix[i+1][j-1];
            temp[6] = core + matrix[i+1][j];
            temp[6] = core + matrix[i+1][j+1];

            for(int k = 0; k<8; k++)
            {
                if(temp[i] > max_num){
                    max_num = temp[i];
                    dem = 1;
                }
                else if (temp[i] == max_num)
                {
                    dem++;
                }
                
            }
        }
    }
cout<<max_num<<" "<<dem;
}