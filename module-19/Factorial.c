 #include<stdio.h>

long long fun (long long int n){
    
if(n==0) return 1;
 long long int ans=   fun(n-1);
      return n* ans;
}


int main (){
    long long int n;
    scanf("%lld",&n);
   long long int result= fun(n);
   printf("%lld",result);
    return 0;
}