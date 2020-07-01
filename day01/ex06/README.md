- ls -l 명령어의 첫 번째 행부터 시작하여 한 줄 걸러 보여주는 명령어를 작성하세요.
- skip.sh 파일로 저장



### 풀이

```shell
ls -l | awk '{if(NR % 2) print}'

# awk : 데이터를 조작하고 리포트를 생성하기 위해 사용하는 명령어
# awk 형식
# awk 'pattern' filename / awk '{action}' filename / awk 'pattern {action}' filename
# NR 변수 : 각 레코드들의 번호는 awk의 빌트인 변수 NR에 저장된 다음 NR의 값이 하나씩 증가함
# if문 : '{if (condition) action}'

# 즉, NR변수를 2로 나눈 나머지가 0인 것들만 ls -l하라는 것!
# (위의 정답에서는 if 조건에 ==0 이 생략되어 있으나 True인 값을 자동으로 인식하는 것 같음)
```


[awk 참고사이트1](https://zzsza.github.io/development/2017/12/20/linux-6/)
[awk 참고사이트2](https://struggler.tistory.com/246)
