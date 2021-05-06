#include "libasm.h"

//char	*ft_strdup1(const char *s1)
//{
//	unsigned int	i;
//	char			*cp_s;
//
//	i = 0;
//	while (s1[i])
//		i++;
//	cp_s = (char*)malloc(sizeof(char) * (i + 1));
//	if (cp_s)
//	{
//		cp_s[i] = '\0';
//		i = -1;
//		while (s1[++i])
//			cp_s[i] = s1[i];
//	}
//	return (cp_s);
//}

int		main(void)
{
	printf("**************************\n");
	printf("***      ft_strlen     ***\n");
	printf("**************************\n");

	printf("Test: %s$\nORIGINAL: %d\nMY FUNC: %d\n\n", "biba boba", (int)strlen("biba boba"), (int)ft_strlen("biba boba"));
	printf("Test: %s$\nORIGINAL: %d\nMY FUNC: %d\n\n", "", (int)strlen(""), (int)ft_strlen(""));
	printf("Test: " "$\nORIGINAL: %d\nMY FUNC: %d\n\n", (int)strlen("    "), (int)ft_strlen("    "));





	printf("**************************\n");
	printf("***      ft_strcpy     ***\n");
	printf("**************************\n");
	
	char *dest;
	char *dest2;
	char *src;
	dest = malloc(10);
	dest2 = malloc(10);
	src = malloc(10);
	src = strcpy(src, "hello,yo");
	printf("ORIGINAL: %s\n", strcpy(dest, src));
	printf("MY FUNC: %s\n\n", ft_strcpy(dest2, src));
	free(dest);
	free(dest2);
	free(src);




	printf("**************************\n");
	printf("***       ft_strcmp    ***\n");
	printf("**************************\n");

	printf("Test: %s and %s$\nORIGINAL: %d\nMY FUNC: %d\n\n", "a", "a", strcmp("a", "a"), ft_strcmp("a", "a"));
	printf("Test: %s and %s$\nORIGINAL: %d\nMY FUNC: %d\n\n", "Lorem ipsum dolor st amet, consectetur adipiscing", "Lodsfsdfasdf", strcmp("Lorem ipsum dolor st amet, consectetur adipiscing", "Lodsfsdfasdf"), ft_strcmp("Lorem ipsum dolor st amet, consectetur adipiscing", "Lodsfsdfasdf"));
	printf("Test: %s and %s$\nORIGINAL: %d\nMY FUNC: %d\n\n", "", "12345", strcmp("", "12345"), ft_strcmp("", "12345"));
	printf("Test: %s and %s$\nORIGINAL: %d\nMY FUNC: %d\n\n", "1239", "", strcmp("1239", ""), ft_strcmp("1239", ""));
	printf("Test: %s and %s$\nORIGINAL: %d\nMY FUNC: %d\n\n", "ab", "a", strcmp("ab", "a"), ft_strcmp("ab", "a"));
	printf("Test: %s and %s$\nORIGINAL: %d\nMY FUNC: %d\n\n", "", "", strcmp("", ""), ft_strcmp("", ""));
	printf("Test: %s and %s$\nORIGINAL: %d\nMY FUNC: %d\n\n", "\xff\xff", "\xff", strcmp("\xff\xff", "\xff"), ft_strcmp("\xff\xff", "\xff"));
	//printf("MY FUNC %d\n", ft_strcmp("ab", NULL));
	printf("ORIGINAL %d\n", strcmp("1", "5"));





	printf("**************************\n");
	printf("***       ft_write     ***\n");
	printf("**************************\n");
	
	printf("Test: usual input\n");
	write(1, "ORIGINAL: test text\n", 17);
	ft_write(1, "MY FUNC: test text\n", 17);
	write(1, "\n", 1);


	printf("Test: zero width\n");
	printf("%zd\n", write(-1, "Test", 0));
	printf("%zd\n", ft_write(-1, "Test", 0));
	write(1, "\n", 1);

	printf("Test: fd < 0\n");
	printf("ORIGINAL: %zd errno: %d\n", write(-1, "Test", 4), errno);
	errno = 0;
	printf("MY FUNC: %zd errno: %d\n\n", ft_write(-1, "Test", 4), errno);

	printf("Test: negative width\n");
	printf("ORIGINAL: %zd errno: %d\n", write(1, "Test", -1), errno);
	errno = 0;
	printf("MY FUNC: %zd errno: %d\n", ft_write(1, "Test", -1), errno);
	write(1, "\n", 1);

	printf("Test: 1\n");
	printf("ORIGINAL: %zd errno: %d\n", write(1, NULL, 1), errno);
	write(1, NULL, 1);
	errno = 0;
	printf("MY FUNC: %zd errno: %d\n", ft_write(1, NULL, 1), errno);
	write(1, "\n", 1);








	printf("**************************\n");
	printf("***       ft_read      ***\n");
	printf("**************************\n");

	char	*buf;
	int		fd;
	fd = open("Makefile", O_RDONLY);
	buf = malloc(10);
	printf("Reading 10 bytes from Makefile\n");
	read(fd, buf, 10);
	printf("ORIGINAL: %s\n", buf);
	ft_read(fd, buf, 10);
	printf("MY FUNC: %s\n\n", buf);
	free(buf);
	close(fd);

	printf("Reading from unexisting fd\n");
	printf("ORIGINAL: %zd errno: %d\n", read(-23, buf, 10), errno);
	errno = 0;
	printf("MY FUNC: %zd errno: %d\n", ft_read(-23, buf, 10), errno);
	write(1, "\n", 1);



	printf("**************************\n");
	printf("***     ft_strdup      ***\n");
	printf("**************************\n");

	printf("Test \"hello\" string\n");
	printf("ORIGINAL: %s\n", strdup("hello"));
	printf("MY FUNC: %s\n\n", ft_strdup("hello"));
	
	return(0);
}
