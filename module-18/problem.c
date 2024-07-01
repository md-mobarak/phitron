// // problem 5 
// #include <stdio.h>
// void fun (int n,int arr[],int i){
//    if(i==n+1) return;

// //    int count = 0;
//    printf("%d",arr[i]);
//    fun(n,arr,i+1);

// //    printf("%d",i);
// //    if(i!=1){
// //   printf(" ");
// //    }

// }

// int main (){
//     int n ;
//     scanf("%d",&n);
//    int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",arr[i]);
//     }

//     fun(n,arr,0);
//     return 0;
// }



// #include <stdio.h>

// int sum(int arr[], int n,int i) {
 
      
//     int addition= 0;
//      if(n==i+1) return;
//      addition++;

//     sum(arr,n,i+1);
   
//     return addition;
// }

// int main() {
//     int N;
//     // Read the number of elements
//     scanf("%d", &N);
    
//     int A[N];
//     // Read the array elements
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &A[i]);
//     }

//     // Calculate the sum of the array elements using the recursive function
//     int result = sum(A, N,0);
    
//     // Print the result
//     printf("%d", result);
    
//     return 0;
// }


// diagonal problem 

//  #include<stdio.h>
//  #include <stdlib.h>
// int main (){
//     int row;
//     scanf("%d",&row);
//     int col = row;
//     int arr[row][col];
//     // input 
//     for (int i = 0; i < row; i++)
//     {
//           for (int j = 0; j < col; j++)
//           {
//               scanf("%d",&arr[i][j]);
//           }
          
//     }
//     //  output 
//     int primaryCount=0;
//     int secondaryCount=0;
//     for (int i = 0; i < row; i++)
//     {
//           for (int j = 0; j < col; j++)
//           {
//               if(i==j){
//                  primaryCount= primaryCount+ arr[i][j] ;
//               }
//               if(i+j==row-1){
//                 secondaryCount= secondaryCount+arr[i][j];
//                 // printf("%d ",arr[i][j]);
//               }
//             //   printf("%d ",arr[i][j]);
//           }
//         //   printf("\n");
          
//     }
//     // printf("%d\n",primaryCount);
//     // printf("%d\n",secondaryCount);
//     int def= primaryCount - secondaryCount;
//     //  printf("%d",def);
//     if(def<0){
//           int absValue = abs(def);
//     printf("%d",absValue);
//     }else{
//          printf("%d",def);
//     }
//     return 0;
// }

// problem 7 


// diagonal problem 

 #include<stdio.h>
 #include <stdlib.h>
int main (){
    int row, col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    // input 
    for (int i = 0; i < row; i++)
    {
          for (int j = 0; j < col; j++)
          {
              scanf("%d",&arr[i][j]);
          }
          
    }
    int x;
    scanf("%d",&x);
    //  output 
    int isExits=1;
    for (int i = 0; i < row; i++)
    {
          for (int j = 0; j < col; j++)
          {
             if(x==arr[i][j]){
                isExits= 0;
             }
          }
        //   printf("\n");
          
    }
    if(isExits==0){
     printf("will not take number");
    }else{
        printf("will take number");
    }
   
    return 0;
}

