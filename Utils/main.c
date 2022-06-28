#include <ft_string.h>
#include <ft_array.h>

#include <stdio.h> // printf

int main()
{
    // test ex : (str = strin().cpy("blabla"))
    char    **arr = array().create(2, "    hello ", " bla bla    ");
    array().set(arr, string().cpy("antonio"), 1);
    int i = 0;
    while (arr && arr[i])
        printf("%s\n", arr[i++]);
    arr = array().free(arr);

    return (0);
}