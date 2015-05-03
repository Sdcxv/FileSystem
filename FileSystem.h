#ifndef _FILESYSTEM_
#define _FILESYSTEM_

#include <iostream>
#include <string.h>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h> 
#include <Windows.h>

using namespace std;

//声明函数

//与文件系统初始化相关的函数
void InitSystem(FILE *fp);
void InitDisks();
void InitUsers();
void InitTable();
void InitCommand();
//读写信息的函数
void ReadFromFile(FILE *fp);
void WriteToFile(FILE *fp);
void ReadUsers(FILE *fps);
void SaveUsers(FILE *fps);
//支持命令运行的函数
void InsertTable(char filename[], int i_num);
int SelectTable(char filename[]);
int IsPermit(int i_num, char operation);
int AllotDisks(int length);
void RecoverDisks(int length);
//与命令有关的函数
int login();
void help();
void show_curdir();
void go_dir(char tmp[]);
void back_dir();
void create_dir(char tmp[]);
void del_dir(char tmp[]);
void create_file(char tmp[]);
void open_file(char tmp[]);
void read_file(char tmp[]);
void write_file(char tmp[]);
void close_file(char tmp[]);
void delete_file(char tmp[]);
void show_info();
void logout(FILE *fp);
int change_user(FILE *fp, char tmp[]);
void change_mode(char tmp[]);
void manage_user();
void h_link(char tmp[]);
void s_link(char tmp[]);
void rename(char tmp[]);
void cas_deldir(char tmp[]);

#endif
