 #include<stdio.h>
 void hello (){
    printf("hello\n");
    world();
 }

 void world (){
    printf("World\n");
 }


int main (){
       hello();

      printf("please end the function\n");
    return 0;
}