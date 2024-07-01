 #include<stdio.h>
 #include<string.h>

int is_palindrome(char n[1001]) {
    int found = 1;
        // printf("%s",n);
 int length = strlen(n);
 for (int i = 0; i < length / 2; i++)
 {
    if (n[i] != n[length - 1 - i]) {
            found =0;
        }
 }
 

return found;
}

int main (){
    char n[1001];
    scanf("%s",&n);
    int checkValue =is_palindrome(n);
//    printf("%d",checkValue);
   if (checkValue==1)
   {
    /* code */
    printf("Palindrome\n");
   }else{
    printf("Not Palindrome\n");
   }
   
    return 0;
}