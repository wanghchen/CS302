#include<stdio.h>
#include <stdlib.h>
int main(void)
{
int pid;
if( (pid = fork()) !=0 ) {
printf("Look at the status of the child process %d\n", pid);
while( getchar() != '\n' );
wait(NULL);
printf("Look again!\n");
while( getchar() != '\n' );
}
return 0;
}

