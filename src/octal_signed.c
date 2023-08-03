#include <stdio.h>

int main(){

	int a = -5790;

	// Nie można printować liczb ósemkowych i szesnastkowych, które są ujemne.
	// Poniższe printefy wydrukują ogromne liczby, bo traktują bit znaku
	// jako część liczby.
	printf("dec = %d\n", a);
	printf("oct = %o\n", a);
	printf("hex = %x\n", a);

	return 0;
}
