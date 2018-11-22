#include <stdio.h>


void showmenu1()
{
    printf("\n请选择需要被转换的进制:\n");
    printf("1、二进制\n");
    printf("2、八进制\n");
    printf("3、十进制\n");
    printf("4、十六进制\n");
    printf("0、退出\n");
    printf("请输入菜单：");
}

int main()
{
    /*
    unsigned short *v6;
    long long rs = 10086;
    v6 = (unsigned short *)rs;
    v6[1] = rs;
*/
	showmenu1();
    int a,b,c,d,e;
    a = 12;
    b = 2*a;
    c = 32 * a;
    d = a + 2;
    e = 0;
    char str[]="YourtiresAre";
    unsigned long int char_ptr;
    char_ptr = str;
    printf("char_ptr is %lu \n",(unsigned long int) char_ptr);
    printf("Your Tires are: %d%d%d%d%d\n",a,b,c,c,b);

    unsigned long int longword;
    a = sizeof(longword) - 1;
    printf ("sizeof is %d \n",a);

    int tr;
    tr = (unsigned long int) char_ptr & a;
    printf("tr is %d\n",tr);

    unsigned long int magic_bits, himagic, lomagic, magic_bits_two;
    magic_bits = 0x7efefeffL;
    magic_bits_two = ((0x7efefefeL << 16) << 16) | 0xfefefeffL;
    unsigned int v5;
    v5 = 0;
    v5 = v5 >>= 16;
    printf("v5 is %d\n",v5);

    return 0;
}
