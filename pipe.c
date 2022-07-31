/*pipe() System call

Syntax in C languagei (FIFO) :

int pipe(int fileDescriptor[2]);

Parameters :
fileDescriptor[0] will be for the read end of pipe.
fileDescriptor[1] will be for the write end of pipe.
returns : 0 on success, -1 on error.
*/


#include <stdio.h>
#include <unistd.h> /*Unix Standard*/

#define messageSize 16
#define pipeRead 0 
#define pipeWrite 1

char message[3][16] = {"abc", "123", "xyz"};

int main(int argumentCount, char ** argumentValue) {

	char * buffer[messageSize];

	int myPipe[2], loop;

	pipe(myPipe);

	for (loop = 0; loop <= 2; loop++) {

		write(myPipe[pipeWrite], message[loop], messageSize);

	}

	for (loop = 1; loop <= 3; loop++) {

		read(myPipe[pipeRead], buffer[messageSize], messageSize);	

		printf("%s\n", buffer[messageSize]);

	}

}
