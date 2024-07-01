 #include<stdio.h>
 void fun (int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    }
    
 }
int main (){
    int arr[]={20,30,40,50,60};
    fun(arr,5);
    return 0;
}