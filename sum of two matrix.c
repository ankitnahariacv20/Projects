#include<stdio.h>
#include<conio.h>
int matrix(int,int);
int main()
{
 int row,col,i,j;
 printf("\n Enter the number of rows and columns");
 scanf("%d %d",&row,&col);
 int mat1[row][col],mat2[row][col],sum[row][col];
 matrix(row,col);
 for(i=0;i<row;i++)
 for(j=0;j<col;j++)
     {
         sum[i][j]=mat1[i][j]+mat2[i][j];
     }
 printf("\nSum of two matrix is\n");

 for(i=0;i<row;i++)
 for(j=0;j<col;j++)
 {
     printf("\t sum[%d][%d]=%d",i,j,sum[i][j]);
     if(j==col-1)
     {
         printf("\n");
     }
 }
 getch();
 return 0;
}

int matrix(int row,int col)
{
 int mat1[row][col],mat2[row][col],i,j;
 printf("\nEnter the first matrix");
 for(i=0;i<row;i++)
 {
  printf("\n");

  for(j=0;j<col;j++)
  {
   printf("\t mat[%d][%d]",i,j);
   scanf("%d",&mat1[i][j]);
  }
 }

 for(i=0;i<row;i++)
 {
  printf("\n");
  for(j=0;j<col;j++)
  {
   printf("\t mat1[%d][%d]=%d",i,j,mat1[i][j]);
  }
 }
 printf("\nEnter the second matrix");
 for(i=0;i<row;i++)
 {
  printf("\n");

  for(j=0;j<col;j++)
  {
   printf("\t mat[%d][n%d]",i,j);
   scanf("%d",&mat2[i][j]);
  }
 }

 for(i=0;i<row;i++)
 {
  printf("\n");

  for(j=0;j<col;j++)
  {
   printf("\t mat2[%d][%d]=%d",i,j,mat2[i][j]);
  }
 }
}

