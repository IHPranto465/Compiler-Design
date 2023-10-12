

%%

"hello world"	{printf("good bye");}
[0-9]	{printf("this is a digit");}
.
%%

int yywrap()
{
	return 1;
}

int main()
{
	yylex();
	

	return 0;
}