#include <stdio.h>

int main(void)
{
	int nData = 10;

	//�����Ͱ� ����Ű�� ����� ���ȭ �Ѵ�.
	const int *pnData = &nData;
	//������ ���� ��ü�� ���ȭ �Ѵ�.
	int* const pnNewData = &nData;

	//�Ʒ� �� ������ ��� ����.
//	*pnData = 20;
//	pnNewData = NULL;
	return 0;
}


