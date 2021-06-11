//一个正整数，他加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？（书上57页拓展）
#include<stdio.h>//打开头文件
int main()
{
	int i;//定义i是一个整数
	int j;//定义j是一个整数
	int k;//定义k是一个整数
	for (i = 0; i < 1000; i++)// i=0是初始化部分；i<1000是循环判断条件部分（当满足此条件时才进入执行for循环中的语句）；i++是执行完循环体语句后的操作
	{
		for (j = 0; j < 1000; j++)// j=0是初始化部分；j<1000是循环判断条件部分（当满足此条件时才进入执行for循环中的语句）；j++是执行完循环体语句后的操作
		{
			if (i + 100 == j * j)//条件语句
			{
				for (k = j; k < 1000; k++)// k=0是初始化部分；k<1000是循环判断条件部分（当满足此条件时才进入执行for循环中的语句）；k++是执行完循环体语句后的操作
				{
					if (i + 168 == k * k)//条件语句
					{
						printf("%d\n", i);//提示语句
					}
				}
			}
		}
	}
	return 0;//安全返回
}
/*for语句循环扩展：for循环是编程语言中一种循环语句，而循环语句由循环体及循环的判定条件两部分组成，
其表达式为：for（单次表达式;条件表达式;末尾循环体）{中间循环体；}。
1.语句最简形式为:for (; ; )
2.一般形式为：for（单次表达式; 条件表达式; 末尾循环体）
{
   中间循环体；
 }
其中，表示式皆可以省略，但分号不可省略，因为“; ”可以代表一个空语句，省略了之后语句减少，即为语句格式发生变化，则编译器不能识别而无法进行编译。
[1]for循环小括号里第一个“; ”号前为一个为不参与循环的单次表达式，其可作为某一变量的初始化赋值语句, 用来给循环控制变量赋初值；
也可用来计算其它与for循环无关但先于循环部分处理的一个表达式。“; ”号之间的条件表达式是一个关系表达式，其为循环的正式开端，当条件表达式成立时执行中间循环体。
执行的中间循环体可以为一个语句，也可以为多个语句，当中间循环体只有一个语句时，其大括号{}可以省略，
执行完中间循环体后接着执行末尾循环体。
执行末尾循环体后将再次进行条件判断，若条件还成立，则继续重复上述循环，当条件不成立时则跳出当下for循环*/