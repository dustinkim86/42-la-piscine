- '\\"?! 를 밑으로 하는 숫자를 FT_NBR1 에서 가져오고 mrdoc 를 밑으로 하는 숫자를 FT_NBR2 에서 가져온 후, 두 수의 합을 구해 gtaio luSnemf 이 밑인 숫자로 나타내시오.

- 예시1

    ```shell
    FT_NBR1=\'?"\"'\
    FT_NBR2=rcrdmddd
    ```

- 합

    ```shell
    Salut
    ```

- 예시2

    ```shell
    FT_NBR1=\"\"!\"\"!\"\"!\"\"!\"\"!\"\"
    FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo
    ```

- 합

    ```shell
    Segmentation fault
    ```



### 풀이

```shell
echo $FT_NBR1 + $FT_NBR2 | tr "\'\\" "01" | tr '\"\?\!' '234' | tr "mrdoc" "01234" | xargs echo "ibase=5; obase=23;" | bc | tr "0123456789ABC" "gtaio luSnemf"

# echo $FT_NBR1 + $FT_NBR2 : 문자 그대로 변수1 + 변수2 로 출력
# tr "\'\\" "01" : '는 0, \는 1로 변환
# tr '\"\?\!' '234' : "는 2, ?는 3, !는 4로 변환
# tr "mrdoc" "01234" : mrdoc 순서대로 01234로 변환
# xargs : 삭제, 복사 등을 진행할 수 있게 도움을 주는 명령어, 파이프 이전의 내용을 인자로 받음(tr로 변환한 데이터까지를 인자로 받음)
# echo "ibase=5; obase=23;" : 진수 변환 명령어(ibase = input base / obase = output base)
# 즉, 5진수의 input data를 13진수로 변환하여 output(5진수 기준으로 23이 13진수)
# bc : 쉘 계산기(사칙연산 등을 해 주는 명렁어)
# tr "0123456789ABC" "gtaio luSnemf" : 13진수 기준 숫자를 문자로 변환
```



[bc 명령어 참고사이트](https://zetawiki.com/wiki/리눅스_쉘_계산기_bc)

<br/>

[진수 변환 참고사이트](http://coffeenix.net/board_view.php?cata_code=0&bd_code=1721&bpage=)

<br/>

[xargs 참고사이트](http://www.dreamy.pe.kr/zbxe/CodeClip/164220)


