 #include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    int x ;
  scanf("%d",&x);
  int found=0;

  for (int i = 0; i < n-1; i++)
  {
    /* code */
    for (int j = i+1; j < n; j++)
    {
        /* code */
        if(arr[i]+arr[j]==x){
            // printf("Yes\n");
            found=1;
        }
    }
    
  }
if(found==1){
    printf("Yes\n");
}else{
    printf("NO\n");
}
  
    
    return 0;
}