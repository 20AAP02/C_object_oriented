#include <ft_string.h>
#include <ft_array.h>

#include <stdio.h> // printf

int main()
{
    // test ex : (str = strin().cpy("blabla"))
    char    **arr = array().create(2, "hello", "bla bla");
    int i = 0;
    while (arr[i])
        printf("%s\n", arr[i++]);
    arr = array().free(arr);
    arr = array().add(arr, "hello");
    arr = array().add(arr, "world");
    i = 0;
    while (arr[i])
        printf("%s\n", arr[i++]);
    arr = array().free(arr);

    return (0);
}