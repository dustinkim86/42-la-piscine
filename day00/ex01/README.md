- testShell00 라는 이름의 파일을 만들고 출력결과가 다음과 같도록 하라

  ```shell
  > ls -l
  
  -r--r-xr--x 1 XX XX 40 Jun 1 23:42 testShell00
  ```

- 이전 단계 완료 후 다음 명령어를 실행하여 제출할 파일을 생성
  - tar -cf testShell00.tar testShell



### 풀이
```shell
> nano testShell00
> 40byte 만큼 임의의 데이터를 생성
> chmod 455 testShell00
> touch -t 202006012342 testShell00 으로 시간 변경
> tar -cf testShell00.tar testShell
```


### 실행 테스트
```shell
> tar -xvf testShell00.tar
> ls -l
```
