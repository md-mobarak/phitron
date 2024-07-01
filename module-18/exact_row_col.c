 #include<stdio.h>
int main (){
    int row;
    scanf("%d",&row);
    int col;
      scanf("%d",&col);
int arr[row][col];
      for (int i = 0; i < row; i++)
      {
         for (int j = 0; j < col; j++)
         {
            /* code */
            scanf("%d",&arr[i][j]);
         }
         
      }
    //   int c;
    //   scanf("%d",&c);
    //   for (int i = 0; i < col; i++)
    //   {
    //     /* code */
    //     printf("%d ",arr[c][i]);
    //   }
      int c;
      scanf("%d",&c);
      for (int i = 0; i < row; i++)
      {
        /* code */
        printf("%d ",arr[i][c]);
      }
      
      
    return 0;
}