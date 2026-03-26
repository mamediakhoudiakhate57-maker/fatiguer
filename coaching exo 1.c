#include <stdio.h>
int main(){
    int n,i;
    do{
        printf("saisir un entier:");
        scanf("%d" , &n);
    }while(n<0);
    for(i=n;i<=10;i++);

    printf("les 10 entiers suivants sont :%d\n",n);

return 0;
}
