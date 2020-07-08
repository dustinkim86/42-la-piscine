- 00과 99 사이의 두 자릿수 숫자를 오름차순으로 출력하는 함수를 작성하세요.

- 다음과 같이 출력되어야 합니다

  ```shell
  > ./a.out | cat -e
  00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ... 97 99, 98 99>
  ```

- 프로토타입은 다음과 같이 선언합니다 : `void ft_print_comb2(void)`



### 풀이

```c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			ft_putchar((char)(i / 10) + '0');
			ft_putchar((char)(i % 10) + '0');
			ft_putchar(' ');
			ft_putchar((char)(j / 10) + '0');
			ft_putchar((char)(j % 10) + '0');
			if (i != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		i++;
	}
}
```


