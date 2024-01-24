#include <stdio.h>
void PrintMenu(void) {
    printf("**********************\n"
           "      -- Menu --\n"
           "a) artichoke\n"
           "b) beet\n"
           "c) carrot\n"
           "q) quit\n"
           "*********************\n"
           );
}

int main(void) {
    char ch;
    double totalWeight = 0, totalCartage = 0, 
        totalPackCost = 0, orderCost, temp;
    double artichokeWeight, beetWeight, carrotWeight, totalCost;
    PrintMenu();
    while (scanf("%c", &ch) != EOF) {
        if (ch == 'q') break;
        if (ch == '\n') continue;
        switch (ch) {
            case 'a': printf("Enter need weight of artichoke:\n");
                      scanf("%lf", &temp);
                      artichokeWeight += temp;
                      PrintMenu();
                      break;
            case 'b': printf("Enter need weight of beet:\n");
                      scanf("%lf", &temp);
                      beetWeight += temp;
                      PrintMenu();
                      break;
                      
            case 'c': printf("Enter need weight of carrot:\n");
                      scanf("%lf", &temp);
                      carrotWeight += temp;
                      PrintMenu();
                      break;
            default: PrintMenu();
                     printf("oops! enter error! try agin:\n");
        }
    }
        printf("artichoke $2.05 per pound\n"
               "beet      $1.15 per pound\n"
               "carrot    $1.09 per pound\n"
               );
        totalWeight = carrotWeight + beetWeight + artichokeWeight;
        orderCost = 2.05 * artichokeWeight + 1.15 * beetWeight + 1.09 * carrotWeight;
        printf("order cost   : %.2lf\n", orderCost);
        printf("total weight : %.2lf\n", totalWeight);
        printf("total cost   : %.2lf\n", totalCost);
    return 0;
}


// **********************
//       -- Menu --
// a) artichoke
// b) beet
// c) carrot
// q) quit
// *********************