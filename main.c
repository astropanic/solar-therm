#include <avr/io.h>
#include "lcd-routines.h"
int main(void)
{
  lcd_init();
  lcd_data( 'T' );
  lcd_data( 'e' );
  lcd_data( 's' );
  lcd_data( 't' );
  lcd_setcursor( 0, 2 );
  lcd_string("Hello World!");
  while(1)
  {
  }
  return 0;
}
