1. chamar a biblioteca <unistd.h>
2. chamar o int main e seus parametros (int argc, char *argv[])
3. definir sobre a variavel i (int e igual a 0)
4. definir as condicoes if (argc >= 2) e else que eh write(1, "a", 1)
5. definir as condiceos while (if e break) e else que eh write (1, "\n", 1)
6. em while, em if (argv[1][i] == "a") definir write(1, "\n", 1) e depois um break porque ja encontrou o a
7. contador i++ dentro do while!!!
8. cuidado com os colchetes.




#include <unistd.h>

int main(int argc, char *argv[])
{

	int i;
	i = 0;

	if (argc >= 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a", 2);
				break;
			}	
			i++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "a", 1);
	}
}
