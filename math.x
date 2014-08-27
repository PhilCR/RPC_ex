struct numbers{ /* input arguments */
	float a;
	float b;
};

typedef float result; /* output result */

program MATHPROG{
	version MATHVERS{
		result MATHPLUS(numbers) = 1; /* PLUS procedure */
		result MATHMINUS(numbers) = 2; /* MINUS procedure */
		result MATHTIMES(numbers) = 3; /* TIMES procedure */
		result MATHDIV(numbers) = 4; /* DIV procedure */
	} = 1;
} = 0x31253100;