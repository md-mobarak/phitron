 #include<stdio.h>
int main (){
    int x = 10;

    printf("%p \n",&x);
    int * p = &x;
     printf("%d",*p);
    *p = 500;
    return 0;
}