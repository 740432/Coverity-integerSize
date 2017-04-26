#include <stdio.h>

    int main(void){
            int i;
            short s;
            char c;
	    long l;
	    unsigned int u; 

            i = 0xdeadbeef;
            s = i;
            c = i;
	    l = i;
	    u = i;

            printf("int = 0x%x (%lu bits)\n", i, sizeof(i) * 8);
            printf("short = 0x%x (%lu bits)\n", s, sizeof(s) * 8);
            printf("char = 0x%x (%lu bits)\n", c, sizeof(c) * 8);
	    printf("long = 0x%x (%lu bits)\n", l, sizeof(l) * 8);
	    printf("uint = 0x%x (%lu bits)\n", u, sizeof(l) * 8);

            return 0;
    }
