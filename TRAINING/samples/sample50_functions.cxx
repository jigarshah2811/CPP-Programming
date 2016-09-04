        // sample50_functions

	#include <sample50.h>

		ov::ov() { a=0; b=0; }
		ov::ov(long int x,long int y) { a=x; b=y; }
		void ov::get_a_b(long int &x,long int&y) { x=a; y=b; }

	void ov::operator++(int)
	{
		a++;
		b++;
	}
