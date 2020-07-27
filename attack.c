#include<stdio.h>
#include<stdlib.h>


static void main() __attribute__((constructor));

void malicious() {

system("sleep 20");

}

