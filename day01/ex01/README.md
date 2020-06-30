- 환경변수 FT_USER에 포함된 login이 소속되어 있느 그룹의 목록으 표시한 명령어를 작성하세요. 공배 없이 쉼표로 분리되어야 합니다.
- Example
  - FT_USER=nours의 경우, 결과는 "god,root,admin,master,nours,bocal" 여야 합니다.(쌍따옴표 제외)
    ```shell
    > ./print_groups.sh
    god,root,admin,master,nours,bocal$>
    ```
  - FT_USER=daemon의 경우, 결과는 'daemon,bin'여야 합니다(쌍따옴표 제외)
    ```shell
    > ./print_groups.sh
    daemon,bin$>
    ```

### 풀이

```shell
groups ${FT_USER} | tr ' ' ',' | cat -e

# groups : 현재 쉘에 접속해 있는 유저가 속해 있는 그룹을 출력
# tr : translate, 지정한 문자를 바꿔주거나(위와 같이 공백을 콤마로 변경) 삭제(tr -d)하는 명령
```


