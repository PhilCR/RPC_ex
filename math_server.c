/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "math.h"

result * mathplus_1_svc(numbers *argp, struct svc_req *rqstp)
{

	static result answer;

	answer = argp->a + argp->b;

	return(&answer);
}

result * mathminus_1_svc(numbers *argp, struct svc_req *rqstp)
{

	static result  answer;

	answer = argp->a - argp->b;

	return(&answer);
}

result * mathtimes_1_svc(numbers *argp, struct svc_req *rqstp)
{

	static result answer;

	answer = argp->a * argp->b;

	return(&answer);
}

result * mathdiv_1_svc(numbers *argp, struct svc_req *rqstp)
{

	static result answer;

	if ( argp->b != 0 )
		answer = argp->a / argp->b;

	return(&answer);
}
