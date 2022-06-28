#include <ft_string.h>
#include <ft_array.h>

#include <stdio.h> // printf

int main()
{
    // test ex : (str = strin().cpy("blabla"))
    char    **arr = array().create(2, "hello", "bla bla");
    char    **arr2 = array().cpy_n(arr, 2);
    int i = 0;
    while (arr && arr[i])
        printf("%s\n", arr[i++]);
    arr = array().free(arr);
    i = 0;
    while (arr2 && arr2[i])
        printf("%s\n", arr2[i++]);
    arr2 = array().free(arr2);

    return (0);
}