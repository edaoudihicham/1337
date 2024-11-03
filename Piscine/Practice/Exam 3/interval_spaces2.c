#include <unistd.h>

int main(int argc, char *argv[]) 
{

    if (argc != 2) {
        write(1, "\n", 1);
        return 0;
    }
	
	int len =0 ;

	while(argv[1][len])
		len++;

    int i = 0;
    while (i < len) {
        write(1, &argv[1][i], 1);
        if (i < len - 1) {
            write(1,"   ",3);  // 3 spaces
        } else {
            write(1,"\n",1);  // new line at the end
        }
        i++;
    }

    return 0;
}
