#include <stdio.h>
#include <stdlib.h>
typedef struct s_list
{
	struct s_list *next;
	void *data;
} t_list;

int ft_list_size(t_list *begin_list)
{
	int size = 0;
	while (begin_list != NULL)
	{
		size++;
		begin_list = begin_list->next;
	}
	return size;
}

t_list *new(void *data)
{
	t_list *num_list;

	num_list = (t_list *)malloc(sizeof(t_list));
	if (num_list)
	{
		num_list->data = data;
		num_list->next = NULL;
	}
	return (num_list);
}

void print_list(t_list *head)
{
	t_list *temp = NULL;
	if (!head)
		return;
	temp = head;
	while (temp)
	{
		printf("%s -> ", (char *)temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main(void)
{
	t_list *p, *x;

	p = new ("one");
	x = new ("two");
	p->next = x,

	printf("%d\n", ft_list_size(p));
	printf("\n");
	print_list(p);
	return (0);
}













// int main(void)
// {
// 	t_list *p, *s, *j, *t;

// 	p = new("one");
// 	s = new("two");
// 	j = new("three");
// 	t = new("four");
// 	p->next = s;
// 	s->next = j;
// 	j->next = t;
// 	printf("%d\n", ft_list_size(p));
// 	return (0);
// }