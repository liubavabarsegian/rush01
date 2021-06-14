#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>  //delete later

typedef struct s_word
{
	int key;
	char *value;	
} t_word;

int	lines_num(char *file_name)
{
	
	int i;
	char c;
	int file;

	file = open(file_name, O_RDONLY);
	i = 0;
	while (file)
	{
		if (read(file, &c, 1) == 0)
			break;
		else
		{
			if (c == ':')	
				i++;
		}		
	}
	return(i);
}

char *copy_before(char *dest, char *src, char j)
{
	int i;
	char c;

    i = 0;
	while (src[i] != j)
	{
		c = src[i];
		dest[i] = c;
		i++;
	}
   return (dest);
}

char *copy_after(char *dest, char *src, char b)
{
	int i;
	int j;
	int new;
	
	i = 0;
	new = 0;
	while (src[i])
	{
		if (src[i] == b)
		{
			j = i + 2;
			while (j > i && src[j])
			{
				dest[new] = src[j];
				new++;
				j++;
			}
		}
		i++;
	}
	return (dest);
}

void	each_line(char *file_name)
{
	int file;
	int i;
	char c;
	file = open(file_name, O_RDONLY);
	// t_word **lines;
	// lines = malloc(lines_num(file_name));
	i = 0;
	while (read(file, &c, 1))
	{
		write(file, &c, 1);
	}


	// return (lines);

}


// void creating_tab(t_word *tab)
// {
	
	
// }

// tab[0].key = 0;
// tab[0].value = "one";
// char *c;
// c = tab[0].value;
// printf("%s\n", c);


int main()
{
	char *file_n;
	// int file;

	// file_n = "dict.txt";
	// file = open(file_n, O_RDONLY);
	
	// //t_word tab[lines_num(file_n)];

	// char dest[0];
	printf("%s\n", each_line(file_n));
	return(0);
}