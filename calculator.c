#include<stdio.h>
#include<stdlib.h>

//Program : Calculator machine

int main (){
    int options;
    int active = 1;

    while(active == 1){
    printf("\n----------- Welcome the Calculator -----------\n\nSelect the operation :");
    printf("\n1- Sum\n2- Subtraction\n3- Multiplication\n4- Division\nEnter the option : ");
    scanf("%d", &options);

if(options == 1){
    float sum1;
    float sum2;
    printf("\n-------- S U M --------\n");
    printf("Enter the first number: ");
    scanf("%f", &sum1);
    printf("Enter the Second number: ");
    scanf("%f", &sum2);
    float sum = (sum1+sum2);
    printf("Result = %.2f", sum);
    printf("\nYou want quit? Home 1/ Quit 0 : ");
    scanf("%d", &active);
    }
if(options == 2){
    float sub1;
    float sub2;
    printf("\n-------- S U B --------\n");
    printf("Enter the first number: ");
    scanf("%f", &sub1);
    printf("Enter the second: ");
    scanf("%f", &sub2);

    float sub = (sub1-sub2);
    printf("Result = %.2f", sub);
    printf("\nYou want quit? Home 1/ Quit 0 : ");
    scanf("%d", &active);
}
if(options == 3){
    float mul1;
    float mul2;
    printf("\n-------- M U L--------\n");
    printf("Enter the first number: ");
    scanf("%f", &mul1);
    printf("Enter the second: ");
    scanf("%f", &mul2);

    float mul = (mul1*mul2);
    printf("Result = %.2f", mul);
    printf("\nYou want quit? Home 1/ Quit 0 : ");
    scanf("%d", &active);





}
if(options == 4){
    float div1;
    float div2;
    printf("\n-------- S U B --------\n");
    printf("Enter the first number: ");
    scanf("%f", &div1);
    printf("Enter the second: ");
    scanf("%f", &div2);

    float div = (div1/div2);
    printf("Result = %.0f", div);
    printf("\nYou want quit? Home 1/ Quit 0 : ");
    scanf("%d", &active);


}
    }




}
