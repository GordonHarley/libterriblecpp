

#include "stdio.h"

class RageFace
{
public:
	RageFace(unsigned n) : _n(n) { };

	~RageFace() { };

	unsigned getCount(void) { return _n; }

	void print(void)
	{
		for (unsigned i = 0; i < _n; ++i)
			printf("ლ(ಠ益ಠლ)\n");
	}

private:
	unsigned _n;
};

RageFace operator""_ლಠ益ಠლ(unsigned long long n)
{ 
	return RageFace((unsigned)n);
}


int main(int argc, char** argv)
{
	RageFace r1 = 1_ლಠ益ಠლ;
	RageFace r10 = 10_ლಠ益ಠლ;

	printf("Printing r1 = 1_ლ(ಠ益ಠლ): \n");
	r1.print();
	printf("\n");
	
	printf("Printing r10 = 10_ლ(ಠ益ಠლ): \n");
	r10.print();
	
	return 0;
}