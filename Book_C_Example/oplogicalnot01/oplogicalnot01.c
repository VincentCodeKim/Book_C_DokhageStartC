#include <stdio.h>

int main(void)
{
	int nInput = 0, bResult = 0;

	scanf("%d", &nInput);
	//����ڰ� �Է��� ���� 0�� �ƴϸ� ���̴�.
	//�׷��Ƿ� ����ڰ� 0�� �Է��ϸ� �����̳�, !������ ������ '��'�� �ȴ�.
	bResult = !nInput;
	printf("Result : %d (1:True, 0:False)\n", bResult);
	return 0;
}
