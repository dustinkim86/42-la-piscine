- 다음의 파일과 디렉토리들을 만들어라. 뭐든 해서 ls -l 명령어를 실행시켰을 때의 결과가 아래와 같이 보이면 됨

  ```shell
  > ls -l
  
  drwx--xr-x 2 XX XX XX Jun 1 20:47 test0
  -rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1
  dr-x---r-- 2 XX XX XX Jun 1 22:45 test2
  -r-----r-- 2 XX XX 1 Jun 1 23:44 test3
  -rw-r----x 1 XX XX 2 Jun 1 23:43 test4
  -r-----r-- 2 XX XX 1 Jun 1 23:44 test5
  lrwxr-xr-x 1 XX XX 5 Jun 1 22:20 test6 -> test0
  ```

- 위의 작업을 다 했으면 tar -cf exo2.tar * 를 실행하여 제출할 파일을 생성하라



### 풀이

```shell
> mkdir test0
> nano test1 # 띄어쓰기 3칸 후 저장
> mkdir test2
> nano test3 # 띄어쓰기 1칸 저장 후 다시 들어가서 모든 칸/줄 삭제
> nano test4 # 띄어쓰기 1칸 후 저장
> ln test3 test5 # ln : 링크파일 생성(하드링크)
> ln -s test0 test6 # ln -s : 심볼릭 링크
> chmod 715 test0
> chmod 714 test1
> chmod 504 test2
> chmod 404 test3
> chmod 641 test4
> chmod 404 test5
> tar -cf exo2.tar *
```


