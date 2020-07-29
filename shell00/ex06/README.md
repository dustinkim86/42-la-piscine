- 존재하는 파일들 중에서 여러분의 git 저장소가 무시하는 파일들을 나열하는 간단한 쉘 스크립트를 작성하세요(git_ignore.sh 파일 생성)

  - 예시

    ```shell
    > bash git_ignore.sh | cat -e
    .DS_Store$
    mywork.c~$
    ```



#### 풀이

```shell
> nano git_ignore.sh
> # git ls-files --o --i --exclude-standard
> # --o : others, 추적되지 않은 파일 표시
> # --i : ignored, 출력에서 무시된 파일만 표시
> # --exclude-standard : 각 디렉토리에 .gitignore 및 사용자의 글로벌 제외 파일 추가
> # 작성 후 저장
```
