#include <iostream>         //头文件
using namespace std;
#include <string>  
#include <ctime>  
//单行注释
/*多行注释
    1，#dedine  宏常量
	2，const修饰的变量 也是常量




*/                
//变量创建的语法  数据类型int 变量名 = 变量初始值
//#define Day 7

int main() {

	//int a = 10;
		//代码含义是输出引号里的内容
	//Day = 14; //false  , 因为Day 是常量 修改就报错
//	const int month = 12;

//	cout << "一年总共有：" << month << " 个月" << endl;
	//不要用关键字给变量or常量起名 像int int = 歧义

/* 标识符命名规则
1，标识符不能是关键字   
2，只能由字母 数字 下划线 组成
3，区分大小写  a 不= A
4，第一个字符必须是字母or 下划线-
起名最好望文生义*/

//2.1  整型 （整数）  占用内存空间不同    ? 必须指定 or 无法分配内存   意义 ：合理分配内存
//1，短整型  short   -2^15~2^15-1      -32768~32767   字节 2byte

//2, 整型    int  -2^31~2^31-1                            4byte

//3，长整型    long     31   31                            4
  
//4，长长整型  long long     63  63                        8


/*2.2      sizeof关键字  求数据类型占用内存
*     语法 ： sizeof(数据类型 /变量)
*          short num1 = 10;                      (num1)
*          cout << "short 占用内存为： " << sizeof(short) << endl;
*/

/*2.3  实型（浮点型）  表示小数
1 单精度  float      4byte
2  双精度  double    8           默认输出一个小数显示6位有效数字
*/
//	float f1 = 3.1415926f;

//	cout << "f1 = " << f1 << endl;

	//科学计数法  float f2 = 3e2;    //3*10^2;
//	                         3e-2     即 3*0.1^2;


	//2.4    字符型  显示单个字符          1byte 
	//      语法： char ch = 'a';           (单引号‘’   内只能有一个字符
	 //            cout << ch << endl;
	//     对应ASCII编码       a - 97   后面依此类推
	//                         A - 65
/*2.5 转义字符    表示不能显示的ASCII字符
  1 换行符  \n
       cout << "hello world\n"
  2 反斜杠\\ 输出一个\            成倍  输出2个要\\\\ 4个

  3 水平制表符    \t       作用   输出左对齐
       */

	//2.6字符串型
	//1， C风格字符串       加[]        双引号“”
	//     char str[] = "hello world"；
//		 cout << str << endl;                  (小写L
 //    2， CPP风格字符串
//	     string str2 = "hello world";             记住要改头文件iostrem为string
	//	 cout << str2 << endl;
	     
	//2.7布尔类型 bool  
	//true 1
//	false 0
	

//	1 创建bool数据类型
//	bool flag = true;//真
//		 flag = false //假
//	cout << flag << endl;              //本质 1真 0假


//2.8 数据的输入  从键盘获取数据     关键字cin
	//语法 cin >> 变量
 /*  int a = 0;
	cout << "请给a赋值： " << endl;
	cin >> a;
	cout << "a = " << a << endl; */
// 3.0  运算符
// 3.1  算数运算符  
/*  +
    -
	*
	/             两个整数相除 结果依然是整数 小数部分去除   两个小数可以相除
	%    取模（取余）           0不能取模 分母   两个小数不能取模运算                           
	++ 前置递增   让变量+1             先+1 再运算
	++ 后                   区别       先运算 再 +1
	-- 前置递减                        同理
	-- 后

	*/
	//int a1 = 10;
	//int b1 = ++a1 * 10;
	//cout << "a1 = " << a1 << endl;     输出a1=11   b1 = 110
	//cout << "b1 = " << b1 << endl;
	//3.2 赋值运算符 
	//   =
	//  +=       a += 2  //a = a +2
	//  -=
	//  /=           同理
	//  %=       
//3.3 比较运算符             输出0 or 1
//==      相等于
//！=     不等于
//<
//>
//<=
//>=
 

  //      int a = 10;
		//int b = 20;
		//cout << (a == b) << endl;          记得打括号  优先级

//3.4 逻辑运算符   根据表达式的值返回真值or假值
//    ！  非         取反         ！！双重否定
//    &&  与              同真为真，其他全假
//    ||  或              同假为假，其他全真
//

//4 程序流程结构
//4.1选择结构    
//4.1.1 if语句
          //1单行       2多行 esle   3多条件 if {条件1}  esle if {条件2}...esle {都不满足}
//4嵌套if语句
 /*    int score = 0;
cout << "请输入高考分数： " << endl;
cin >> score;
cout << "您的高考分数为： " << score << endl;
if (score >= 600)     //不要加分号;  白写
{
	cout << "恭喜你考上一本！" << endl;
	if (score > 700) {
		cout << "您能考入北京大学" << endl;
	}
	else if (score > 690) {
		cout << "您能考上清华大学" << endl;
	}
	else {
		cout << "您能考上人民大学" << endl;
	}
}
else if ( score > 500) {  //多行
	cout << "恭喜你考上二本！" << endl;
}
else if (score > 400)
{
	cout << "恭喜你考上三本！" << endl;
}
else
{
	cout << "很遗憾，你未考上大学" << endl;
}       */


//4.1.2 三目运算符    三个变量a b c 
  ///           （ 表达式1 ？表达式2 ： 表达式3）
	//                          返回到2 3 的是变量 ，可以继续进行赋值
	// 
//4.1.3   switch 语句
   //给电影打分   9~10 经典  7~8 非常好  5~6 一般  <5 烂片
/*cout << "请给此电影打分" << endl;
int score = 0;
cin >> score;
cout << "您打的分数为： " << score << endl;
switch (score)
{
case 10:  //不能区间
	cout << "你认为此电影是经典电影 " << endl;
	break; //退出当前分支          不写会一直执行

}   */
//if 和switch 区别？
// switch     pros  结构清晰 执行效率高
//            cons  只能判断整型 字符型， 不能判断区间


 

// 4.2 循环结构       注意避免死循环
//4.2.1 while循环语句    只要真，就循环
/*int num = 0;

while (num < 10 ）//必须有退出条件
{
	cout << num << endl;
	num++;
} */

 //          int num = rand() % 100 + 1; //生成0 + 1 ~99+1 随机数   伪随机
 //添加随机数种子   利用的当前系统时间生成  

   srand((unsigned int)time(NULL));   //需要头文件ctime
int num = rand() % 100 + 1;

int val = 0;

while (1)
{
	cin >> val;
	if (val > num)
	{
		cout << "猜测过大" << endl;

	}
	else if (val < num)
	{
		cout << "猜测过小" << endl;
	}
	else
	{
		cout << "恭喜你猜对了" << endl;
		break; //退出循环
	}
}

	 system("pause");

	return 0;
}