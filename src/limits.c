#include <stdio.h>
#include <limits.h>



int main(){
	printf("Chars: \n");
	printf("CHAR_BIT:   %5d\n", CHAR_BIT);
	printf("SCHAR_MIN:  %5d\n", SCHAR_MIN);
	printf("SCHAR_MAX:  %5d\n", SCHAR_MAX);
	printf("UCHAR_MAX:  %5d\n", UCHAR_MAX);
	printf("CHAR_MIN:   %5d\n", CHAR_MIN);
	printf("CHAR_MAX:   %5d\n", CHAR_MAX);
	printf("MB_LEN_MAX: %5d\n", MB_LEN_MAX);

	printf("\n");

	printf("Integers: \n");
	printf("SHRT_MIN:    %5d\n", SHRT_MIN);
	printf("SHRT_MAX:    %5d\n", SHRT_MAX);
	printf("USHRT_MAX:   %5d\n", USHRT_MAX);
	printf("INT_MIN:     %5d\n", INT_MIN);
	printf("INT_MAX:     %5d\n", INT_MAX);
	printf("UINT_MAX:    %5ld\n", UINT_MAX);
	printf("LONG_MIN:    %5ld\n", LONG_MIN);
	printf("LONG_MAX:    %5ld\n", LONG_MAX);
	printf("ULONG_MAX:   %5ld\n", ULONG_MAX);
	printf("LLONG_MIN:   %5ld\n", LLONG_MIN);
	printf("LLONG_MAX:   %5ld\n", LLONG_MAX);
	printf("ULLONG_MAX:  %5lld\n", ULLONG_MAX);
	

	return 0;
}
