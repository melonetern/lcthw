#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	// go through each string in argv
	// Q:why am I skipping argv[0]?  A: argv[0]=./ex13
    
    //let's make our own array of strings
    char *states[] = {
            "California", "Oregon",
            "Washington", "Texas",NULL
    };
    
    
    argv[1]=states[1];
    for (i=1; i < argc; i++){
        printf("arg %d: %s\n", i, argv[i]);
    }
    
    
    
    int num_states = 5;
    
    //states[1]=argv[1];
    for (i = 0; i < num_states; i++){
        printf("state %d: %s\n", i, states[i]);
    }
    
    printf("unchanged argc: %d\n", argc);
    argc=108;
    printf("changed argc: %d\n",argc);
    
    return 0;
}
