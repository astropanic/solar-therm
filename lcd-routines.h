#ifndef LCD_ROUTINES_H
#define LCD_ROUTINES_H

#ifndef F_CPU
#define F_CPU 3686400
#endif

#define LCD_PORT      PORTD
#define LCD_DDR       DDRD
#define LCD_DB        PD0
#define LCD_RS        PD4
#define LCD_EN        PD5

#define LCD_BOOTUP_MS           15
#define LCD_ENABLE_US           20
#define LCD_WRITEDATA_US        46
#define LCD_COMMAND_US          42

#define LCD_SOFT_RESET_MS1      5
#define LCD_SOFT_RESET_MS2      1
#define LCD_SOFT_RESET_MS3      1
#define LCD_SET_4BITMODE_MS     5

#define LCD_CLEAR_DISPLAY_MS    2
#define LCD_CURSOR_HOME_MS      2

#define LCD_DDADR_LINE1         0x00
#define LCD_DDADR_LINE2         0x40
#define LCD_DDADR_LINE3         0x10
#define LCD_DDADR_LINE4         0x50

void lcd_init( void );
void lcd_clear( void );
void lcd_home( void );
void lcd_setcursor( uint8_t column, uint8_t row );
void lcd_data( uint8_t data );
void lcd_string( const char *data );
void lcd_generatechar( uint8_t code, const uint8_t *data );
void lcd_command( uint8_t data );

#define LCD_CLEAR_DISPLAY       0x01
#define LCD_CURSOR_HOME         0x02
#define LCD_SET_ENTRY           0x04
#define LCD_ENTRY_DECREASE      0x00
#define LCD_ENTRY_INCREASE      0x02
#define LCD_ENTRY_NOSHIFT       0x00
#define LCD_ENTRY_SHIFT         0x01
#define LCD_SET_DISPLAY         0x08
#define LCD_DISPLAY_OFF         0x00
#define LCD_DISPLAY_ON          0x04
#define LCD_CURSOR_OFF          0x00
#define LCD_CURSOR_ON           0x02
#define LCD_BLINKING_OFF        0x00
#define LCD_BLINKING_ON         0x01
#define LCD_SET_SHIFT           0x10
#define LCD_CURSOR_MOVE         0x00
#define LCD_DISPLAY_SHIFT       0x08
#define LCD_SHIFT_LEFT          0x00
#define LCD_SHIFT_RIGHT         0x04
#define LCD_SET_FUNCTION        0x20
#define LCD_FUNCTION_4BIT       0x00
#define LCD_FUNCTION_8BIT       0x10
#define LCD_FUNCTION_1LINE      0x00
#define LCD_FUNCTION_2LINE      0x08
#define LCD_FUNCTION_5X7        0x00
#define LCD_FUNCTION_5X10       0x04
#define LCD_SOFT_RESET          0x30
#define LCD_SET_CGADR           0x40
#define LCD_GC_CHAR0            0
#define LCD_GC_CHAR1            1
#define LCD_GC_CHAR2            2
#define LCD_GC_CHAR3            3
#define LCD_GC_CHAR4            4
#define LCD_GC_CHAR5            5
#define LCD_GC_CHAR6            6
#define LCD_GC_CHAR7            7
#define LCD_SET_DDADR           0x80
#endif
