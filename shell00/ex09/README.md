- ft_magic라는 이름의 마법의 매직파일을 만들어주세요. 이 마법의 파일은 42 file 형식의 파일들을 탐지할 겁니다. 아 42 file 형식은 42번째 바이트에 "42" 문자열이 나오는 것을 뜻해요!
- 힌트 : man file



#### 풀이

```shell
41 string 42 42 file
# magic 파일의 엔트리는 4개의 필드로 구성됨
# 처음 혹은 이전 레벨로부터의 오프셋 값 | 데이터 종류 | 값 | 출력 문자열
# ex) 0 string \177ELF ELF
# 0 : 0번째 위치
# string : 문자열 타입
# \177ELF : 찾고자 하는 값
# ELF : 찾게되면 출력되는 문자열

# 즉, 41번째(컴퓨터의 인덱스는 0부터이므로)의 문자열이 "42"라면 42 file이라고 출력하라
```



[참조사이트](https://devanix.tistory.com/180)
