
#include <avr/io.h>
#include <util/delay.h>

int main()
{
    DDRA = 0xFF;
    PORTA = 0;

    uint8_t counter = 0;
    while ( true )
    {
        PORTA = ++counter;
        _delay_ms(1000);
    }
}
