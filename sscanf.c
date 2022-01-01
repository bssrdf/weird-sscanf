#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <termios.h>
#include <fcntl.h>

 
#define BUFLEN 20
int main(int argc , char *argv[]) {
    // if comment 2 lines below, crash with segfault
	// unless key is declared as char key[BUFLEN] 
   // int sock;
   // struct sockaddr_in server;
    // or comment the line below, crash with segfault
    unsigned char buf[BUFLEN + 1];
    char read_buf[BUFLEN];
    int size, count;
    FILE *f;
    char *key;
    //char key[BUFLEN];
    
    f = fopen("config", "r");
    while (fgets(read_buf, BUFLEN, f) != NULL){
        sscanf(read_buf, "%[^,],%d,%d", key, &size, &count);
        printf("key = %s, keylen = %lu, sz = %d, cnt = %d \n", key, strlen(key), size, count);
    }
    fclose(f);
    
    return 0;
}
