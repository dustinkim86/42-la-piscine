- 매개변수로 전달되는 문자를 표시하는 문자를 작성하세요
- 프로토타입은 다음과 같이 선언합니다 : `void ft_putchar(char c)`
- 문자를 표시하려면 다음과 같이 write함수를 사용해야 합니다 : `write(1, &c, 1)`
- ft_putchar.c로 저장하세요

### 풀이

```c
#include <unistd.h>
void	ft_putchar(char c)
{
    write(1, &c, 1);
}

# 과정 내에서는 vim으로 :Stdheader 하여 42 header를 달 것!
# norminette -R CheckForbiddenSourceHeader <file> 을 이용해 체크할 것
```


