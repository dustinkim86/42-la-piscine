- 컴퓨터의 MAC 주소를 표시하는 명령어를 작성하세요. 각 주소 다음에는 줄바꿈이 나타나야 합니다.
- 힌트 : man ifconfig



### 풀이

```shell
ifconfig -a link | grep eth | awk '{print $2}'

# ifconfig : 네트워크 인터페이스 설정하는 명령어
# grep : 특정 문자열을 찾을 때 사용하는 명령어
# awk : 리눅스 파일 텍스트 데이터 검사/조작/출력 명령어
```

- awk는 조건도 가능하고 다양하기 때문에 사이트 참고
    - [참고사이트](https://recipes4dev.tistory.com/171)
