 #include<stdio.h>
int main (){

    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
        /* code */
        scanf("%d",&arr[i][j]);
       }
       
    }
    for (int i = 0; i < row; i++)
    {
       for (int j = col-1; j >= 0; j--)
       {
        /* code */
         printf("%d ",arr[i][j]);
       }
       printf("\n");
       
    }
    
    
    return 0;
}