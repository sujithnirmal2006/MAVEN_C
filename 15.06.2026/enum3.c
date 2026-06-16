//Output:
//Accepts a traffic signal value from the user and displays the corresponding action:
//STOP for RED, GET READY for ORANGE, and GO for GREEN.
//Displays "INVALID INPUT" for values outside the defined enum range.

//Learning:
//Learned how to use enums to represent fixed states, take user input,
//type-cast integers to enum values, and make decisions using conditional statements.

//Key Concept:
//RED=0, ORANGE=1, GREEN=2 by default.
//Enums improve code readability by replacing numeric constants with meaningful names.

#include<stdio.h>
enum TrafficSignal
{
    RED,
    ORANGE,
    GREEN
};
int main(){
    int input;
    enum TrafficSignal signal ;
    printf("Enter the signal : 0=RED,1=ORANGE,2=GREEN");
    scanf("%d",&input);

    signal = (enum TrafficSignal)input;
    
    if(signal == RED)
        printf("STOP\n");
    else if(signal == ORANGE)
        printf("GET READY\n");
     else if(signal == GREEN)
        printf("GO\n");
    else 
    printf("INVALID INPUT");
    
    }
