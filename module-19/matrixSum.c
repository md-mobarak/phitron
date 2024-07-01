 #include<stdio.h>
int main (){

    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col] ,brr[row][col],crr[row][col];
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
       for (int j = 0; j < col; j++)
       {
        /* code */
        scanf("%d",&brr[i][j]);
       }
       
    }
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
        /* code */
        crr[i][j]=arr[i][j]+brr[i][j]; 
        
       }
      
    }
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
        /* code */
        printf("%d ",crr[i][j]);
        
       }
       printf("\n");
      
    }
    
    
    return 0;
}