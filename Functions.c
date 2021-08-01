#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include "Functions.h"

int LED_statues;


uint8_t Is_button_pressed() /* Function that generates 0 or 1 randomly */
{
    srand(time(NULL));
    uint8_t y = rand() % 2;

    return (y);
}

void Set_LED(uint8_t x) /* Function that took value from the "Is_button_pressed" and check if it is 1 or 0 */
{
    if (x==1){
        //   strcpy (LED_statues, "ON");
        LED_statues = 1;

    }
    else{
        //  strcpy (LED_statues, "OFF");

        LED_statues = 0;
    }
}

void Control_LED()
{
    uint8_t pressed = Is_button_pressed();
    Set_LED(pressed);
}
