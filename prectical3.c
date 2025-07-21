#include<stdio.h>
int main()
{
    float weight,height,BMI;
    printf("enter your weight in kg :");
    scanf("%f",&weight);
    printf("enter your height in meter :");
    scanf("%f",&height);
    BMI = weight/(height*height);
    printf("your BMI is :%f\n",BMI);
    if(BMI<18.5)
    {
        printf("you are under weight");
    }
    else if(BMI>=18.5 | BMI<24.9)
    {
        printf("you are healthy");
    }
    printf("\n   this program is develope by nevil gol,25TCESB9" );
    return 0;
}
