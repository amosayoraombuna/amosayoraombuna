#include<stdio.h>
int main(){
    int age;
    float income;
    
    //The user to input their age
    printf("Enter your age:");
    scanf("%d",&age);
    
    //The user to input their income
    printf("Enter your income:");
    scanf("%f",&income);
    
    //To determine if the user will qualify for a loan
    if(age>=21 &income>=21000){printf("Congratulations you qualify for a loan:");
    }
    else{printf("Unfortunately we are unable to offer you a loan at this time:");
    }
    
    return 0;
    }