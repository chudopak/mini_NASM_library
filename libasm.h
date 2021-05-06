#ifndef LIBA_H
# define LIBA_H

# include <string.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>

extern int	errno;

size_t		ft_strlen(const char *str);
char		*ft_strcpy(char *dst, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
ssize_t		ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t		ft_read(int fildes, const void *buf, size_t nbyte);
char		*ft_strdup(const char *s1);

#endif