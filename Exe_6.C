#define CRT_NO_WARNINGS
#include<stdio.h>

int pack4Chars2Int(char c1, char c2, char c3, char c4)
{
	int res = 0;
	int temp = 0;
	temp |= c1;
	temp = temp << 24;
	res |= temp;
	temp = 0;
	temp |= c2;
	temp = temp << 16;
	res |= temp;
	temp = 0;
	temp |= c3;
	temp = temp << 8;
	res |= temp;
	res |= c4;
	return res;
}

void main()
{
	char a = 'a';
	char b = 'b';
	char c = 'c';
	char d = 'd';
	int res = pack4Chars2Int(a, b, c, d);

}

int checkEvenParity(short input)
{
	int res = 0;
	short mask = 1;

	while (mask != 0)
	{
		if ((mask & input) == mask)
			res++;
		mask <<= 1;
	}
	if (res % 2 == 0)
		return TRUE;
	return FALSE;
}

void main()
{
	char a = 'a';
	char b = 'b';
	char c = 'c';
	char d = 'd';
	int res = pack4Chars2Int(a, b, c, d);
	short num = -14580;
	res = checkEvenParity(num);
	num = 24;
	res = checkEvenParity(num);

	int res = pack4Chars2Int(a, b, c, d);
	short num = -14580;
	res = checkEvenParity(num);
	num = 24;
	res = checkEvenParity(num);
}