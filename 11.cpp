#include <stdio.h>			
int main()					
{
	//********Begin*********
    struct People
    {
        char tel[20];
        char name[50];
        char school[100];
     }stu1={"15372174591","���","��Ͽ��ѧ"},stu2={"15372174592","����","��Ͽ��ѧ"},stu3={"15372174593","����","��Ͽ��ѧ"};

  

    printf("%s,�ֻ���:%s",stu2.name,stu3.tel);






	//********End*********** 
	return 0;
}
