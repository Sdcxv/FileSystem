#include "Interface.h"

int main() {
	FILE *fp;
	fp = fopen("filesystem", "rb");//打开文件,用二进制的方式读取
	InitSystem(fp);			//初始化系统
	InitCommand();			//初始化命令
	Run(fp);				//运行
	return 0;
}
