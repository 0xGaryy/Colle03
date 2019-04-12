/*
** EPITECH PROJECT, 2019
** .
** File description:
** .
*/

#include "include/my.h"

int main(int ac , char **argv)
{
    int i = 1;
    int j = 1;
    int has_str = 0;

    for (; i < ac; i++){
        if (argv[i][0] == '-' && argv[i][1] == 'n') {
            error_input(i, argv);
            break;
        }
    }
    for (; j < ac; j++){
        if (argv[j][0] == '-' && argv[j][1] == 's') {
            error_input2(j, argv);
            has_str = 1;
            break;
        }
    }
    draw(argv[i + 1], argv[j+1], has_str);
    return (0);
}

void error_input(int i, char **argv)
{
    int strlen1 = strlen(argv[i+1]);

    for (int a = 0; a < strlen1; a++){
        if (argv[i+1][a] < '0' || argv[i+1][a] > '9')
            exit(84);
    }
}

void error_input2(int j , char **argv)
{
    int strlen2 = strlen(argv[j+1]);

    for (int b = 0; b < strlen2; b++){
        if (argv[j+1][b] > '0' && argv[j+1][b] < '9')
            exit(84);
    }
}
