 #include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int s=n-1;
    int k=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            /* code */
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            /* code */
            printf("*");
        }
        s--;
        k=k+2;
        printf("\n");
        
    }
    
    return 0;
}