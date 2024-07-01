 #include<stdio.h>
 #include<string.h>

 void fun(char *arr){
     int len =strlen(arr);
     printf("%d",len);
 }

int main (){
    char arr[20] ='hello';
    fun(arr);
    return 0;
}