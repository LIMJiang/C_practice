#include <stdio.h>			
int main()					
{
	//********Begin*********
    struct People
    {
        char tel[20];
        char name[50];
        char school[100];
     }stu1={"15372174591","李红","三峡大学"},stu2={"15372174592","张三","三峡大学"},stu3={"15372174593","李四","三峡大学"};

  

    printf("%s,手机号:%s",stu2.name,stu3.tel);






	//********End*********** 
	return 0;
}
