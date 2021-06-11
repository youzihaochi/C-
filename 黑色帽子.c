/*
描述
        最近发现了一个搞笑的游戏，不过目前还没玩过。一个舞会上，每个人头上都戴着一顶帽子，帽子只有黑白两种，黑的至少有一顶。每个人都能看到别人帽子的颜色，可是看不见自己的。主持人先让大家看看别人头上戴的是什么帽子，然后关灯，如果有人认为自己戴的的黑色帽子，就打自己一个耳光（不违背道德，都很自觉，而且不许打别人的哦），开灯，关灯，开灯……。因为都不想打自己耳光，所以不确定的情况下都不会打自己的，现在有n顶黑色帽子，第几次关灯才会听到有人打自己耳光？
输入
第一行只有一个整数m（m<=100000),表示测试数据组数。
接下来的m行，每行有一个整数n(n<=100000000)，表示黑色帽子的顶数。
输出
输出第几次关灯能听到耳光声，每组输出占一行。
样例输入
1
2
样例输出
2
*/
#include <stdio.h>

main()
{
	int m;
	
	scanf("%d",&m);
	while(m--)
	{
		long n;
		scanf("%ld",&n);
		printf("%ld\n",n);
	}
	
	return 0;
}
/*
PS:
	（提示：参加舞会的人不知道黑帽子的数量，参加舞会的人数无关）
	假设有2顶黑帽子，你戴着一顶，这时候你只能看到别人戴了一顶，
	而黑灯之后又没听见抽耳光，那么你不由得反思，为什么呢~
	原因很明显，自己头上正是另一顶黑的出油的乌纱帽，那么这次黑灯		之后，出于道德层面的考虑，你就会毫不犹豫的给自己一个大耳瓜。
	设想, 就是第二次两个戴黑帽子的都违背了道德的约束，知道自己戴了		黑帽子，但不抽自己耳光，那么第三次灯灭后就会听到全部人此起彼		伏的耳光声，这真是极好的~ 不过被发现的话一顿毒打是免不了的。
*/
