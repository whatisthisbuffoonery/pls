#include <signal.h>







//lookup intenable() on page 170 or smt







/* These are function that do useful work. */
extern void	do_timer_things(void);
extern void	do_irq0_things(void);
/* Be sure to declare any variables reference by an ISR as volatile
*/
volatile int	timer_expired;
volatile int	irq0_occurred;
/* Be sure to have the correct prototype for an ISR */
void	timer_handler(int signal)
{
	timer_expired = 1;
}
void	irq0_handler(int signal)
{
	irq0_occurred = 1;
}
main()
{
/* Set timer expired to zero at the beginning */
	timer_expired = 0;
	irq0_occurred = 0;
/* Set up the routines to respond to interrupts */
	interrupt(SIG_IRQ0, irq0_handler);
	interrupt(SIG_TMZ, timer_handler);
/* Set up the timer */
	timer_set((unsigned int)10000, (unsigned int)10000);
	timer_on();
/* Loop continuously and respond to interrupts */
	while(1)
	{
		idle(); /* Return from this function after an interrupt */
/* If the timer has expired, clear flag and do something*/
		if( timer_expired )
		{
			timer_expired = 0;
			do_timer_things();
		}
/* If irq0 has occurred, clear flag and do something*/
		if( irq0_occurred )
		{
			irq0_occurred = 0;
			do_irq0_things();
		}
	}
}
