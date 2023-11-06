/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:06:09 by akovalev          #+#    #+#             */
/*   Updated: 2023/11/06 14:00:04 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*int	main(void)
{

	printf("\n Test for isalpha\n");

	char	c;

	c = 'Q';
	printf("\n Result of our function is: %d", ft_isalpha(c));
	printf("\n Result of libc function is: %d", isalpha(c));
}*/



/*int	main(void)
{
	printf("\n Test for isdigit\n");

	char	c;

	c = 'Q';
	printf("\n Result of our function is: %d", ft_isdigit(c));
	printf("\n Result of libc function is: %d", isdigit(c));
}*/



/*int	main(void)
{

	printf("\n Test for isalnum\n");
	char	c;

	c = '1';
	printf("\n Result of our function is: %d", ft_isalnum(c));
	printf("\n Result of libc function is: %d", isalnum(c));
}*/


/*int	main(void)
{

	printf("\n Test for isascii\n");
	char	c;

	c = '1';
	printf("\n Result of our function is: %d", ft_isacii(c));
	printf("\n Result of libc function is: %d", isascii(c));
}*/



/*int    main(void)
{

	printf("\n Test for isprint\n");
    char    c;

    c = ')';
    printf("\n Result of our function is: %d", ft_isprint(c));
    printf("\n Result of libc function is: %d", isprint(c));
}*/


/*int	main(void)
{

	printf("\n Test for strlen\n");
	char	c[]= "otter";

	printf("%zu \n", ft_strlen(c));
}*/

/*int	main(void)
{

	printf("\n Test for memset\n");
	char	str[] = "string";
	ft_memset(str, '$', 3);

	printf("%s", str); 

}*/


/*void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

int main(void)
{

	printf("\n Test for bzero\n");
	
	char	str[] = "string";
	ft_bzero(str, 3);
	printf("%s", str);
}*/


/*int main(void)
{

	printf("\n Test for memcpy\n");
//	char test[20] = "Learning";
//	char test2[20] = "Learning";

	void *src = NULL;
	void *dst = NULL;
	size_t n = 0;

	memcpy(dst, src, n);
	ft_memcpy(dst, src, n);

	//ft_memcpy(test+8, test, sizeof(char)*3);
	//memcpy(test2+8, test2, sizeof(char)*3);
	//printf("test after move is %s\n", test);
	//printf("test2 after move is %s\n", test2);
	return(0);
}*/
/*int	main(void)
{
	printf("\n Test for memcpy\n");
	int	source[] = {1, 2, 3, 4, 5};
	int destination[5];

	ft_memcpy(destination, source, sizeof(int)*5);

	for (int i = 0; i < 5; i++)
	{
		printf("destination[%d] = %d\n", i, destination[i]);
	}
	return(0);
}*/


/*int	main(void)

{

	printf("\n Test for memmove\n");
	int	source[20] = {1, 2, 3, 4, 5};
	int destination[5];
	int destination2[5];

	for (int i = 0; i < 5; i++)
	{
		printf("destination[%d] = %d\n", i, destination[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("destination2[%d] = %d\n", i, destination2[i]);
	}

	//ft_memmove(source+1, source, sizeof(int)*5);
	memmove(source+3, source, sizeof(int)*5);

	for (int i = 0; i < 5; i++)
	{
		printf("destination[%d] = %d\n", i, source[i]);
	}
	return(0);
}

		for (int i = 0; i < 5; i++)
	{
		printf("destination2[%d] = %d\n", i, destination2[i]);
	}	
int main()  
{  
printf("\n Test for memmove\n");
char csrc[100] = "Otters";  
printf("%s", ft_memmove(csrc+3, csrc, strlen(csrc)+1));  
return 0;  
}
*/

/*
int	main(void)
{
	char	test[20] = "learning";
	char	target[20] = "learning";
	char	attach[20] = " is fu";
	size_t	ft;
	size_t	orginal;

	printf("\n Test for strlcpy\n");

	printf("*** ft results ********\n");
	ft = ft_strlcpy(test, attach, 20);
	printf("-> %s\n", test);
	printf("*** orginal results ***\n");
	orginal = strlcpy(target, attach, 20);
	printf("-> %s\n", target);
	if (ft == orginal)
		printf("The return values are the same");
	else
		printf("The return values are not the same");
	return (0);
}*/

/*
int	main(void)
{
	printf("\n Test for strlcat\n");
	char	test[20] = "learning";
	char	target[20] = "learning";
	char	attach[20] = " is fun";
	size_t	ft;
	size_t	orginal;

	printf("*** ft results ********\n");
	ft = ft_strlcat(test, attach, 20);
	printf("-> %s\n", test);
	printf("*** orginal results ***\n");
	orginal = strlcat(target, attach, 20);
	printf("-> %s\n", target);
	if (ft == orginal)
		printf("The return values are the same");
	else
		printf("The return values are not the same");
	return (0);
}*/

/*int main(void)
{
	int	c = 'a';
	int	c1 = 'b';

	printf("\n Test for toupper\n");
	printf("%d\n", ft_toupper(c));
	printf("%d\n", toupper(c1));
}*/

/*int	ft_tolower(int c)
{
	unsigned char	ch;

	if (c == EOF)
		return (EOF);
	ch = (unsigned char)c;
	if (65 <= ch && ch <= 90)
		ch = ch + 32;
	return (ch);
}

int main(void)
{
	int	c = 'A';
	int	c1 = 'B';

	printf("\n Test for tolower\n");
	printf("%d\n", ft_tolower(c));
	printf("%d\n", tolower(c1));
}
note: the EOF macro is often defined as -1, 
and when you cast -1 to an unsigned char, it becomes 255
ft_tolower(EOF): std: -1, yours: 255
*/

/*int	main(void)
{
	char s[] = "learning is fun";
	int c = '\0';
	char *result = ft_strrchr(s, c);

	
	printf("\n Test for strrchr\n");
 if (result != NULL)
    {
        printf("Character '%c' found at position: %ld\n", c, result - s);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", c);
    }
	return (0);
}
note: if (*s_end == (char)c) casting to char here, same as strchr
*/

/*int	main(void)
{
	char s[] = "learning is fun";
	int c = '\0';
	char *result = ft_strchr(s, c);

printf("\n Test for strchr\n");

 if (result != NULL)
    {
        printf("Character '%c' found at position: %ld\n", c, result - s);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", c);
    }
	return (0);
}
note: it failed 
res = single_test_strchr(5, "teste", 'e' + 256) && res;
	res = single_test_strchr(6, "teste", 1024) && res;
because c is an int with a value outside the valid range of a char.

When you use an int as c and compare it directly to a char 
(as is done in the code), you are potentially working with different 
data types, and this can lead to issues, especially if the int value 
is outside the valid range for a char.
If you have an int with a value greater than 255 (outside the char range, 
which is -128 to 127 or 0 to 255 for unsigned),
 the conversion to char ensures that the value is treated as a valid ASCII
 value within the char range.
*/

/*int	main(void)
{
	int	ft;
	int	orginal;

	printf("\n Test for strncmp\n");

	ft = ft_strncmp("Otter", "Potter", 10);
	orginal = strncmp("Otter", "Potter", 10);
	printf("*** ft results ********\n");
	printf("%d\n", ft);
	printf("*** orginal results ***\n");
	printf("%d\n", orginal);
	if (ft == orginal)
		printf("The return values are the same");
	else
		printf("The return values are not the same");
	return (0);
}*/

/*int	main(void)
{
	char    string1[] = "gree";
    char    string2[] = "greet";
	size_t number = 39;
    int result;
	int check;
    
	printf("\n Test for strncmp\n");
  result = ft_strncmp(string1, string2, number);
  check = strncmp(string1, string2, number);
  
  printf("result is: %d\ncheck is: %d\n", result, check);
  
  return 0;
}*/

/*int	main(void)
{
	char s[] = "learning is fun";
	int c = 'z';
	char *result = ft_memchr(s, c, 3000);
	char *original = memchr(s, c, 3000);

	printf("\n Test for memchr\n");

 if (result != NULL)
    {
        printf("Character '%c' found at position: %ld\n", c, result - s);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", c);
    }

	if (result == original)
		printf("The return values are the same");
	else
		printf("The return values are not the same");
	return (0);

}
note: had to remove the check for the string ending wiht '\0', so the
search actually can continue way beyond the boundaries of s if n is large
enough. Example: Character 'z' found at position: 768 for the test above */

/*int	main(void)
{
	char    string1[] = "great";
    char    string2[] = "greet";
	size_t number = 6;
    int result;
	int check;

	printf("\n Test for memcmp\n");
    
  result = ft_memcmp(string1, string2, number);
  check = memcmp(string1, string2, number);
  
  printf("result is: %d\ncheck is: %d\n", result, check);
  
  return 0;
}*/

/*int	main(void)
{
	//printf("our result: %s\n", ft_strnstr(((void *)0), "fake", 4));
	printf("result: %s\n", strnstr(((void *)0), "fake", 4));
}

int main(void)
{
	char needle[] = "otter";
	char haystack[] = "pottsmotters";
	char *result;
	char *ourresult;

	printf("\n Test for strnstr\n");

	ourresult = ft_strnstr(haystack, needle, 12);
	result = strnstr(haystack, needle, 12);

	printf("%s \n%s \n", haystack, ourresult);
	printf("%s \n%s \n", haystack, result);
}

note: this function segfaults on purpose when you pass NULL as needle because 
it tries to access needle[0] without verifying that needle is a valid pointer, 
but if you actually wanted it to not segfault, the check should be 
	if (needle == NULL || len == 0)
        return (char *)haystack;

also: removed check for len being == 0 because the original 
function also returns NULL in that case
*/

/*int	main(void)
{
	printf("\n Test for atoi\n");
	printf("atoi result is %d\n", atoi("     -+234"));
	printf("our result is %d\n", ft_atoi("     -+234"));

}*/

//start of calloc stuff

/*int main() {
    size_t count = -5;
    size_t size = 0;

    void *ptr1 = ft_calloc(count, size);
    if (ptr1 == NULL) {
        printf("ft_calloc returned NULL for negative input.\n");
    } 
	else 
	{
        for (size_t i = 0; i < count * size; i++) 
		{
            if (*((char *)ptr1 + i) != '\0') 
			{
                printf("ft_calloc did not zero the allocated 
				memory completely.\n");
                break;
            }
        }
		printf("end of ft_calloc\n");
    }

    void *ptr2 = calloc(count, size);
    if (ptr2 == NULL) {
        printf("calloc returned NULL for negative input.\n");
    } 
	else 
	{
        for (size_t i = 0; i < count * size; i++) 
		{
            if (*((char *)ptr2 + i) != '\0') 
			{
                printf("calloc did not zero the allocated 
				memory completely.\n");
                break;
            }
        }
		printf("end of calloc\n");
    }

    if (ptr1 == ptr2) 
	{
        printf("Both ft_calloc and calloc returned the same pointer.\n");
    } 
	else
	{
	    printf("ft_calloc and calloc returned different pointers.\n");
    }

    free(ptr1);
    free(ptr2);

    return 0;
}

int main()
{

	printf("\n Test for calloc\n");
	
	char *ours = ft_calloc(5, 5);
	char *actual = calloc(5, 5);
	free(ours);

	ours[0] = 1;
	ours[1] = 2;
	ours[2] = 3;

	actual[0] = 1;
	actual[1] = 2;
	actual[2] = 3;

	if (ours[2] == actual[2])
		printf("success\n");
	else
		printf("failure\n");
}

int	main(void)
{
	char *ours;
	char *actual;
	int i;

	i = 0;

	printf("\n Test for calloc\n");
	
	ours = ft_calloc(5, sizeof(int));
	actual = calloc(5, sizeof(int));

	ours[0] = 1;
	ours[1] = 2;
	ours[2] = 3;

	actual[0] = 1;
	actual[1] = 2;
	actual[2] = 3;

	while (i < 5)
	{
		printf("Ours[%d]: %d\n", i, ours[i]);
		i++;
	}

	i = 0;

	while (i < 5)
	{
		printf("Actual[%d]: %d\n", i, actual[i]);
		i++;
	}

	free(ours);
	free(actual);

	return (0);
}*/

//end of calloc stuff

/*int	main(void)
{
	printf("\n Test for strdup\n");
	
	char string[] = "Otter";

	char *ours = ft_strdup(string);
    char *actual = strdup(string);

	printf("Ours: %s\n", ours);
	printf("Actual: %s\n", actual);

	free(ours);
	free(actual);
	
	return(0);
}*/

/*int	main(void)
{
	printf("\n Test for ft_substr\n");
	char	string[] = "Plotter Otter";

	printf("Result: %s\n", ft_substr(string, 8, 5));

	return (0);
}
note: The tests "ft_substr("hola", 4294967295, 18446744073709551615)"
 represent extremely large start and length values, which could 
 lead to integer overflow issues.*/

/*int	main(void)
{
	printf("\n Test for ft_strjoin\n");
	
	char *s1 = "Otter";
	char *s2 = "Potter";

	printf("ours: %s\n", ft_strjoin(s1, s2));
	
	return(0);

}*/


/*int main(void)
{
	printf("\n Test for ft_strtrim\n");
    char s1[] = "  \t \t \n   \n\n\n\t";
    char set[] = "";
    char *result = ft_strtrim(s1, set);

    printf("result is: %s\n", result);
    free(result);
    return (0);
}

int main(void)
{
	printf("\n Test for ft_strtrim\n");
	char s1[] = "123Otter2Potter345";
	char set[] = "12345";
	char *result = ft_strtrim(s1, set);

	printf("result is: %s\n", result);
	free(result);
	return (0);
}

note: new_len calculation needs to handle the case when set is " "
and s1 is "      ". check if new_len is negative and = 0.  
*/

/*
int	main(void) 
{
	char str[] = "123Otter2Potter345";
	char sep = '2';

	printf("\n Test for ft_split\n");
    char **result = ft_split(str, sep);


    if (result) 
    {
        for (int i = 0; result[i]; i++) 
        {
            printf("Subs %d: %s\n", i, result[i]);
            free(result[i]); 
        }
        free(result);
	}
	else
        printf("Malloc Error.\n");
       return (0);
}*/

/*int	main(void)
{
	//ft_itoa(-2147483648);

	printf("\n Test for ft_itoa\n");

	printf("result is %s\n", ft_itoa(-2147483648));
	
	printf("result is %s\n", ft_itoa(345));
	
	printf("result is %s\n", ft_itoa(2147483647));
	
	printf("result is %s\n", ft_itoa(-2344));
	
	printf("result is %s\n", ft_itoa(0));
	
}*/

/*int	main(void)
{
	char	*s = "abcde";
	printf("\n Test for ft_strmapi\n");
	
	printf("result is: %s\n", ft_strmapi(s, nextchar));
	return (0);
}*/


/*int	main(void)
{
	char	s[] = "abcde";

	printf("\n Test for ft_striteri\n");
	
	ft_striteri(s, nextchar);
	printf("result is: %s\n", s);
	return (0);
}*/


//printf("\n Test for ft_putchar_fd\n");
//printf("\n Test for ft_putstr_fd\n");
//printf("\n Test for ft_putendl_fd\n");

//lstnew

/*int	main(void)
{

	printf("\n Test for ft_putnbr_fd\n");
	ft_putnbr_fd(-2147483648, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(345, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(-2344, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(42, 1);
	write (1, "\n", 1);
}*/


/*void	printlist(t_list *head)
{
	t_list	*temp = head;

	while (temp != NULL)
	{
		printf("value: %d\n", *((int *)temp->content));
		temp = temp->next;
	}
}

int	main(void)
{
	t_list	*head = NULL;
	t_list	*tmp;
	int		i;
	int		*value;

	//printf("\n Test for ft_lstnew\n");

	i = 0;
	while (i <= 5)
	{
		value = malloc(sizeof(int));
		*value = i;
		tmp = ft_lstnew(value);
		tmp->next = head;
		head = tmp;
		i++;
	}
	printlist(head);
	while (head)
	{
		t_list *next = head->next;
		free(head->content);
		free(head); 
		head = next;
	}
}*/
//endoflstnew

//lstaddfront

/*void	printlist(t_list *lst)
{
	while (lst)
	{
		printf("value: %d\n", *((int *)lst->content));
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*head = NULL;
	t_list	*tmp;
	int		i;
	int		*value;

	i = 0;
	while (i <= 5)
	{
		value = malloc(sizeof(int));
		*value = i;
		tmp = ft_lstnew(value);
		tmp->next = head;
		head = tmp;
		i++;
	}
	printlist(head);
	printf("\nafter the addition: \n\n");
	value = malloc(sizeof(int));
	*value = -1;
	tmp = ft_lstnew(value);
	ft_lstadd_front(&head, tmp);
	printlist(head);
	while (head)
	{
		t_list *next = head->next;
		free(head->content);
		free(head); 
		head = next;
	}	
}

//note: *(int*)(lst->content) effectively takes the void* pointer lst->content, 
//interprets it as a pointer to an integer, and then dereferences that pointer 
//to obtain the actual integer value.*/

//endoflstaddfront

//lstaddback

/*void	printlist(t_list *lst)
{
	while (lst)
	{
		printf("value: %d\n", *((int *)lst->content));
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*head = NULL;
	t_list	*tmp;
	int		i;
	int		*value;

	i = 0;
	while (i <= 5)
	{
		value = malloc(sizeof(int));
		*value = i;
		tmp = ft_lstnew(value);
		tmp->next = head;
		head = tmp;
		i++;
	}
	printlist(head);
	printf("\nafter the addition: \n\n");
	value = malloc(sizeof(int));
	*value = -1;
	tmp = ft_lstnew(value);
	ft_lstadd_back(&head, tmp);
	printlist(head);
	while (head)
	{
		t_list *next = head->next;
		free(head->content);
		free(head); 
		head = next;
	}	
}*/


//endoflstaddback

//printf("\n Test for ft_lstsize\n");
//printf("\n Test for ft_lstlast\n");

//lstclear
/*void del(void *content)
{
	if (content)
		free(content);
}

void	printlist(t_list *lst)
{
	while (lst)
	{
		printf("value: %d\n", *((int *)lst->content));
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*head = NULL;
	t_list	*tmp;
	int		i;
	int		*value;

	//printf("\n Test for ft_lstclear\n");
	i = 0;
	while (i <= 5)
	{
		value = malloc(sizeof(int));
		*value = i;
		tmp = ft_lstnew(value);
		tmp->next = head;
		head = tmp;
		i++;
	}
	printlist(head);
	printf("\nafter the freeing: \n\n");
	ft_lstclear(&head, del);
	printlist(head);
}*/
//endoflstclear


//printf("\n Test for ft_lstnew\n");
//printf("\n Test for ft_lstnew\n");
//printf("\n Test for ft_lstnew\n");
//printf("\n Test for ft_lstnew\n");
//printf("\n Test for ft_lstnew\n");
//printf("\n Test for ft_lstnew\n");

//strmapi

/*char	nextchar(unsigned int i, char c)
{
	(void)i;
	c = c + 1;
	return (c);
}*/

/*void	nextchar(unsigned int i, char *c)
{
	(void)i;
	(*c)++;
}*/

/*void	nextchar_striteri(unsigned int i, char *c)
{
	(void)i;
	(*c)++;
}

char	nextchar_strmapi(unsigned int i, char c)
{
	(void)i;
	c = c + 1;
	return (c);
}

void	printlist(t_list *head)
{
	t_list	*temp = head;

	while (temp != NULL)
	{
		printf("value: %d\n", *((int *)temp->content));
		temp = temp->next;
	}
}


int	main(void)
{
	//test for strmapi
	//printf("\n Test for ft_lstmapi")
	
	char	s[] = "abcde";
	
	printf("ft_strmapi result for abcde is: %s\n", ft_strmapi(s, nextchar_strmapi));
	printf("\n");
	//test for striteri
	char	s1[] = "bcdef";
	
	//printf("before ft_striteri result is: %s\n", s1);
	ft_striteri(s1, nextchar_striteri);
	printf("ft_striteri result for bcdef is: %s\n", s1);
	printf("\n");
	//test for lstnew

	
	t_list	*head = NULL;
	t_list	*tmp;
	int		i;
	int		*value;

	i = 0;
	while (i <= 5)
	{
		value = malloc(sizeof(int));
		*value = i;
		tmp = ft_lstnew(value);
		tmp->next = head;
		head = tmp;
		i++;
	}
	printf("ft_lstnew result for 0-5 is: \n");
	printlist(head);
	printf("\n");
	while (head)
	{
		t_list *next = head->next;
		free(head->content);
		free(head); 
		head = next;
	}

	return (0);
}*/
//endofstrmapi