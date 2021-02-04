
#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list,void *data)
{
	t_list *start_node;

	start_node = ft_create_elem(data);
	if (start_node == NULL)
		*begin_list = ft_create_elem(data);
	if (*begin_list != NULL)
		start_node->next = *begin_list;
}

int main()
{
	int a = 5, b = 6,c = 7;
	int d =1;
	t_list el1;
	t_list el2;
	t_list el3;
	t_list *begin = &el1;
	el1.next = &el2;
	el2.next = &el3;
	el3.next = 0;
	el1.data = &a;
	el2.data = &b;
	el3.data = &c;
	ft_list_push_front(begin,&d);
	printf("%d", (void *)(el1.data));
}
