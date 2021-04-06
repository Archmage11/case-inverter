#include<stdio.h>
#include<string.h> 
#include<stdlib.h>

void invert_case(char *input)
{
    char *out[strlen(input)];

    int i = 0;
    while (input[i] != '\0')
    {
        if (input[i] >= 'a' && input[i] <= 'z')
            input[i] -= 'a' - 'A';
        
        else if (input[i] >= 'A' && input[i] <= 'Z')
            input[i] += 'a' - 'A';

        i++;
    } 
    return;
}

int main() 
{
    printf("Enter string: ");

    char *in = malloc(50);
    fgets(in, 50, stdin);

    invert_case(in);

    printf("Inverted string: %s", in);

    return 0;
}

