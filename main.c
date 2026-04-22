#include<stdio.h>
#include<string.h>
int main(){
    char string[50]={'\0'};
    printf("Enter code : ");
    scanf("%s",&string);
    for (int i=1; i<=25; i++){
        printf("%d . ",i);
        for (int j=0; j<=5; j++){
            int temp=string[j]+i;
            if(temp>122){temp-=26;}
            printf("%c",temp);
        }
        printf("\n");
    }
}
