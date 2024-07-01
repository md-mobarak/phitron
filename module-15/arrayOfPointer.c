 #include<stdio.h>
int main (){
    int arr[4]={20,30,40,50};
    printf("%p\n",arr[0]);
    printf("%p\n",&arr[0]);
    printf("%p\n",*arr);
    printf("%d",*(arr+1));
    return 0;
}