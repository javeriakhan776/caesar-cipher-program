#include<stdio.h>
#include<string.h>
int main(){
    char string[50]={'\0'};
    printf("Enter code : ");
    scanf("%s",&string);
    
    for (int i=0; i<=50; i++){
        if (string[i]>64 && string[i]<91){
            string[i]+=32;
        }
    }
    
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
