#include<stdio.h>
#include<conio.h>
void main()
{
    int r1, c1, i, j;
    printf("\nEnter the no. of rows and columns of matrix A: \n");
    scanf("%d%d",&r1,&c1);
    int matA[r1][c1];
    printf("\nEnter the elements of matrix A: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\tA[%d][%d]= ",i,j);
            scanf("%d",&matA[i][j]);
        }
        printf("\n");
    }
    printf("\nmatrix A= \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\t%d",matA[i][j]);
        }
        printf("\n");
    }
    // Transpose
    int matT[c1][r1]; int swap=0;
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            matT[j][i]=matA[i][j];
        }
    }
    printf("\nTranspose of matrix A is: \n");
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            printf("\t%d",matT[i][j]);
        }
        printf("\n");
    }
    getch();
}