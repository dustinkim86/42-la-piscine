- 알파벳을 소문자로 'a'부터 순서대로 한 줄로 표시하는 함수를 작성하세요.
- 프로토타입은 다음과 같이 선언합니다 : `void ft_print_alphabet(void)`
- ft_print_alphabet.c 로 저장하세요



### 풀이

```c
#include <unistd.h>

void	ft_print_alphabet(void)
{
    int i;
    
    i = 'a';
    while (i <= 'z')
    {
        write('%c', i);
        i++;
    }
}
```


