/*菜单程序设计：要求： 1 给用户提供四个选项，当用户输入某个选项时，返回对应的结果并能够实现错误处理与程序的循环
具体实现：用户输入1选项时，返回advice ，用户输入b时，返回bell，用户输入c时，实现数字循环输出，用户输入q时，退出
要求使用switch语句*/
#include<stdio.h>
char choice(void);
int count(void);
int main()
{
    char ch=choice();
        switch(ch)
        {
        case 'a':
            printf("buy low ,sell high\n");
            break;
        case 'b':
            printf("\a");
            break;
        case 'c':
            count();
            break;
        case 'q':
            printf("see you next time\n");
        }
    return 0;
}
char choice(void)
{
    char ch;
    printf("a:advice b:bell\n");
    printf("c:count q:quit\n");
    ch=getchar();
    while(getchar()!='\n')
    {
        continue;
    }
    while((ch < 'a' || ch > 'c') && (ch!='q'))
    {
        printf("error,please  enter a,b,c or q\n");
        break;
    }
    return ch;
}
int count(void)
{
    int number,i=1;
    printf("please enter a nember\n");
    scanf("%d",&number);
   while((scanf("%d",&number))==1 && (number >= 0))
    {
         for(;i<=number;i++)
         {
            printf("%d\n",i);
         }
         break;
    }
    return i;
}
