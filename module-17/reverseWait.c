//  #include<stdio.h>
// void fun (int i){
//     if(i==6) return;
//     fun(i+1);
//     printf("%d ",i);
// }

// int main (){
//     fun(1);
//     return 0;
// }

//  #include<stdio.h>

// void fun (int i,int n){
//    if(i==n+1) return;
//    fun(i+1,n);

//    printf("%d",i);
//    if(i!=1){
//   printf(" ");
//    }

// }

// int main (){
//     int n ;
//     scanf("%d",&n);
//     fun(1,n);
//     return 0;
// }

//  #include<stdio.h>

// void fun (int n,int arr[]){
//    if(i==n+1) return;
//    fun(i+1,n);

//    printf("%d",i);
//    if(i!=1){
//   printf(" ");
//    }

// }

// int main (){
//     int n ;
//     scanf("%d",&n);
//    int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",arr[i]);
//     }

//     fun(n,arr);
//     return 0;
// }

// problem 4 

// #include <stdio.h>
// void fun(int arr[], int n, int i)
// {
//     if (i == n) return;
       
//     fun(arr, n, i + 1);
//     if (i % 2 == 0)
//     {
//         printf("%d", arr[i]);
//     }
//     if (i != 0)
//     {
//         printf(" ");
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         scanf("%d ", &arr[i]);
//     }
//     fun(arr, n, 0);

//     return 0;
// }


// problem 5 
#include <stdio.h>
void fun (int n,int arr[],int i){
   if(i==n+1) return;

   int count = 0;
   printf("%d",arr[i]);
   fun(n,arr,i+1);

//    printf("%d",i);
//    if(i!=1){
//   printf(" ");
//    }

}

int main (){
    int n ;
    scanf("%d",&n);
   int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",arr[i]);
    }

    fun(n,arr,0);
    return 0;
}