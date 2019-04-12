/*
** EPITECH PROJECT, 2019
** duo_stumper
** File description:
** number.c
*/

#include "include/my.h"

char **get_number(void)
{
    char **numbers = malloc(sizeof(char) * 255);

    numbers[0] = " 000  000  000 0000   00 00000 000 00000 000  000 ";
    numbers[1] = "0   00 00 0   0    0 0 0 0    0        00   00   0";
    numbers[2] = "0   0  00    0  000 0  0 0000 0000    0  000  0000";
    numbers[3] = "0   0  00  0       000000    00   0  0  0   0    0";
    numbers[4] = " 000  0000000000000    0 0000  000  0    000  000 ";
    return numbers;
}

void draw_str(char *str, int line, char n, int has_str)
{
    char c = '0';
    int to_write = (n - '0') * 5;
    char **numbers = get_number();
    int index = (n - '0') % strlen(str);

    if (has_str)
        c = str[index];
    for (int i = 0; i < 5; i++) {
        if (numbers[line][to_write] == '0')
            write(1, &c, 1);
        else
            write(1, " ", 1);
        to_write++;
    }
    free(numbers);
}

void put_space(int j, char *num)
{
    if (j != ((int)strlen(num) - 1))
        write(1, " ", 1);
}

void draw(char *num, char *str, int has_str)
{
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < (int)strlen(num); j++) {
            draw_str(str, i, num[j], has_str);
            put_space(j, num);
        }
        write(1, "\n", 1);
    }
}
