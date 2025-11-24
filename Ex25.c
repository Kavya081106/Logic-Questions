// WAP for following Scenario. 
// Given n rupees and a chocolate price of m for each chocolate, with a wrapper exchange offer of 1 
// chocolate per k wrappers, calculate the total number of chocolates you can eat with n rupees.  


#include <stdio.h>

void main(){
    int chocolates=0,price_per,rupees,wrappers_required,wrapers=0;

    printf("Enter no of rupees:\n");
    scanf("%d", &rupees);

    printf("Enter price per chocolate:\n");
    scanf("%d", &price_per);

    printf("Enter no of wrappers required for one chocolate:\n");
    scanf("%d", &wrappers_required);

    chocolates =chocolates+ ((int)rupees/price_per);

    wrapers = wrapers+chocolates;
    rupees = wrapers%price_per;

    while(wrapers>=wrappers_required){
        int temp = wrapers/wrappers_required;
        chocolates=chocolates+temp;
        wrapers = (wrapers%wrappers_required)+temp;
    }

    printf("No of chocolates are %d and no of wrappers are %d and rupees left is %d", chocolates,wrapers,rupees);


}