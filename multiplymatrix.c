#include<stdio.h>
const int a=2,b=2,c=2,d=2;

int main ()
{
    int matrix1[a][b]={{0,1},
                        {3,4}
                    };
    int matrix2[c][d]={{0,1},
                        {3,4}
                    };
    
    if(b==c){
        int result[a][d]={};
        result[0][0] = matrix1[0][0]*matrix2[0][0] + matrix1[0][1]*matrix2[1][0];
        result[0][1] = matrix1[0][0]*matrix2[0][1] + matrix1[0][1]*matrix2[1][1];
        result[1][0] = matrix1[1][0]*matrix2[0][0] + matrix1[1][1]*matrix2[1][0];
        result[1][1] = matrix1[1][0]*matrix2[0][1] + matrix1[1][1]*matrix2[1][1];
        printf("%d, %d\n", result[0][0],result[0][1]);
        printf("%d, %d\n", result[1][0],result[1][1]);
    }
    
return 0;
}

//for bigger matrixes
/*for(int i=0; i<a; i++) {
    for(int j=0; j<d; j++) {
        result[i][j] = 0;
        for(int k=0; k<b; k++) {
            result[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    }
}
*/