#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
#include<conio.h>
constexpr auto maphigh = 28, mapwide = 84;
struct virus
{
	int x;
	int y;
}virus;
unsigned short snakesize = 50, speed = 300, len = 4;
struct snake
{
	int x[50];
	int y[50];
	int len;//�ߵĳ���
	int speed;//�ߵ��ٶ�
}snake;
int key = 'w';//��ʼ������
void gotoxy(int x, int y);
void drawmap();
void keydown();
void creatvirus();
int snakestatus();
void startgame();
int menuselect();
void goodbye();
void introduce();
void edition();
int setup();
void respect();
int setup1();
int modifydiffculty();
void diffculty();
int customize();
void customize1();
int main()
{
	for (;;)
	{
		system("cls");//����
		switch (menuselect())
		{
		case 1://��ʼ��Ϸ
			startgame();
			break;
		case 2://����
			introduce();
			break;
		case 3://�汾
			edition();
			break;
		case 4://����
			setup1();
			break;
		case 5:
			goodbye();
			return 0;
		default:
			break;
		}
	}
}
void drawmap()//1.����ͼ
{
	//��:����    ��������(ռ�������ַ���
	srand((unsigned int)time(NULL));//����������ֵ�λ��
	int i, k;
	for (i = 0; i <= maphigh; i++)
	{
		gotoxy(0, i);
		printf("��");//��ӡ��߿�
		gotoxy(mapwide, i);
		printf("��");//��ӡ�ұ߿�
	}
	for (i = 0; i <= mapwide; i += 2)//+=2��Ϊ ��ռ�����ֽ�
	{
		gotoxy(i, 0);
		printf("��");//��ӡ�±߿�
		gotoxy(i, maphigh);
		printf("��");//��ӡ�ϱ߿�
	}
	//����
	snake.len = len;
	snake.speed = speed;
	//��ʼ���ߵ�λ��
	snake.x[0] = mapwide / 2;
	snake.y[0] = maphigh / 2;//[0]Ϊ��ͷ��λ��
	//����ͷ
	gotoxy(snake.x[0], snake.y[0]);
	printf("��");
	//������
	for (k = 1; k < snake.len; k++)
	{
		snake.x[k] = snake.x[k - 1] + 2;
		snake.y[k] = snake.y[k - 1];
		gotoxy(snake.x[k], snake.y[k]);
		printf("��");
	}
	while (1)
	{
		virus.x = rand() % (mapwide - 4) + 2;//+2,+1����먀��ռ���ַ��йأ���ռ�����ַ���1��
		virus.y = rand() % (maphigh - 2) + 1;//����ͼ���Զ��׼�
		if (virus.x % 2 == 0)
			break;
	}
	gotoxy(virus.x, virus.y);
	printf("��");
	gotoxy(mapwide + 4, maphigh);
	printf("��:%d", snakesize - snake.len);
}
void creatvirus()//2.��������
{
	if (snake.x[0] == virus.x && snake.y[0] == virus.y)
	{
		//printf("\a");//����
		snake.len++;
		srand((unsigned)time(NULL));
		while (1)
		{
			int flag = 1;
			virus.x = rand() % (mapwide - 4) + 2;//+2,+1����먀��ռ���ַ��йأ���ռ�����ַ���1��
			virus.y = rand() % (maphigh - 2) + 1;//����ͼ���Զ��׼�
		//�����Ĳ����������ߵ�����
			for (int k = 0; k < snake.len; k++)
			{
				if (snake.x[k] == virus.x && snake.y[k] == virus.y)
				{
					flag = 0;//virus�����ʵı�־
					break;
				}
			}
			if (flag == 1 && virus.x % 2 == 0)//����λ�úϷ���x����Ϊż��
			{//x�������������ֽ�Ϊ��λ�˶��ģ���virus��x����Ϊ�������Ͳ�����snake.x[k] == virus.x
				break;
			}
		}
	}
	gotoxy(virus.x, virus.y);
	printf("��");
	gotoxy(mapwide + 8, 0);//���������
	printf("W");
	gotoxy(mapwide + 6, 1);
	printf("A S D \t���п���");
	gotoxy(mapwide + 4, maphigh);
	printf("��:%d", snakesize - snake.len);
}
void keydown()//3.����
{
	int i, temp;
	if (_kbhit()) //kbhit������鵱ǰ�Ƿ��м������룬�����򷵻�һ����0ֵ�����򷵻�0
	{
		fflush(stdin);// ������뻺������ͨ����Ϊ��ȷ����Ӱ���������ݶ�ȡ
		temp = _getch();//getch:�ӿ���̨��ȡһ���ַ���������ʾ����Ļ��
		if ((temp == 'a' || temp == 'A') && (key != 'D' && key != 'd'))//����˰������������ɱ������
		{
			key = temp;
		}
		if ((temp == 'w' || temp == 'W') && (key != 's' && key != 'S'))
		{
			key = temp;
		}
		if ((temp == 's' || temp == 'S') && (key != 'W' && key != 'w'))
		{
			key = temp;
		}
		if ((temp == 'D' || temp == 'd') && (key != 'a' && key != 'A'))
		{
			key = temp;
		}
	}
	//�������һ��
	gotoxy(snake.x[snake.len - 1], snake.y[snake.len - 1]);
	printf("  ");
	for (i = snake.len - 1; i > 0; i--)
	{
		snake.x[i] = snake.x[i - 1];//��ǰ1��λ�����ڱ����2��0�����1
		snake.y[i] = snake.y[i - 1];
	}
	switch (key)//���һ���Ѿ�������ǰ�ƺ�0,1λ���غ�,���Ͻ�����Ϊ0��0
	{
	case'w':
	case'W':
		snake.y[0]--;
		break;
	case's':
	case'S':
		snake.y[0]++;
		break;
	case'a':
	case'A':
		snake.x[0] -= 2;
		break;
	case'd':
	case'D':
		snake.x[0] += 2;
		break;
	}
	gotoxy(snake.x[0], snake.y[0]);
	printf("��");
	gotoxy(mapwide + 2, 0);//���������
}
int snakestatus()//4.�ߵ�״̬
{
	if ((snake.x[0] == 0 || snake.x[0] == mapwide) || (snake.y[0] == 0 || snake.y[0] == maphigh))
		return 0;
	for (int k = 1; k < snake.len; k++)
	{
		if (snake.x[0] == snake.x[k] && snake.y[0] == snake.y[k])
			return 0;
	}
	return 1;
}
void gotoxy(int x, int y)
{//1.�ҵ�����̨�������
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	/*HANDLEΪ���  ���õ���������ڵģ������
	Windows��һ���������ڴ�Ϊ�����Ĳ���ϵͳ���ܶ�ʱ��
	���̵Ĵ�������ݲ���ȫ��װ���ڴ棬���̵�ĳһ��װ���ڴ��
	�����ܱ���������棬���ٴ���Ҫʱ����װ���ڴ档����װ��ĵ�ַ�������������ǲ�һ���ġ�
	Ҳ����˵��ͬһ�������ڴ��еĵ�ַ��仯����ô��������ô����׼ȷ�ط��ʵ������أ�Ϊ�˽��������⣬Windows�����˾����
	��ֵ�ϣ���һ��32λ�޷�������ֵ��32λϵͳ�£����߼��ϣ��൱��ָ���ָ�룻��������ϣ���Windows�и��������һ��Ψһ�ġ��̶������ID��
	�����ϣ�Windowsʹ�þ������ʶ���細�ڡ�λͼ�����ʵȶ��󣬲�ͨ������ҵ���Щ����*/
	

