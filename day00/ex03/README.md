- 유효한(만료되지 않은) Kerberos 티켓이 있는지 확인하세요. 만약 없다면 지금 당장 하나 만들어요!
- Kerberos 티켓이 하나라도 있으면 모든 티켓의 목록을 작성하여 klist.txt라는 파일로 저장하세요.



### 풀이

```shell
> /usr/bin/klist -f
```

- 출력되는 구문

  ```shell
  Credentials cache: API:62728987-D360-4DDA-96DC-D6A55C52C553
          Principal: junhokim@42SEOUL.KR
  
    Issued                Expires             Flags    Principal
  Jun 29 15:39:23 2020  Jun 30 01:39:20 2020  FPIA   krbtgt/42SEOUL.KR@42SEOUL.KR
  ```

```shell
> nano klist.txt
> # 파일안에 복사한 출력되는 구문을 붙여넣기 후 저장
```

  
