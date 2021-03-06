/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "math.h"
#include <stdlib.h>


void
mathprog_1( char* host, numbers number)
{
	CLIENT *clnt;

	result  *result_1;
	result  *result_2;
	result  *result_3;
	result  *result_4;

	numbers  math_arg = number;

	clnt = clnt_create(host, MATHPROG, MATHVERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror(host);
		exit(1);
	}

	result_1 = mathplus_1(&math_arg, clnt);
	if (result_1 == NULL) {
		clnt_perror(clnt, "call failed:");
	}

	printf("Soma de %.2f e %.2f: %.2f\n", math_arg.a, math_arg.b, *result_1);

	result_2 = mathminus_1(&math_arg, clnt);
	if (result_2 == NULL) {
		clnt_perror(clnt, "call failed:");
	}

	printf("Subtracao de %.2f e %.2f: %.2f\n",math_arg.a, math_arg.b, *result_2);

	result_3 = mathtimes_1(&math_arg, clnt);
	if (result_3 == NULL) {
		clnt_perror(clnt, "call failed:");
	}

	printf("Multiplicacao de %.2f e %.2f: %.2f\n", math_arg.a, math_arg.b, *result_3);

	result_4 = mathdiv_1(&math_arg, clnt);
	if (result_4 == NULL) {
		clnt_perror(clnt, "call failed:");
	}

	printf("Divisao de %.2f por %.2f: %.2f\n", math_arg.a, math_arg.b, *result_4);

	clnt_destroy( clnt );
}


main( int argc, char* argv[] )
{
	char *host;
	numbers number;

	if(argc < 3) {
		printf("usage: %s server_host\n", argv[0]);
		exit(1);
	}

	host = argv[1];
	number.a = atof(argv[2]);
	number.b = atof(argv[3]);

	mathprog_1( host , number );
}
