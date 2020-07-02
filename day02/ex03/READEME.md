- 모든 자릿수를 오름차순으로 한 줄로 출력하는 함수를 작성하세요
- 프로토타입은 다음과 같이 선언합니다 : `void ft_print_numbers(void)`
- ft_print_numbers.c 로 작성하세요

### 풀이

```c
#include <unistd.h>

void	ft_print_numbers(void)
{
    char number;
    
    number = 48;
    while (number <= 57)
    {
        write(1, &number, 1);
        number++;
    }
}
```


