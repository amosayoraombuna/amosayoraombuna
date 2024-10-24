#include<stdio.h>
int main(){
    int CustomerID,UnitConsumed;
    char CustomerName[7];
    float chargesperunit,totalbill,surcharge;
    
    //User to input
    printf("Enter CustomerID:");
    scanf("%d",&CustomerID);
    
    printf("Enter CustomerName:");
    scanf("%s",&CustomerName);
    
    printf("Enter UnitConsumed:");
    scanf("%d",&UnitConsumed);
    
    
    if(UnitConsumed<=199) {
    chargesperunit=1.20 ;}
    
    else if(UnitConsumed>=200 & UnitConsumed<400) {
    chargesperunit=1.50; }
    
    else if(UnitConsumed>=400 & UnitConsumed<600) {
    chargesperunit=1.80; }
    
    else{
    chargesperunit=2.00; }
    
    
    //Calculate the total bill
    totalbill= UnitConsumed*chargesperunit;
    
    
    //bill exceeds ksh400 surcharge of 15% is added
    if(totalbill>400) {
    surcharge=totalbill*0.15; }
    
    
    //The minimum bill is Ksh100
    if(totalbill>100) {
    totalbill=100; }
    
    
    //Display of the output
    printf("CustomerID:%d\n",CustomerID);
    printf("CustomerName:%s\n",CustomerName);
    printf("UnitConsumed:%d\n",UnitConsumed);
    printf("chargesperunit:ksh %f\n",chargesperunit);
    printf("TotalAmounttoPay:ksh %f\n",totalbill);
    
    
    
    return 0;
    
    }
       
       
    
       



    