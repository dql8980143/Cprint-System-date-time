#include <stdio.h>
#include <Windows.h>
#include <time.h>

int main(void)
{
	char function[3]={'1','2','3'};
	char selection;

	while(1)
	{
		puts("1-显示系统日期,2-显示系统时间,3-退出");
		printf("请输入功能编号:");
		selection=getchar();
		switch(selection)
		{
		case '1':
			void OutputSystemdate();
			OutputSystemdate();
			break;
		case '2':
			void OutputSystemtime();
			 OutputSystemtime();
			 break;
		case '3':
			exit(0);
		}
	}

	return 0;
}

void OutputSystemdate()
{
	struct tm* p=NULL;
	time_t nowdate;
	time(&nowdate);
	p=localtime(&nowdate);
	printf("系统日期:%d-%d-%d\n",p->tm_year,p->tm_mon,p->tm_mday);
}

void OutputSystemtime()
{
	struct tm* p=NULL;
	time_t nowtime;
	time(&nowtime);
	p=localtime(&nowtime);
	printf("系统时间:%d-%d-%d\n",p->tm_hour,p->tm_min,p->tm_sec);
}



