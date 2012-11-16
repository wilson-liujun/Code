#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

// Github Test 2
int main(void)
{
   int i;
   for(i=0; i<2; i++){
      fork();
      //注意：下面的printf有“\n”
      printf("ppid=%d, pid=%d, i=%d \n", getppid(), getpid(), i);
	fflush(stdout);
   }
   sleep(1); //让进程停留十秒，这样我们可以用pstree查看一下进程树
   return 0;
}