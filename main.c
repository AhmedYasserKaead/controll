#include <stdio.h>
#include "Functions.h"

int LED_statues;


int main()
{
    Control_LED();

    printf("LED_Statues is ");
    if (LED_statues) {
        printf("ON");
    }
    else {
        printf("OFF");
    }

}
