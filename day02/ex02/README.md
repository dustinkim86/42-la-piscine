- 'z'부터 시작하여 알파벳을 역순으로 한 줄로 출력하는 함수를 작성하세요
- 프로토타입은 다음과 같이 선언합니다 : `void ft_print_reverse_alphabet(void)`
- ft_print_reverse_alphabet.c 로 저장하세요

### 풀이

```c
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
    int i;
    
    i = 'z';
    while (i >= 'a')
    {
        write(1, &i, 1);
        i--;
    }
}
```


