#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// int main(void)
// {
//     t_list *lst;
//     t_list *new;

//     lst=NULL;
//     new=ft_lstnew("hello");
//     ft_lstadd_back(&lst,new);

//  new=ft_lstnew("hello");
//     ft_lstadd_back(&lst,new);

//     new =ft_lstnew("42");
//     ft_lstadd_back(&lst,new);
//     while (lst)
//     {
//         printf("%s\n",(char *)lst->content);
//         lst=lst->next;


//     }
//     return (0);
// }
// int main(void)
// {
//     t_list *lst;
//     t_list *new;
//     lst=NULL;
    
//     new=ft_lstnew("world");
//     ft_lstadd_front(&lst,new);

//     new=ft_lstnew("world");
//     ft_lstadd_front(&lst,new);

//     new=ft_lstnew("42");
//     ft_lstadd_front(&lst,new);
//     while(lst)
//     {
//         printf("%s\n",(char *)lst->content);
//         lst=lst->next;


//     }
//     return (0);
// }
// void del_content(void *content)
// {
// free(content);

// }
// int main (void)
// {
//     t_list *lst;
//     t_list *new;

//     lst=NULL;
//     new=ft_lstnew(ft_strdup("42"));
//     ft_lstadd_back(&lst,new);

//     new=ft_lstnew(ft_strdup("world"));
//     ft_lstadd_back(&lst,new);
    
//     new=ft_lstnew(ft_strdup("hello"));
//     ft_lstadd_back(&lst,new);

//     ft_lstclear(&lst,del_content);

//     if(lst==NULL)
//         printf("list is null");
//     else
//         printf("didnt work");
//     return (0);

// }
// void del_content(void content)
// {

// free(content);

// }
// int main(void)
// {
// t_list *node;
// node=ft_lstnew(ft_strdup("hello"));
// ft_lstdelone(&node,del_content);

// }