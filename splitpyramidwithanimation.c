#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
void *runner();
void main()
{
    pthread_t tid;//thread id
    int ret;//storing the return value
    ret=pthread_create(&tid,NULL,runner,0);//thread creation
    if(ret==-1)
    {
        printf("\n thread is not created ");
        exit(1);
        
    }
    pthread_join(tid,0);
    
}
void *runner()
{
    int s=7;//number of spaces to be printed
    int i,j;//loop counters
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=s;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        sleep(1);
        printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        sleep(1);
        printf("\n");
        s--;
    }
    pthread_exit(0);
    
}