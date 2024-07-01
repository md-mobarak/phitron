//   problem 1;
 
//  #include<stdio.h>
//  int fun (int a,int b){
//     int sum = a+b;
//     return sum;
//  }


// int main (){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int result = fun(a,b);
//     printf("%d",result);
//     return 0;
// }

// problem 2 

//  #include<stdio.h>
//  void fun (int a){
//     for (int i = 1; i <= a; i++)
//     {
//         /* code */
//         printf("%d ",i);
//     }
    
//  }


// int main (){
//     int a;
//     scanf("%d",&a);
//     fun(a);
//     // printf("%d",result);
//     return 0;
// }

 #include<stdio.h>
int main (){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int arr[3]={a,b,c};
    for (int i = 0; i < 3-1; i++)
    {
        // printf("%d ",arr[i]);
        // printf("\n");

         for (int j = 0; j < 3; j++)
         {
            /* code */
            
             if(arr[i]<arr[j]){
                  printf("%d\n",arr[j]);
             }
         }
       
    }
    
    return 0;
}