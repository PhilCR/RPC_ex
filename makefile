CC = gcc
CFLAGS = -g -DRPC_SVC_FG
RPCGEN_FLAG = -C

all:	math_client math_server

# the executables: math_client and math_server

math_client: math_client.o math_clnt.o math_xdr.o
	$(CC) -o math_client math_client.o math_clnt.o math_xdr.o

math_server: math_server.o math_svc.o  math_xdr.o
	$(CC) -o math_server math_server.o math_svc.o math_xdr.o

# object files for the executables 

math_server.o: math_server.c math.h
	$(CC) $(CFLAGS) -c math_server.c

math_client.o: math_client.c math.h
	$(CC) $(CFLAGS) -c math_client.c

# compile files generated by rpcgen

math_svc.o: math_svc.c math.h
	$(CC) $(CFLAGS) -c math_svc.c

math_clnt.o: math_clnt.c math.h
	$(CC) $(CFLAGS) -c math_clnt.c

math_xdr.o: math_xdr.c math.h
	$(CC) $(CFLAGS) -c math_xdr.c

# math.x produces math.h, math_clnt.c, math_svc.c, and math_xdr.c
# make sure we regenerate them if our interface (math.x) changes

math_clnt.c math_svc.c math_xdr.c math.h:	math.x
	rpcgen $(RPCGEN_FLAG) math.x

clean:
	rm -f math_client math_client.o math_server math_server.o math_clnt.* math_svc.* math.h