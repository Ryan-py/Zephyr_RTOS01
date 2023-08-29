

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>



#define STACKSIZE 1024
#define THREAD0_PRIORITY 7
#define THREAD1_PRIORITY 7



void thread0(void)
{
	while (1) {
		
		  printk("Hello, I am Thread0 \n");
		  
		  //k_yield();
		
		  k_msleep(500);
		
		  
	}
}

void thread1(void)
{
	while (1) {
		  
		  printk("Hello , I am Thread1\n");
		
		  //k_yield();
		
		  k_msleep(500);
		 
	}
}


K_THREAD_DEFINE(thread0_id, STACKSIZE, thread0, NULL, NULL, NULL,
		THREAD0_PRIORITY, 0, 0);
K_THREAD_DEFINE(thread1_id, STACKSIZE, thread1, NULL, NULL, NULL,
		THREAD1_PRIORITY, 0, 0);