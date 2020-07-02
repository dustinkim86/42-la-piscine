- 세 개의 서로 다른 숫자를 오름차순의 순서로 여러 가지로 조합한 세 자릿수 숫자를 오름차순으로 표시하는 함수를 작성하세요

- 다음과 같이 출려되어야 합니다

    ```shell
    > ./a.out | cat -e
    012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
    ```

- 789가 이미 있기 때문에 987은 나오지 않습니다
- 999는 9가 두 번 이상 반복되기 때문에 나오지 않습니다
- 프로토타입은 다음과 같이 선언합니다 : `void ft_print_comb(void)`
- ft_print_comb.c 로 작성합니다

### 풀이

```c
#include <unistd.h>

void	ft_print_comb(void)
{
    int numbers[3] = {48, 48, 48};
    
    while (numbers[0] <= 57)
    {
    	if ((numbers[0] < numbers[1]) && (numbers[1] < numbers[2]))
        {
            write(1, &numbers[0], 1);
            write(1, &numbers[1], 1);
            write(1, &numbers[2], 1);
            if (numbers[0] != 55)
            {
                write(1, &", ", 2);
            }
        }
        if (numbers[2]++ >= 57)
        {
            numbers[2] = 48;
            numbers[1]++;
        }
        if (numbers[1] == 58)
        {
            numbers[1] = 48;
            numbers[0]++;
        }
    }
}
```


