#include <stdio.h>/*头文件名(一定不能缺少)*/
int main()
{
	int sum = 0, b;			   /* int是参数类型，用来定义参数，int定义的是整型，代表着sum和b都是整数，
					int是c语言的固定语言，不可更改，sum和b是自己定义的可以修改 */
	for (b = 1; b <= 100; b++) /*这个是for循环语句，里面放着的是条件，代表初始b=1,
						结束b=100,b++表示b=b+1，整个语句的意思是b从1开始一直加到100结束*/
	{
		sum += b; /*循环执行语句，每循环一次便执行这个语句一次，sum+=b等价于sum=sum+b,
				同样sum*=b等价于sum=sum*b，以此类推加法和除法*/
	}
	printf("1+2+...+100=%d", sum); //输出语句
	return 0;					   //返回数，默认返回0
}
// 班助书包姐发到群里