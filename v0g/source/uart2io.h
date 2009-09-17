/*
 * This file is part of the Bus Pirate project (buspirate.com).
 *
 * Originally written by hackaday.com <legal@hackaday.com>
 *
 * To the extent possible under law, hackaday.com <legal@hackaday.com> has
 * waived all copyright and related or neighboring rights to Bus Pirate. This
 * work is published from United States.
 *
 * For details see: http://creativecommons.org/publicdomain/zero/1.0/.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */
void UART2Setup(unsigned int brg, unsigned char normalOutput, unsigned char rxp, unsigned char dbpl, unsigned char sb );
void UART2Enable(void);
void UART2Disable(void);
void UART2TX(unsigned char c);
unsigned char UART2RXRdy(void);
unsigned char UART2RX(void);
