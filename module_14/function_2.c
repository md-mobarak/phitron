 #include<stdio.h>

int sum (){

    int x,y;
    scanf("%d %d",&x,&y);
    int result = x+y;
    return result;
}

int main (){
    int result = sum();
    
    printf("%d ",result);
    
    return 0;
}