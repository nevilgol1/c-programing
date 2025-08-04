#include <stdio.h>

int main(){
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>60){
        printf("you are aligible to open account");
    }
     else if(60>=age>=18){
        printf("you are aligible to sinior sitizen open account");
    }
    else{
            printf("you are not aligible");
    }
    printf("\n this program is done by nevil gol,25TCESB9");
return 0;
}
