//班级的输入与输出
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
////矩阵元素定位
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
//	for (i = 0; i < n; i++)//行位
//	{
//		for (j = 0; j < m; j++)//列位
//		{
//			scanf("%d ", &arr[i][j]);
//
//		}
//	}
//	scanf("%d %d", &x, &y);
//	printf("%d\n", arr[x - 1][y - 1]);
//	return 0;
//}
////序列重组矩阵
//#include<stdio.h>
//int main()
//{
//	int n, m = 0;//n代表行，m代表列
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
//最高身高
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
//	for (i = 0; i < n; i++)//行位
//	{
//		for (j = 0; j < m; j++)//列位
//		{
//			scanf("%d ", &arr[i][j]);
//
//		}
//	}
//	for (i = 0; i < n; i++)//行位
//	{
//		for (j = 0; j < m; j++)//列位
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];//下标
//				x = i;//重新定义
//				y = j;//
//			}
//
//		}
//	}
//	printf("%d %d",x+1,y+1);//一定要+1
//
//	return 0;
//}
////105 矩阵相等判定
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
//	for (i = 0; i < n; i++)//行位
//	{
//		for (j = 0; j < m; j++)//列位
//		{
//			scanf("%d", &arr1[i][j]);
//
//		}
//	}
//	for (i = 0; i < n; i++)//行位
//	{
//		for (j = 0; j < m; j++)//列位
//		{
//			scanf("%d", &arr2[i][j]);
//
//		}
//	}
//	for (i = 0; i < n; i++)//行位
//	{
//		for (j = 0; j < m; j++)//列位
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
//上三角矩阵判定
////当列坐标小于行坐标都为0
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int i, j = 0;
//	int arr1[100][100] = { 0 };
//	int n= 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	for (i = 0; i < n; i++)//行位
//	{
//		for (j = 0; j < n; j++)//列位
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)//行位
//	{
//		for (j = 0; j < n; j++)//列位
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
