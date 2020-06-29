- 기존에 가지고 있는 a 파일과 sw.diff 파일을 가지고 b 라는 파일을 생성하세요
- Cat -e a 로 a 파일의 내용을 보고, sw.diff 파일도 같이 본 뒤, diff된 내용의 파일이 b



### 풀이

```shell
> patch -p0 < sw.diff
> cp a b
```

- 출력 내용

  ```shell
  Episode V, A NEW H0PE It is a period of civil war$
  Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire. $
  During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the STAR DEATH, an armored space station with enough power to destroy an entire planet.$
  $
  $
  Pursued by the Empire's sinister agents,$
  Princess Mehdi races home aboard her starship, custodian of the stolen plans that can save her people and restore the dictatorship to the galaxie..$
  $
  $
  $
  $
  ```

  
