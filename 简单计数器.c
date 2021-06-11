//实战7 文件操作及其运用 简单计数器（书上193页）时间：2021.4.04
/*实验需求：一个程序的运行次数不能保存在内存中,一旦程序运行结束后,保存在内存中的数据就会丢失。
为了能够把每次程序运行的次数都记载下来, 可以采用磁盘文件或数据库来保存数据, 本项目就是通过磁盘文件的形式把程序的运行次数保存下来。
要求 :
(1)程序运行时, 打开磁盘的数据文件, 读取已运行次数。
(2)在内存中计算本次程序的运行次数。
(3)显示该程序当前运行次数。
容
(4)程序结束前, 保存运行次数到磁盘数据文件中。
(5)程序运行的效果如下*/
#include "stdio.h"              //文件处理需要
#include "stdlib.h"         //system()需要
#define FilePath "counter.dat" //数据文件的位置,可以根据实际情况修改
int readCounter(char *path);    //从文件中读取程序运行的次数
 //将当前程序运行的次数写入文件
void writeCounter(int count, char *path);
void main()
 {
	      int count = 0;        //临时变量，用于计算当前程序运行的次数
	 //从文件中读取数据，并计算当前程序运行的次数

		  count = readCounter(FilePath) + 1;

	 printf("该程序已运行:%d次\n", count);
	 printf("----------------------------------------------\n");
	 printf("下面将运行次数写入计数器文件(counter.dat)……\n");
     writeCounter(count, FilePath);  //将当前程序运行的次数写入文件
     printf("写入文件结束！\n");
	 printf("程序运行结束！\n");
	 printf("----------------------------------------------\n");
	 system("pause");              //程序暂停
 }
//从文件中读取程序运行的次数

int readCounter(char *path)
{

	 FILE *fp;                      //文件指针
	 int count; //以读的方式打开文件，如果第一次运行，返回0
	 if ((fp = fopen(path, "r")) == NULL)
	 {
		 printf("没有计数器文件：counter.dat，保存运行次数时将新建该文件!\n");
		 return 0;
	  }
	 fscanf_s(fp, "%d", &count);       //读取数据到变量count
	fclose(fp);                    //关闭文件
	return count;                  //返回运行次数
}
//将当程序运行次数写入文件
  void writeCounter(int count, char *path)
  {
	  FILE *fp;
	  if ((fp = fopen(path, "w")) == NULL)  //以写方式打开
	  {
		  printf("无法创建计数器文件文件！\n");
		  return;
	  }
	  fprintf(fp, "%d", count);         //写入数据到文件中
	  fclose(fp);                     //关闭文件
  }
  /*该程序应为fopen语句在VS2017APP上运行时不安全运行不出来，然后再网上查找安全语句，也是运行错误。
  但是在Dev上可以运行。*/