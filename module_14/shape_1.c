 #include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int k=n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            /* code */
            printf("*");
        } 
        k--;
        printf("\n");
    }
    
    return 0;
}