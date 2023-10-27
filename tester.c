#include <string.h>
#include <stdio.h>

int main() {
    void *src = NULL;
    void *dst = NULL;
    size_t n = 0;
    
    memcpy(dst, src, n);
    
    printf("This message may or may not be reached.\n");
    
    return 0;
}