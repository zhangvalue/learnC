//
// Created by zhangsf on 2019/11/19.
//
//
//#include <stdio.h>
//int main(){
//    int num;
//    int i=0;
//    int arr[10];
//    while(1){
//        scanf("%d",&num);
//        char c=getchar();
//        arr[i++]=num;
//        if(c=='\n'){
//            break;
//        }
//    }
//    /*for(int i=0;i<10;i++){
//     printf("%d\n",arr[i]);
//    }*/
//    return 0;
//}
//2017年 第八题 1
//#include <stdio.h>
//int fun(){
//    int x =1;
//    static int y=1;
//    printf("%d\n",x);
//    printf("%d\n",y);
//    x++;
//    y++;
//    return x+y;
//}
//main(){
//    int a,b;
//    a=fun();
//    b=fun();
//    printf("%d,%d\n",a,b);
//}
//2019年九


/*
 *待注释的内容
 */
//void foo(int [][3]);
//main(){
//    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//    foo(a);
//    printf("最终打印输出a[[2][1]： %d \n",a[2][1]);
//}
//void foo(int b[][3]){
//    printf("输出b的地址：%d \n",b);
//    printf("输出b的第一个值b[0][0]：%d \n",b[0][0]);
//    ++b;
//
//    printf("对b引用进行++操作后输出b[0][0]：%d \n",b[0][0]);
//    b[1][1]=9;
//    printf("修改了b[1][1]之后输出b[0][0]：%d \n",b[0][0]);
//    printf("修改了b[1][1]之后输出b[0][1]：%d \n",b[0][1]);
//    printf("修改了b[1][1]之后输出b[1][0]：%d \n",b[1][0]);
//    printf("修改了b[1][1]之后输出b[2][0]：%d \n",b[2][0]);
//
//}
//2017年第一题
//#include <stdio.h>
//void main()
//{
// int sum=0,tmp=1,i;
//    for (i = 1;  i<=10; i++) {
//        tmp*=i;
//        sum+=tmp;
//    }
//    printf("1!+、、、、+10！=%d",sum);
//}
//2018年第一题
//#include <stdio.h>
//int main(void){
//    float q,sn=0.0,n=1.0;
//    printf("输入q的值");
//    scanf("%f",&q);
//    sn+=(n+1)/n;
//    while (sn<=q){
//        n++;
//        sn+=(n+1)/n;
//    }
//    printf("sn=%f",sn);
//}
//2018年第二题
//输入一行字符，统计其中有多少个单词，单词之间用空格分隔开。
//#include<stdio.h>
//int main() {
//    //定义一个string字符数组来接收输入的字符串
//    //定义一个c字符用来比较当前字符是否是空格
//    char string[100],c;
//    //count用来统计单词个数，
//    // 使用flag来标识如何为一个新的单词，为一个新单词的标准是前面的一个字符为空格，且初始值为0
//    int i, count = 0, flag = 0;
//    gets(string);//输入一个字符串给字符数组string
//    for (i = 0; (c = string[i]) != '\0'; i++) {
//        if (c == ' ')//如果是空格字符，使word置0
//        {
//            flag = 0;
//        } else if (flag == 0)//如果不是空格字符，且flag原来的值为0，即前面是空格，使flag置1
//        {
//            flag = 1;count++;
//        }
//    }
//    printf("count=%d\n", count);
//    return 0;
//}
//计算π2019
#include <stdio.h>
#include <math.h>
int main(void){
    //do-while循环是先执行循环体再判断
    //n作为分母也从1开始
    //count从0开始，因为第一次执行再do循环体中
    int n=1,count=0;
    //取最后的累加和使用类型为double类型
    //sum就从0开始因为第一次执行再do循环体中
    //term也是为0
    double sum=0,term=0,sign=1;
    //1e-5就是 1*(10的-5次方)即0.00001 
    do {
        term = sign / n;
        sum = sum + term;
        count++;
        sign = -sign;
        n = n + 2;
    } while (fabs(term) >= 1e-5);
    printf("π=%f \n 一共累加项count=%d\n",4*sum,count);
}
//int main(void) {
//    double sum = 1.0, term=1.0, sign = 1;
//    int count = 1, n = 1;
//
//    while(fabs(term)>=1e-4){
//        count++;
//        sign=-sign;
//        n=n+2;
//        term=sign/n;
//        sum=sum+term;
//    }
//    printf("π= %f \n count=%d\n", sum * 4, count);
//}

//2019年2
//#include<stdio.h>
//int main(void){
//    int a=5,b=4,x,y;
//    x=a++*a++*a++;
//    printf("a=%d,x=%d\n",a,x);
//    y=--b*--b*--b;
//    printf("b=%d,y=%d\n",b,y);
//    return 0;
//}
//2018年九1
//void f1(int*,int);
//void(*p[2])(int*,int);
//main(){
//int a;
//int b;
//p[0]=f1;
//p[1]=f1;
//a=3;
//b=5;
//p[0](&a,b);
//printf("%d\t%d\t",a,b);
//p[1](&a,b);
//printf("%d\t%d\t",a,b);
//}
//void f1(int*p,int q){
//    int tmp;
//    tmp=*p;
//    *p=q;
//    q=tmp;
//}