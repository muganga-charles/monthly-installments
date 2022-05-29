#include <stdio.h>
#include <stdlib.h>
float monthly_loan_installments(int principle,float rate,int time){//function declaration
float innstallment=((principle*(rate)*time));
return innstallment;}//function definition

float monthly(int payment,int number_of_students,int time){
int month=payment*number_of_students*time;
return month;//function definition
}
int main()//main function
{
float simple_intrest=monthly_loan_installments(3000000,0.04,24);//function call

float total_expectation=simple_intrest+3000000;

float installment=total_expectation/24;

    printf("monthly loan installments:%.2f\n",installment);//printing the result of the loan installment
    printf("every month it expects:%.2f\n",monthly(installment,47,1));//printing the result of the expectation after a month
    printf("every year it expects:%.2f\n",monthly(installment,47,12));//printing the result of the expectation after one year
    printf("every 2 year it expects:%.2f\n",monthly(installment,47,24));//printing the result of the expectation after two years
    printf(" it expects profit of:%.2f\n",(simple_intrest*47));//printing the result of profit
    return 0;
}
