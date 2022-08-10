#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include"game.h"

void menu()
{
	printf("**********************************\n");
	printf("*********  1.  play  ****************\n");
	printf("*********  0.  exit   ****************\n");
	printf("**********************************\n");
}
void game()
{
	//如何存储雷
	//1.布置好的雷的信息
	char mine[ROWs][COLs] = { 0 };
	//2.排查出的雷的信息
	char show[ROWs][COLs] = { 0 };
	//初始化
	InitBoard(mine, ROWs, COLs, '0');
	InitBoard(show, ROWs, COLs, '*');
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择>:\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}