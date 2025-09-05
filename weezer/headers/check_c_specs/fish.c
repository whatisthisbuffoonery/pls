#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>
#include <stdint.h>
#include <inttypes.h>
#include <errno.h>

void	answer(int a)
{
	if (a)
		printf("yes\n");
	else
		printf("no\n");
}

int	main(void)
{
	printf("This function: %s\n", __func__);
	printf("This file: %s\n", __FILE__);
	printf("This line: %d\n", __LINE__);
	printf("Compiled on: %s %s\n", __DATE__, __TIME__);
	printf("C Version: %ld\n\n", __STDC_VERSION__);

	printf("Is this a hosted c implementation that don't belong on embedded systems? ");
	answer(__STDC_HOSTED__);
	printf("Does the compiler think it is an official copy? ");
	answer(__STDC__);

	printf("\n\nform:\n");
	printf("__STDC_ISO_10646__? ");
	answer(__STDC_ISO_10646__);
	printf("__STDC_MB_MIGHT_NEQ_WC__? ");
	answer(__STDC_MB_MIGHT_NEQ_WC__);
	printf("__STDC_UTF_16__? ");
	answer(__STDC_UTF_16__);
	printf("__STDC_UTF_32__? ");
	answer(__STDC_UTF_32__);
	printf("__STDC_ANALYZABLE__? ");
	answer(__STDC_ANALYZABLE__);
	printf("__STDC_IEC_559__? ");
	answer(__STDC_IEC_559__);
	printf("__STDC_IEC_559_COMPLEX__? ");
	answer(__STDC_IEC_559_COMPLEX__);
	printf("__STDC_LIB_EXT1__? ");
	answer(__STDC_LIB_EXT1__);
	printf("__STDC_NO_ATOMICS__? ");
	answer(__STDC_NO_ATOMICS__);
	printf("__STDC_NO_COMPLEX__? ");
	answer(__STDC_NO_COMPLEX__);
	printf("__STDC_NO_THREADS__? ");
	answer(__STDC_NO_THREADS__);
	printf("__STDC_NO_VLA__? ");
	answer(__STDC_NO_VLA__);
}
