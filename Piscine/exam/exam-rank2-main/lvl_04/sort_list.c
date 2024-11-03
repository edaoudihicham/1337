#include <stdio.h>
#include <stdlib.h>

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
    int hold;
    t_list *head_tmp;

    head_tmp = lst;

    while (lst->next != NULL)
    {
        if (((*cmp)(lst->data, lst->next->data)) == 0)
        {
            hold = lst->data;
            lst->data = lst->next->data;
            lst->next->data = hold;
            lst = head_tmp;
        }
        else
        lst = lst->next;
    }
    lst = head_tmp;
    return lst;
}