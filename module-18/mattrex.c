 #include<stdio.h>
int main (){
    
    int arr[5][3];
    // input 
    for (int i = 0; i < 5; i++)
    {
      
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }

    // output 
    
    for (int i = 0; i < 5; i++)
    {
      
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        
        printf("\n");
    }
    


    return 0;
}