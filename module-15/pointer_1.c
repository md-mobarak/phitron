 #include<stdio.h>
int main (){
    int x = 100;
    int *AddressOfX = &x;
    // *AddressOfX= 500;
    x=300;
    printf(" x er value %d\n",x);
    printf(" addressof er value %d\n",*AddressOfX);
    // printf("x er address %p\n",&x);
    // printf("x addressOfX  value %p\n",AddressOfX);
    // printf("x addressOfX address %p",&AddressOfX);
    return 0;
}