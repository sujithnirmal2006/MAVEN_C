/* Scenario: Banking Application using #ifdef and #ifndef
 * Developers can enable debug logs
 * Customers should not see debug logs in the production version
 * */

#include <stdio.h>

#define DEBUG
//#define PRODUCTION

int main()
{
    printf("Welcome to ICICI Bank\n");

    //Conditional Compilation
    #ifdef DEBUG
        printf("DEBUG : Database connection established\n");
    #else
        printf("DEBUG not enabled\n");
    #endif

    #ifndef PRODUCTION
        printf("Testing Mode : Transactions are enabled\n");
    #endif

    printf("Transaction completed successfully\n");

    return 0;
}
