 #include<stdio.h>
int main (){
    
     int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    // int elem = row*col;
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            scanf("%d",&arr[i][j]);
        }
        
    }
 int flag = 1;
    if (row != col)
    {
        /* code */
        flag=0;
    }
    // printf("%d",flag);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
             if (i==j)
             {
                continue;
               
             }
             if(arr[i][j]!=0){
                flag =0;
             }
             
            
        }
        
    }
    if(flag==0){
        printf("Not primary diagonal");
    }else{
         printf("primary diagonal");
    }

    return 0;
}