/*
** EPITECH PROJECT, 2021
** 42sh
** File description:
** 42sh
*/

#include "../../../include/my.h"
#include "../../../include/mysh.h"

int eg_op_var_two(var_t **var)
{
    if (var[0] != NULL && var[1] != NULL) {
        if ((var[0]->k == 1 && var[1]->k == 0) ||
        (var[0]->k == 0 && var[1]->k == 1)) {
            my_printf("if: Expression Syntax.\n");
            return (84);
        }
        if (var[0]->k == 1 && var[1]->k == 1) {
            if (var[0]->value == var[1]->value)
                return (1);
        }
        if (var[0]->k == 0 && var[1]->k == 0) {
            if (my_strcmp(var[0]->data, var[1]->data) == 0)
                return (1);
        }
    }
    return (0);
}

int eg_op_var(var_t **var, char **shif)
{
    if (eg_op_var_two(var) == 1)
        return (1);
    if (var[0] != NULL && var[1] == NULL) {
        if (var[0]->k == 1 && my_str_isnum(shif[2]) == 1) {
            if (var[0]->value == my_getnbr(shif[2]))
                return (1);
        }
        if (var[0]->k == 0 && my_str_isnum(shif[2]) == 0) {
            if (my_strcmp(var[0]->data, shif[2]) == 0)
                return (1);
        }
    }
    return (0);
}

int eg_eg_op(char **shif, var_t **var)
{
    if (eg_op_var(var, shif) == 1)
        return (1);
    if (var[0] == NULL && var[1] != NULL) {
        if (var[1]->k == 1 && my_str_isnum(shif[0]) == 1) {
            if (var[1]->value == my_getnbr(shif[0]))
                return (1);
        }
        if (var[1]->k == 0 && my_str_isnum(shif[0]) == 0) {
            if (my_strcmp(var[0]->data, shif[0]) == 0)
                return (1);
        }
    }
    if (var[0] == NULL && var[1] == NULL) {
        if (my_str_isnum(shif[0]) == 1 && my_str_isnum(shif[2]) == 1) {
            if (my_getnbr(shif[0]) == my_getnbr(shif[2]))
                return (1);
        } else if (my_strcmp(shif[0], shif[2]) == 0)
            return (1);
    }
    return (0);
}

int dif_op_var_two(var_t **var)
{
    if (var[0] != NULL && var[1] != NULL) {
        if ((var[0]->k == 1 && var[1]->k == 0) ||
        (var[0]->k == 0 && var[1]->k == 1)) {
            my_printf("if: Expression Syntax.\n");
            return (84);
        }
        if (var[0]->k == 1 && var[1]->k == 1) {
            if (var[0]->value != var[1]->value)
                return (1);
        }
        if (var[0]->k == 0 && var[1]->k == 0) {
            if (my_strcmp(var[0]->data, var[1]->data) != 0)
                return (1);
        }
    }
    return (0);
}

int dif_op_var(var_t **var, char **shif)
{
    if (dif_op_var_two(var) == 1)
        return (1);
    if (var[0] != NULL && var[1] == NULL) {
        if (var[0]->k == 1 && my_str_isnum(shif[2]) == 1) {
            if (var[0]->value != my_getnbr(shif[2]))
                return (1);
        }
        if (var[0]->k == 0 && my_str_isnum(shif[2]) == 0) {
            if (my_strcmp(var[0]->data, shif[2]) == 1)
                return (1);
        }
    }
    return (0);
}