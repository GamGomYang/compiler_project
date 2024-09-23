충북대학교 소프트웨어학부 컴파일러 교과목 프로젝트



이번 프로젝트에서는 새로운 프로그래밍 언어를 구상해보고,
해당 언어의 컴파일러를 설계 하는 프로젝트였습니다.

제가 구상한 프로그래밍 언어는 감(感) 언어입니다.
제가 이러한 언어구조를 구상한이유는 제가 대학교 입학 후 처음으로 프로그래밍 언어를 접했을 때 프로그래밍 언어에 대해 애해 하기 힘들었습니다.
반복문에는 왜 for라는 글자를 쓰는지 증감연산자가 왜 필요한지 등등 프로그래밍 언어의 전반적인 이해가 어렵고, 감을 잡기가 힘들었습니다.

아마 프로그래밍 언어를 처음 접하는 분들에게는 이러한 어려움이 큰 장벽처럼 느껴질 것이고, 특히 프로그래 밍 언어를 처음 접하는 청소년들에게는 더 어렵게 느껴질 것입니다.
그래서 저는 프로그래 밍 언어를 처음 접하는 청소년기 친구들에게 조금 더 쉽고 이해를 돕기 위해서 gam Language를 고안했습니다. 




아래는 제가 고안한 프로그래밍 언어와 그 규칙에 대한 설명입니다: 




sample1.cbu: 

![image](https://github.com/user-attachments/assets/0689726c-51c0-43b1-a86d-a36ecaacf0d9)

변수 위의 샘플 코드는 변수 사용법을 보여줍니다.
할당은 ‘:=’ 기호를 사용하여 이루어지며 ‘시작’과 ‘끝’ 안쪽 부분에서 코드를 실행할 수 있고, 문장은 세미콜론(‘;’)으로 끝나야 합니다.
어린 친구들에게 조금 더 친숙하게 다가가기 위해서 변수는 숫자 문자를 지원합니다.
숫자를 나타내는 NUM 토큰과 NUMBER토큰이 각각 숫자와 문자로 매핑되어 변수를 쉽게 할당할 수 있도록 합니다.
만약 숫자로 변수를 할당하고 문자로도 변수를 할당해도 두 변수다 정확한 값으로 할당이 되어지는 것을 볼 수 있습니다. 

![image](https://github.com/user-attachments/assets/3ae39a64-058a-4ea5-9486-aab89529ecd6)

문자 할당에서 십의자리 숫자의 표현을 고안하는 것이 힘든 과정이었는데 십의자리와 일의자리를 TEN 토큰을 기준으로 나누어서 고안했습니다.




 sample2.cbu : 

 ![image](https://github.com/user-attachments/assets/817d4fe6-3d3c-4a18-9548-3c78f045a829)
연산 위의 샘플 코드는 산술 연산 수행방법을 보여줍니다.
감 언어의 산술연산자는 언어는 ‘+’, ‘더하기‘, ‘-’, ‘빼기, ‘/’, ‘나누기‘, ‘*’, ‘곱하기‘ 이렇게 한국어와 연산기호를 사용합니다.
아직 연산기호에 대해 익숙하지 않은 초등학생들을 위해 조금 친근하게 다가갈 수 있습니다. 

​


sample3.cbu : 비교

![image](https://github.com/user-attachments/assets/36736126-b0c4-4702-a66c-5414de849b71)

 sample3.cbu에서 아래에서 보는것과 같이 C/C++의 규칙을 따른 비교연산을 허용합니다. 
기호 의미 > 크다 < >= <= == != 작다 크거나 같다 작거나 같다 같다 같지 않다 논리연산에서도 초심자에게 친숙하게 접근을 하기 위해서 기호의 의미도 언어의 기능으로써의 역할을 할 수 있도록 구현하였습니다.
해당 비교문은 yacc파일의 compare 규칙에 의해 파싱되었고, 다양한 비교 연산자로 파싱하여 MakeCompareNode 함수를 통해 트리 노드를 생성합니다.





 sample4.cbu: 조건문 

 ![image](https://github.com/user-attachments/assets/d9cf9a50-1d48-4c65-8ce6-dc097410141c)
 ![image](https://github.com/user-attachments/assets/73e23e9f-de83-4ede-9b93-d509454bcaa7)


sample4.cbu는 조건문인 if문 입니다.
제가 처음 언어를 접하면서 가장 적응하기 어려웠던 점들 중 하나였습니다.
생소한 if의 법칙을 이해하기 쉽도록 각 토큰들의 정의를 이해하기 쉽도록 맵핑 하였습니다.
sample4.cbu이 예와 같이 조건문의 로직 과정을 실생활에 적용하면 조건문에 대한 이해도가 높아질 것입니다. 




sample5.cbu: 반복문 (loop)

![image](https://github.com/user-attachments/assets/56b2e1b1-39e2-4b26-9764-7fb9fc2e07dd)
![image](https://github.com/user-attachments/assets/0b1b8877-71b8-425b-aa7d-8cca1311a2d6)


 프로그래밍 언어의 어려운 부분중 하나인 반복문입니다.
 반복문도 이전 문장들과 같이 이 해도를 높이기 위해서 실생활에서 쓰이는 반복문 어휘들을 토큰에 맵핑 하였습니다.
 감 언어의 반복문의 루프는 GOTO(점프) 문에 의존합니다.
 루프는 블록 끝에서 조건을 다 시 평가하고 조건이 실패할 때까지 절차를 반복합니다.
 sample5.cbu 에서는 프로그램은 a < b 조건을 평가하여 반복 실행 전에 조건을 확인합니다. 

​

sample6.cbu : 증감연산자

![image](https://github.com/user-attachments/assets/bbddfa4a-e48c-478f-a690-5bdc9d4af888)
![image](https://github.com/user-attachments/assets/989007a5-6fb2-4988-8829-b0c0650cb1b7)


 sample6.cbu 에서는 간단한 증감연산자를 확인할 수 있습니다.
 증감연산자와 관련된 INCREASE, DECRESE case를 살펴보면 변수가 plusplus, minusminus 변수를 ‘+’, ‘-’ 하는 것 을 볼 수 있는데 해당 변수에는 1이 할당 되어져 있어 결국 INCREASE, DECRESE case를 부 를때마다 1씩 증가/감소하는 로직을 가지고 있습니다.

​


 결론 
이 프로젝트를 진행하면서 컴파일러에 대해 심층적으로 공부를 할 수 있었고 LEX 와 YACC 에 대해서 완전히 이해할 수 있었습니다.
그리고 해당 프로젝트에 수많은 아이디어를 추가 하고 싶었지만 구현의 어려움 때문에 못했다는 것을 깨닫고, 아직 많이 부족함을 느낄 수 있었던 프로젝트였습니다.
하지만 처음에는 문장구조도 이해를 못했지만 점차 개발하며 문 장구조 뿐만 아니라 다양한 트리구조들에 대해 알 수 있어서 나 자신의 성장을 볼 수 있었고
내가 구현했던 부분들이 정상적인 출력이 나오는 것을 보며 뿌듯함을 느낄수있었던 보람 찬 프로젝트 였습니다
