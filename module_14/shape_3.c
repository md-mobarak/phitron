 #include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    if(n%2!=1){
        return 0;
    }
    if(n>21){
        return 0;
    }
    int s=n-1;
    int k=1;
    for (int i = 1; i <= n*2; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            /* code */
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            /* code */
            printf("*");
        }
        if(i<n){
            k=k+2;
            s--;
        }else if(i>n){
             k=k-2;
             s++;
        }
   
       
        printf("\n");
        
    }
    
    return 0;
}