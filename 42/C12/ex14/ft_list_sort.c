#include "ft_list.h"

void	me_stack_now(t_list *head, t_list *smol, t_list *new)
{
	t_list *curr = head;
	t_list *prev = 0;

	while (curr && curr != new)
	{
		prev = curr;
		curr = curr->next;
	}
	if (!curr)
		prev = 0;
	if (prev)
		prev->next = curr->next;
	if (smol)
		smol->next = new;
	if (!smol)
		new->next = 0;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *a = 0;
	t_list *head = 0;
	t_list *curr = 0;
	t_list *smol = 0;
	t_list *smol_2 = 0;

	if (*begin_list)
	{
		curr = *begin_list;
		a = curr->next;
		smol = curr;
	}
	while (a)
	{
		if (cmp(smol->data, a->data) > 0)
			smol = a;
		a = a->next;
	}
	head = smol;
	if (smol == curr)
		curr = curr->next;
	me_stack_now(curr, 0, smol);
	while (curr)
	{
		smol_2 = curr;
		a = curr->next;
		while (a)
		{
			if (cmp(smol_2->data, a->data) > 0)
				smol_2 = a;
			a = a->next;
		}
		if (smol_2 == curr)
			curr = curr->next;
		me_stack_now(curr, smol, smol_2);
		smol = smol_2;
	}
	*begin_list = head;
}

