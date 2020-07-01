- 자신의 git 저장소의 커밋 중 마지막 5개의 ID를 표시하는 쉘 스크립트를 git_commit.sh 파일에 작성하세요

- `bash git_commit.sh | cat -e` 로 출력되면 됩니다.

  - 예시

    ```shell
    baa23b54f0adb7bf42623d6d0a6ed4587e11412a$
    2f52d74b1387fa80eea844969e8dc5483b531ac1$
    905f53d98656771334f53f59bb984fc29774701f$
    5ddc8474f4f15b3fcb72d08fcb333e19c3a27078$
    e94d0b448c03ec633f16d84d63beaef9ae7e7be8$
    ```



### 풀이

```shell
> nano git_commit.sh
> # git rev-list --max-count=5 HEAD 저장 후 출력
# rev-list : 어떤 커밋이 특정 변경을 일으켰는지 검색하는 명령어
# --max-count=n : 출력되는 커밋 수를 제한하는 명령어 (-n <number> 또는 -<number> 로도 가능)
# HEAD : 브랜치의 이름
```


