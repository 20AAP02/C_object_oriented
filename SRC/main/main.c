#include <ft_string.h>
#include <ft_array.h>
#include <ft_list.h>

#include <stdio.h> // printf

int main()
{
    char *str;
    t_list *lst;
    
    lst = list().new(string().cpy("Antonio"));
    list().add(lst, string().cpy("Pinto"));
    list().add(lst, string().cpy("Pinto"));
    list().set(lst, string().cpy("Abranches"), 1);
    lst = list().rmv(lst, 0);
    int i = 0;
    while (list().get(lst, i))
    {
        str = list().get(lst, i);
        printf("%s\n", str);
        i++;
    }
    list().free(lst);
    return (0);
}