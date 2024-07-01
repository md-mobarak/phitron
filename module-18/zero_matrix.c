 #include<stdio.h>
int main (){
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    int elem = row*col;
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            scanf("%d",&arr[i][j]);
        }
        
    }
    int cont =0;
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            // printf("%d",&arr[i][j]);
            if(arr[i][j]==0){
                cont++;
            }
        }
        
    }
    if(cont == elem){
        printf("Zero Matrix");
    }else{
        printf("Not Zero matrix");
    }

    printf("%d",cont);
    
    return 0;
}