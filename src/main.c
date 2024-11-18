#include <stdint.h>
#include "stm32f103c8t6.h"

void setup() {
    //APB2ENR Enable
    RCC_APB2ENR |=  (0x1 << 4);

    /*PC13*/
    GPIOC->CRH  &= ~(0x1 << 20);
    GPIOC->CRH  |=  (0x1 << 20);

    /*PC14*/
    GPIOC->CRH    &= ~(0xF << 24);
    GPIOC->CRH    |=  (0x1 << 24);
}

void loop(){
    for(int i=1; i<300000; i++){
        //Built-in LED ON / External LED OFF
        GPIOC->BSRR = (0x1 << 13);
        GPIOC->BSRR = (0x1 << 14) << 16;
    }
    for(int i=1; i<300000; i++){
        //Built-in LED OFF / External LED ON
        GPIOC->BSRR = (0x1 << 13) << 16;
        GPIOC->BSRR = (0x1 << 14);
    }
}

int main(){
    setup();

    while(1){
        loop();
    }

    return 0;
}
