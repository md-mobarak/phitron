// ******************* assignmentproblem1**********************

// #include <stdio.h>
// #include <string.h>

// int main() {
//     int t;
//     scanf("%d", &t); 

//     for (int i = 0; i < t; i++) {
//         int n;
//         scanf("%d", &n); 

//         char s[n + 1];
//         scanf("%s", s); 

//         int tigerCount = 0;
//         int pathanCount = 0;

       
//         for (int j = 0; j < n; j++) {
//             if (s[j] == 'T') {
//                 tigerCount++;
//             } else if (s[j] == 'P') {
//                 pathanCount++;
//             }
//         }

//         if (tigerCount > pathanCount) {
//             printf("Tiger\n");
//         } else if (pathanCount > tigerCount) {
//             printf("Pathaan\n");
//         } else {
//             printf("Draw\n");
//         }
//     }

//     return 0;
// }


// ******************* assignment problem 2**********************


// #include <stdio.h>

// int main() {
//    long long int n;
//     scanf("%lld", &n);

//     int m[n], a[n], b[n], c[n];

//     // Reading inputs
//     for (int i = 0; i < n; i++) {
//         scanf("%d %d %d %d", &m[i], &a[i], &b[i], &c[i]);
//     }

//     // Printing inputs
//     for (int i = 0; i < n; i++) {

//              int multiply = a[i] * b[i] * c[i];
//         int divided = (double)m[i] / multiply;
//        if(m[i]%multiply==0){
//           printf("%d\n",divided);
//        }else if(m[i]==0){
//         printf("0\n");
//        }
//        else{
//         printf("-1\n");
//        }
   
// }
//  return 0;

// }

//  #include<stdio.h>
// int main (){
//     int row,col;
//     scanf("%d %d",&row,&col);
//     int arr[row][col];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             /* code */
//             scanf("%d",&arr[i][j]);
//         }
        
//     }
   
//     if (row != col) {
//         printf("NO\n");
//         return 0;
//     }
//     int isExits=1;
 
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
           
//             int equal = i+j==row-1;
//             int equal2= i==j;
//             if (equal2)
//              {
//                if(arr[i][j]==1){
//                 continue;
//                }else{
//                 isExits=0;
//              }
               
//              }
//              if(equal){
//                if(arr[i][j]==1){
//                 continue;
//                }else{
//                 isExits=0;
//              }
//              }
//                  if(arr[i][j]!=0){
//                 isExits =0;
//              }

//         }
//         // printf("\n");
        
//     }
//     if(isExits==1){
//         printf("YES");
//     }else{
//         printf("NO");
//     }
//     // printf("%d",isExits);
    
//     return 0;
// }


// // problem-4 
//  #include<stdio.h>
// int main (){
//     int row,col;
//     scanf("%d %d",&row,&col);
//     int arr[row][col];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             /* code */
//             scanf("%d",&arr[i][j]);
//         }
        
//     }
   
  
//        for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//      if(i==row-1){
//   printf("%d ",arr[i][j]);
//                }
           
//         }
   
        
//     }
//      printf("\n");

//        for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//         if(j==col-1){
//   printf("%d ",arr[i][j]);
//                }
           
//         }

        
//     }




//     return 0;
// }


// // *****************problem 5**************** 

//  #include<stdio.h>
// int main (){
//     int n;
//     scanf("%d",&n);
//     if(n%2!=1){
//         return 0;
//     }
//     if(n>21){
//         return 0;
//     }
//     int line = (n+1)/2+5;
//     int space= line-1;
//     int star= 1;

//    for (int i = 1; i <= line; i++)
//    {
//       for (int j = 0;j < space; j++)
//       {
//         /* code */
//         printf(" ");
//       }
//       for (int j = 0;j < star; j++)
//       {
//         /* code */
//         printf("*");
//       }
//       star=star+2;
//       space--;

//       printf("\n");
      
//    }
//    space = ((line*2)-1-n)/2;
//    for (int i = 1; i <= 5; i++)
//    {
//       for (int j = 0;j < space; j++)
//       {
//         /* code */
//         printf(" ");
//       }
//       for (int j = 0;j < n; j++)
//       {
//         /* code */
//         printf("*");
//       }
//     //   star=star+2;
//     //   space--;

//       printf("\n");
      
//    }
//     return 0;
// }
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t, n;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        // Input the size of the array
        scanf("%d", &n);
        int arr[n], brr[n],crr[n];

        // Input the elements of the array
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
            brr[j]=arr[j];
        }
       
       
       for (int j = 0; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {  
                /* code */
                if(brr[j]>brr[k]){
               int temp = brr[j];
                brr[j]= brr[k];
                 brr[k]=temp;
                }
            }
            
        }

        for (int j = 0; j < n; j++)
        { 
            // brr[j]=arr[j];
            //   printf("%d ",arr[j]);
            /* code */
            
            crr[j]=arr[j]-brr[j];
            // int absValue= 
           int abs_value = abs(crr[j]);
     
            printf("%d ",abs_value);
        }
        
        printf("\n");
    }

    return 0;
}
