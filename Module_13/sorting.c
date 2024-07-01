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
  for (int i = 0; i <= n-1; i++)
  {
    /* code */
    for (int j = i+1; j < n; j++)
    {
    //    printf("%d %d\n",arr[i],arr[j]);
       if(arr[i]<arr[j]){
           int tem = arr[i];
           arr[i]= arr[j];
           arr[j]= tem;

       }
    }
    printf("%d ",arr[i]);
    
  }

    return 0;
}