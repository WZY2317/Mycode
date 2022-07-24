#include<stdio.h>
#include<signal.h>
#include<unistd.h>
int main()
{
  sigset_t iset,oset;
  sigemptyset(&iset);
  sigemptyset(&oset);
  sigaddset(&iset,2);
  sigaddset(&iset,40);
  sigprocmask(SIG_SETMASK,&iset,NULL);
    while(1)
    {
      printf("等待发送信号\n");
      sleep(1);
    }
}
