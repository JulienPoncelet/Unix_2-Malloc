/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 10:13:28 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/14 17:41:17 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

void						*ft_malloc(size_t size)
{
//	static t_malloc			*malloc_page = NULL;
	struct rlimit			rlp;
	int						ret;

	ret = getrlimit(RLIMIT_MEMLOCK, &rlp);

	unsigned long long		reserved_tiny;
	unsigned long long		reserved_small;
	unsigned long long		reserved_large;

	reserved_tiny = TINY * PAGE;
	reserved_small = SMALL * PAGE;
	reserved_large = rlp.rlim_cur - reserved_tiny - reserved_small;

	printf("%llu --- %llu\n", rlp.rlim_cur, rlp.rlim_max);
	printf("%llu\n", reserved_tiny);
	printf("%llu\n", reserved_small);
	printf("%llu\n", reserved_large);

/*	if (!malloc_page)
		ft_init_malloc(&malloc_page);
	if (malloc_page->test)
		printf("%d\n", malloc_page->test);*/
	return (NULL);
	(void)size;
}
