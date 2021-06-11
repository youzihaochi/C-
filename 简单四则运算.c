//简单的四则运算（书上47页作业）；用程序简单实现一个四则运算的功能，要求输入列私语a+b然后回车输出a+b=c的形式，a,b,c都是整数。
//应用switch-case语句，注意break,default对switch-case语句的作用；
#include<stdio.h>
void main()
{
	int a, b;
	char op, answer = 'y';
	do
	{
		printf("--------简易计算器V1.0---------\n");//为什么要有空格？应该无空格形式也可以
		printf("请输入两个操作数和运算符:");//打印
		scanf_s("%d%c%d", &a, &op, &b);//等待输入；扫描流
		switch(op)    //注意：switch语句中每个分支意味着每次只能跳转到相应对的语句进行，
			//所以每个case选择之后都要用break结束此次分支的选择运算。
		{case'+':    //此次选择运算是简单四则运算中的加法
			printf("%d+%d=%d\n", a, b, a + b);//输出加法结果
			break;       //用于结束此次选择分支算法
		case'-':   //此次选择运算是简单四则运算中的减法
			printf("%d-%d=%d", a, b, a - b);//输出减法的结果
			break;//用于结束此次选择分支算法
			case'*'://此次选择运算是简单四则运算中的乘法
				printf("%d*%d=%d", a, b, a*b);//输出乘法结果
				break;//用于结束此次选择分支算法
			case'/'://此次选择运算是简单四则运算中的除法
				printf("%d/%d=%d", a, b, a / b);
				break;//用于结束此次选择分支算法
			default://当switch后的条件在case中没有任何满足的情况，就执行default语句（默认语句），
				//又因为default语句没有break，会执行前面的case的语句，直到遇见break，或者switch尾；
				//所以程序会按照顺序结构来执行程序
				//注意：如果default语句在所有case最后，此时可以不加break 如果default语句之后还有case语句，
				//如果不加break，则default语句执行过之后会继续下面的case语句，此时必须要在default之后加break语句，
				//不过这种default用法是不推荐的，default顾名思义是缺省情况，只有任何条件都不匹配的情况下才会执行，
				//所以应该将default语句放在所有case结束之后
				printf("输入错误的运算符,请重新输入！\n");
				break;
		}
		printf("是否还需要再次计算，如果需要，键入y,否则n:");
		answer = getch();
	} while (answer == 'y');//循环直到结束
}