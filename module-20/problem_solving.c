
// *******************problem 1********************
// #include <stdio.h>

// int main() {
//     float discountRate, afterDiscountPrice, originalPrice;

//     // Prompting user to enter discount rate and after discount price
//     // printf("Enter discount rate (as percentage, e.g., 20 for 20%%): ");
//     scanf("%f", &discountRate);

//     // printf("Enter the price after discount: ");
//     scanf("%f", &afterDiscountPrice);

//     // Calculate the original price
//     originalPrice = afterDiscountPrice / (1 - discountRate / 100);

//     // Print the original price
//     printf("%.2f", originalPrice);
 
//     return 0;
// }



//**************** problem 2*****************

//  #include<stdio.h>
// int main (){
//     long long int a,b,k;
//     scanf("%lld %lld %lld",&a,&b,&k);
//     if(a%k==0 && b%k==0){
//     printf("Both");

//     }else if(a%k==0 && b%k!=0){
        
//         printf("Memo");
//     }
//     else if(a%k!=0 && b%k==0){
        
//         printf("Momo");
//     }
//     else if(a%k!=0 && b%k!=0){
        
//         printf("No One");
//     }
//     return 0;
// }


//********************* problem number3 *******************
// #include <stdio.h>

// int main() {
//     int testCases;
//     int height, width;

//     scanf("%d", &testCases);

//     for (int i = 0; i < testCases; i++) {
      
//        scanf("%d %d", &height, &width);
//        if(height == width){
//         printf("Square");
//        }if(height != width){
//         printf("Rectangle");
//        }
//        printf("\n");
//     }
    

//     return 0;
// }

//********************* problem number4 *******************

//  #include<stdio.h>
// int main (){
//    long long int n;
//     scanf("%lld",&n);
//    long long int k;
//     scanf("%lld",&k);
//    long long int arr[n];
//     for (int i = 0; i < n; i++)
//     {
      
//         scanf("%lld",&arr[i]);
//     }
   
//     // int sortArray[n];
//     for (int i = 0; i < n-1; i++)
//     {
//        for (long long int j =i+1 ; j < n; j++)
//        {
//         /* code */
//         if(arr[i]<arr[j]){
//             long long int temp = arr[i];
//             arr[i]= arr[j];
//             arr[j]= temp;
//         }
//        }
       
//     }
 
//    long long int sum=0;
//     for (long long int i = 0; i < k; i++)
//     {
//         /* code */
//         sum=arr[i]+sum;
//     }

//     if(sum<0){
//         printf("0");
//     }else{
//            printf("%lld",sum);
//     }
   
    
    
    
//     return 0;
// }
//********************* problem number4 *******************

// #include <stdio.h>

// int main() {
//     int size, maxSum;
//     scanf("%d %d", &size, &maxSum);

//     long long arr[size];

//     for (int i = 0; i < size; i++) {
//         scanf("%lld", &arr[i]);
//     }

//     for (int i = 0; i < size - 1; i++) {
//         for (int j = i + 1; j < size; j++) {
//             if (arr[i] < arr[j]) {
//                 long long temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     long long sum = 0;
//     for (int i = 0; i < maxSum && arr[i] > 0; i++) {
//         sum += arr[i];
//     }

//     printf("%lld\n", sum);

//     return 0;
// }
//********************* problem number5 *******************

//  #include<stdio.h>
// int main (){
//     int n ;
//     scanf("%d",&n);
//     int arr[n];
//     // input
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//             //   output
//     for (int i = 0; i < n-1; i++)
//     {
     
//         for (int j = i+1; j < n; j++)
//         {
        
//             if(arr[i]>arr[j]){
//             int temp = arr[i];
//                arr[i]= arr[j];
//                arr[j]=temp;

//             }
//         }
        
//     }
//     int count =0;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         if(arr[i]==arr[0]){
//             count++;
//         }
//     }
//     if(count%2==0){
//         printf("Unlucky");
//     }else{
//          printf("Lucky");
//     }
//     //   printf("%d",count);
    
    
//     return 0;
// }