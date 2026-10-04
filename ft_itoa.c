
#include "libft.h"
char   *ft_itoa(int b)
{
    char *str;
    long num;
    size_t len; 

    num = b;
    if (num<=0)
        len = 1;
    else
        len = 0;
    while (num != 0)
    {
        num /= 10;
        len++;
    }
    str=malloc(len + 1);
    if(!str)
        return(NULL);
    str[len] = '\0';
    num = b;
    if(num<0)
    {
        str[0]='-';
        num=-num;
    }
    while(len-->(num<0))
    {
        str[len]=(num%10)+'0';
        num/=10;
    }
    return(str);
}