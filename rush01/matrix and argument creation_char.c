#include <stdio.h>
#include <stdlib.h>

int ft_asignator(char *str, char matrix[6][6]);
void ft_record(char captured_char,int func_counter,int pos_counter, char matrix[6][6]);
void ft_set_to_spaces(char matrix[6][6]);
void ft_print_matrix(char matrix[6][6]);

int main(int argc, char **argv)
{
    char matrix[6][6];
    
    ft_set_to_spaces(matrix);
    ft_print_matrix(matrix);
    if (argc < 2)
    {
        printf("No input provided.\n");
        return (1);
    }
    if (ft_asignator(argv[1], matrix) != 0)
    {
        printf("Error: invalid input string\n");
        return (1);
    }
    ft_print_matrix(matrix);
    return (0);
}

void ft_set_to_spaces(char matrix[6][6])
{
    int x;
    int y;
    
    y = 0;
    while (y < 6)
    {
        x = 0;
        while (x < 6)
        {
            matrix[x][y] = ' ';
            x++;
        }
        y++;
    }
}


int ft_asignator(char *str, char matrix[6][6])
{
    int func_counter;
    int pos_counter;
    
    func_counter = 1;
    pos_counter = 1;
    while (*str)
    {
        if (*str == ' ')
        {
            str++;
            continue;
        }
        if (*str < '1' || *str > '4')
            return (1);
        if (pos_counter == 5)
            pos_counter = 1;
        ft_record(*str, func_counter, pos_counter, matrix);
        str++;
        pos_counter++;
        func_counter++;
    }
    if (func_counter < 16)
        return (1);
    return (0);
}

void ft_record(char captured_char, int func_counter, int pos_counter,char matrix[6][6])
{
    if (func_counter < 5)
        matrix[pos_counter][0] = captured_char;
    else if (func_counter < 9)
        matrix[pos_counter][5] = captured_char;
    else if (func_counter < 13)
        matrix[0][pos_counter] = captured_char;
    else
        matrix[5][pos_counter] = captured_char;
}

void ft_print_matrix(char matrix[6][6])
{
    int x;
    int y;
    
    y = 0;
    while (y < 6)
    {
        x = 0;
        while (x < 6)
        {
            printf("%c", matrix[x][y]);
            x++;
        }
        printf("\n");
        y++;
    }
}
