//�༶�����������
//#include<stdio.h>
//int  main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int score = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &score);
//			sum += score;
//			printf("%d ", score);
//		}
//		printf("%d\n",sum);
//	}
//	return 0;
//}
////����Ԫ�ض�λ
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n, m = 0;
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
//	for (i = 0; i < n; i++)//��λ
//	{
//		for (j = 0; j < m; j++)//��λ
//		{
//			scanf("%d ", &arr[i][j]);
//
//		}
//	}
//	scanf("%d %d", &x, &y);
//	printf("%d\n", arr[x - 1][y - 1]);
//	return 0;
//}
////�����������
//#include<stdio.h>
//int main()
//{
//	int n, m = 0;//n�����У�m������
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//������
//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n, m = 0;
//	int x = 0;
//	int y = 0;
//	int max = 0;
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
//	for (i = 0; i < n; i++)//��λ
//	{
//		for (j = 0; j < m; j++)//��λ
//		{
//			scanf("%d ", &arr[i][j]);
//
//		}
//	}
//	for (i = 0; i < n; i++)//��λ
//	{
//		for (j = 0; j < m; j++)//��λ
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];//�±�
//				x = i;//���¶���
//				y = j;//
//			}
//
//		}
//	}
//	printf("%d %d",x+1,y+1);//һ��Ҫ+1
//
//	return 0;
//}
////105 ��������ж�
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int i, j = 0;
//	int arr1[100][100] = { 0 };
//	int n, m = 0;
//	int arr2[100][100] = { 0 };
//		scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
//	for (i = 0; i < n; i++)//��λ
//	{
//		for (j = 0; j < m; j++)//��λ
//		{
//			scanf("%d", &arr1[i][j]);
//
//		}
//	}
//	for (i = 0; i < n; i++)//��λ
//	{
//		for (j = 0; j < m; j++)//��λ
//		{
//			scanf("%d", &arr2[i][j]);
//
//		}
//	}
//	for (i = 0; i < n; i++)//��λ
//	{
//		for (j = 0; j < m; j++)//��λ
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				sum++;
//			}
//
//		}
//	}
//	if (sum == m * n)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	
//	return 0;
//}
//�����Ǿ����ж�
////��������С�������궼Ϊ0
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int i, j = 0;
//	int arr1[100][100] = { 0 };
//	int n= 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	for (i = 0; i < n; i++)//��λ
//	{
//		for (j = 0; j < n; j++)//��λ
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)//��λ
//	{
//		for (j = 0; j < n; j++)//��λ
//		{
//			if (arr[i][j] != 0)
//			{
//				printf("no");
//			}
//		}	
//	}
//	if (arr[i][j] == 0)
//	{
//		printf("yes");
//	}
//	return 0;
//}
