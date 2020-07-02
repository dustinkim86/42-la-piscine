- cat /etc/passwd 명령어의 출력 결과에서 주석은 삭제하고 두 번째 행부터 시작하여 다른 모든 행들은 출력하되, 각 login들 거꾸로 반전시키고 알파벳 역순으로 정렬한 후, FT_LINE1과 FT_LINE2을 포함한 그 사이의 값들만 남겨두세요. 이 때, 각 login은 ","로 구분되어야 하며 출력 결과는 "."로 끝나야 합니다.(큰따옴표 없이)

- 예) 7행과 15행 사이에서는 결과가 다음과 같아야 합니다

  ```shell
  > ./r_dwssap.sh
  sstq_, sorebrek_brk_, soibten_, sergtsop_, scodved_, rlaxcm_, rgmecived_, revreswodniw_, revressta_
  	.>
  ```

- 문제에서 제시된 순서를 엄격하게 그대로 따라주세요



### 풀이

```shell
cat /etc/passwd | grep -v ^# | awk '{if(NR % 2) print}' | rev | cut -d ":" -f7 | sort -r | awk '{if(NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]) print}' | sed 's/$/,/g' | tr "\n" " " | sed 's/$/./g'

# grep -v <pattern> : 지정한 패턴과 일치하지 않는 것만 선택
# awk '{if(NR % 2) print}' : NR % 2 == 0 인것만 선택
# rev : 한 행의 내용을 거꾸로 출력
# sort -r : 내림차순(알파벳 역순)
# awk '{if(NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]) print}' : NR이 FT_LINE1 보다 크거나 같고, NR이 FT_LINE2 보다 작거나 같은 조건만 선택
# sed 's/$/,/g' : 행 마다 붙여지는 $를 콤마(,)로 변경
# tr "\n" " " : 줄 바꿈 글자를 공백으로 변경
```


