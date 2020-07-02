- 매개변수로 입력된 정수의 기호에 따라 'N' 또는 'P'를 출력하는 함수를 작성하세요. n이 음수라면 'N'을, 양수이거나 0이면 'P'를 출력해야 합니다.
- 프로토타입은 다음과 같이 선언합니다 : `void ft_is_negative(int n)`
- ft_is_negative.c 로 작성합니다

### 풀이

```c
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
    {
        write(1, &"N", 1);
    }
    else
    {
        write(1, &"P", 1);
    }
}
```


