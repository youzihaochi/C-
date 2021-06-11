//输入成绩，判断等级。根据用户输入的期末考成绩，输出相应的成绩评定信息。（拓展项目书上55页）
//90以上为优，80-90为良，60-80为中，低于60为差
#include <stdio.h>//打开头文件
int main()
{
	float mark;
	printf("input your score:\n");  //提示用户输入成绩
	scanf_s("%f", &mark);
	//用if语句来分类输出相应成绩评定信息
	if (mark >= 90)
		printf("优\n");  //若90以上，则输出优
	else if (80 <= mark && mark <= 90)  //&&是逻辑和
		printf("良\n");  //80-90，输出良
	else if (60 <= mark && mark <= 80)
		printf("中\n");  //60-80，输出中
	else if (mark < 60)
		printf("差\n");  //低于60，输出差
	return 0;  //安全返回
}
