/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "math.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

result *
mathplus_1(numbers *argp, CLIENT *clnt)
{
	static result clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, MATHPLUS,
		(xdrproc_t) xdr_numbers, (caddr_t) argp,
		(xdrproc_t) xdr_result, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

result *
mathminus_1(numbers *argp, CLIENT *clnt)
{
	static result clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, MATHMINUS,
		(xdrproc_t) xdr_numbers, (caddr_t) argp,
		(xdrproc_t) xdr_result, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

result *
mathtimes_1(numbers *argp, CLIENT *clnt)
{
	static result clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, MATHTIMES,
		(xdrproc_t) xdr_numbers, (caddr_t) argp,
		(xdrproc_t) xdr_result, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

result *
mathdiv_1(numbers *argp, CLIENT *clnt)
{
	static result clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, MATHDIV,
		(xdrproc_t) xdr_numbers, (caddr_t) argp,
		(xdrproc_t) xdr_result, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
