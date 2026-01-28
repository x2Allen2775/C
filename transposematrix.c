#include<stdio.h>
const int a=2,b=2;

int main ()
{
    int matrix1[a][b]={{0,1},
                        {3,4}
                    };
    int transpose[b][a]={};
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            transpose[j][i]=matrix1[i][j];
        }
    }
    printf("%d, %d\n", transpose[0][0],transpose[0][1]);
    printf("%d, %d\n", transpose[1][0],transpose[1][1]);
    
return 0;
}