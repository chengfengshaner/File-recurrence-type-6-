//��ӡ1000��2000��֮�������
#include <stdio.h>
int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++)
	{
		//�ܱ�4 400����������100����
		if (y % 4 == 0)
		{
			if (y % 100 != 0)//! - ��
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
//����ʹ�ò��� - && �ͻ��� - || �������򻯹���
//if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//{
//	printf("%d ", y);
//}