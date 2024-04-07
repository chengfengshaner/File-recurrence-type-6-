//打印1000到2000年之间的闰年
#include <stdio.h>
int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++)
	{
		//能被4 400整除，不被100整除
		if (y % 4 == 0)
		{
			if (y % 100 != 0)//! - 非
			{
				printf("%d ", y);
				count++;
			}
		}
		if (y % 400 == 0)
		{
			printf("%d ", y);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}
//可以使用并且 - && 和或者 - || 操作符简化过程
//if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//{
//	printf("%d ", y);
//}