 #include<stdio.h>
int main (){
    int n ;
    scanf("%d",&n);
    int s= n-1;
    int t=1;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 1; j <= s; j++)
        {
            /* code */
            printf(" ");
        }
        for (int j = 1; j <= t; j++)
        {
        
             printf("%d",t-j+1);
          
           
        }
        s--;
        t++;
        printf("\n");
        
    }
    
    return 0;
}