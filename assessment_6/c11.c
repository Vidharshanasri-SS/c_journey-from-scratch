// to coun the number of digits in the entered number 
# include <stdio.h>
int main(){
    int a;
    printf("enter the number :");
    scanf("%d",&a);
    for(int i=a;i=!0;i/=10){
        printf("%d\n",i);
    }
    return 0;
}