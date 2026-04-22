#include<stdio.h>
#include<string.h>
int main(){
    char string[100]={'\0'};
    printf("Enter cipher text : ");
    fgets(string, 100, stdin);
    
    for (int i=0; i<=99; i++){
        if (string[i]>64 && string[i]<91){
            string[i]+=32;
        }
    }
    
    for (int i=1; i<=25; i++){
        printf("\t%d . ",i);
        for (int j=0; j<=5; j++){
            if(string[j]==32){
                printf("%c",string[j]);
            }
            else{
                int temp=string[j]+i;
                if(temp>122){temp-=26;}
                printf("%c",temp);
            }
        }
        printf("\n");
    }
    
    int key=0;
    
    printf("\nSelect most appropriate key from above list and enter it : ");
    scanf("%d",&key);
    
    printf("\n\nThe plain text is:\v");
    
    for (int i=0; i<=99 && string[i]!=0; i++){
        if(string[i]==32){
            printf("%c",string[i]);
        }
        else{
            int temp=string[i]+key;
            if(temp>122){temp-=26;}
            printf("%c",temp);
        }
    }
    
    
}
