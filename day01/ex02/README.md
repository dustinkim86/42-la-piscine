- 현재 디렉토리와 그 하위 디렉토리들에서 파일 이름이 '.sh'로 끝나는(따옴표 제외) 모든 파일을 찾는 명령어를 작성하세요. .sh를 제외한 파일 이름만을 표시해야 합니다.

- 다음은 출력된 결과의 예입니다.

    ```shell
    > ./find_sh.sh | cat -e
    find_sh$
    file1$
    file2$
    file3$
    >
    ```



### 풀이

```shell
find . -name "[^*.sh]"

# . : 해당 디렉토리의 하위 디렉토리를 전부 포함하여 검색
# -name XX : XX 이름 또는 조건을 가진 파일명을 검색
# "[^*.sh]" : .sh로 끝나는 파일명을 제외한 전부
```

[정규표현식 참고사이트](https://zzsza.github.io/development/2017/12/13/linux-3/)


