#include <stdio.h>
#include "platform.h"

int fibonacci(int n, int* buf);

#define FIB_COUNT 16

int main()
{
    init_platform();

    //xil_printf("Hello World\n\r");
    int buffer[FIB_COUNT];
    fibonacci(FIB_COUNT,buffer);

    int i;
    for(i=0;i<FIB_COUNT;i++){
    	xil_printf("%d\n\r",buffer[i]);
    }

    cleanup_platform();

    return 0;
}


int fibonacci(int n, int* buf){
  buf[0] = 1;
  buf[1] = 1;
  
  int i;
  for(i=2;i<n;i++){
    buf[i] = buf[i-1] + buf[i-2];
  }
  return 0;
}
