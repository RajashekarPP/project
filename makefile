project:main.o client.o server.o ipcfifo.o ipcm.o ipcpipe.o ipcsocket.o speedtest.o ipcshm.o
	gcc main.o  client.o server.o ipcfifo.o ipcm.o ipcshm.o ipcpipe.o ipcsocket.o speedtest.o -o project
main.o:main.c headers.h
	gcc -c main.c -o  main.o
client.o:client.c headers.h
	gcc -c client.c -o  client.o
server.o:server.c headers.h
	gcc -c server.c -o  server.o
ipcfifo.o:ipcfifo.c headers.h
	gcc -c ipcfifo.c -o ipcfifo.o
ipcm.o:ipcm.c headers.h
	gcc -c ipcm.c -o ipcm.o
ipcshm.o:ipcshm.c headers.h  
	gcc -c ipcshm.c -o ipcshm.o
ipcpipe.o:ipcpipe.c headers.h
	gcc -c ipcpipe.c -o ipcpipe.o
ipcsocket.o:ipcsocket.c headers.h
	gcc -c ipcsocket.c -o ipcsocket.o
speedtest.o:speedtest.c headers.h
	gcc -c speedtest.c -o speedtest.o

