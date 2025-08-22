#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void		*item;
}			t_btree;

typedef struct		s_node
{
        int		level;
	int		first;
        void		*item;
        struct s_node	*next;
}			t_node;

#endif
