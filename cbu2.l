%{
#include <string.h>
#include "cbu2.h"
#define MAXSYM	100
#define	MAXSYMLEN	20
char symtbl[MAXSYM][MAXSYMLEN];
int lineno=1;
int insertsym();
int maxsym=0;
char s[MAXSYMLEN];
int temp;

#pragma warning(disable : 4996)


%}
sp		[ \t]
ws		{sp}+
nl		\n
eletter	[A-Za-z]
hletter	[\xb0-\xfe][\xa0-\xfe]
letter	({eletter}|{hletter})
digit	[0-9]
id		{letter}({letter}|{digit})*
%%
{ws}	{/* do nothing */}
{nl}	{lineno++; }
[ \t\n]+             ; // Ignore whitespace


더하기	{return(ADD); }
빼기		{return(SUB); }
곱하기  {return(MUL); }
나누기  {return(DIV); }
나머지연산 { return(MOD); }

:=		{return(ASSGN); }
;		{return(STMTEND); }

시작	{return(START); }
끝		{return(END); }

같나요    { return(EQUAL); }
다르나요    { return(NOTEQUAL); }
크거나같나요   { return(GREATEREQUAL); }
큰가요    { return(GREATER); }
작나요    { return(LESS); }
작거나같나요 { return(LESSEQUAL); }

"+="   { return(ASSGNADD); }
"-="   { return(ASSGNSUB); }
"*="   { return(ASSGNMUL); }
"/="   { return(ASSGNDIV); }

조건문시작    { return(LEFTPAR); }
조건이    { return(LEFTPAR); }
조건문끝     { return(RIGHTPAR); }
라면     { return(RIGHTPAR); }
일때     { return(RIGHTPAR); }
보다     { return(RIGHTPAR); }
실행문시작     { return(LEFTBLOCK); }
이것을     { return(LEFTBLOCK); }
실행문끝     { return(RIGHTBLOCK); }
실행해주세요     { return(RIGHTBLOCK); }

if    { return(IF); }
else  { return(ELSE); }
for   { return(FOR); }

만약에    { return(IF); }
아니라면  { return(ELSE); }
반복   { return(FOR); }

루프 { return(WHILE); }

같다    { return(CONDEQUAL); }
가같다    { return(CONDEQUAL); }

같지않다    { return(CONDNOTEQUAL); }
가같지않다    { return(CONDNOTEQUAL); }

크거나같다   { return(CONDGREATEREQUAL); }
가크거나같다   { return(CONDGREATEREQUAL); }

크다    { return(CONDGREATER); }
가크다    { return(CONDGREATER); }

작다    { return(CONDELESS); }
가작다    { return(CONDELESS); }
는작다    { return(CONDELESS); }

작거나같다 { return(CONDLESSEQUAL); }
가작거나같다 { return(CONDLESSEQUAL); }

하나   { return(ONE); }
둘   { return(TWO); }
셋   { return(THREE); }
넷   { return(FOUR); }
다섯   { return(FIVE); }
여섯   { return(SIX); }
일곱   { return(SEVEN); }
여덟   { return(EIGHT); }
아홉   { return(NINE); }
영   { return(ZERO); }

일   { return(ONE); }
이   { return(TWO); }
삼   { return(THREE); }
사   { return(FOUR); }
오   { return(FIVE); }
육   { return(SIX); }
칠   { return(SEVEN); }
팔   { return(EIGHT); }
구   { return(NINE); }
십   { return(TEN); }

"++"   { return(INCREASE); }
"--"   { return(DECREASE); }
증가   { return(INCREASE); }
감소   { return(DECREASE); }

{id}	{temp=insertsym(yytext); yylval=MakeNode(ID, temp); return(ID);}
{digit}+		{sscanf(yytext, "%d", &temp); yylval=MakeNode(NUM, temp); return(NUM);}
.		{printf("invalid token %s\n", yytext); }
%%

int insertsym(s)
char *s;
{
int i;

	for(i=0;i<maxsym; i++) {
		if(strcmp(s, symtbl[i])==0) return(i);
		}
	if (i<MAXSYM-1) {
		strcpy(symtbl[maxsym],s);
		maxsym++;
		return(maxsym-1);
		}
	else
		{printf("symbol table overflow\n");}
	return(0);
}

yywrap() {}