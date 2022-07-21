/*****************************************************************************
 * @file main.cpp
 * @author pillar (pillar.shi@foxmail.com)
 * @brief 7: 多文件编译方法
 * @version 0.1
 * @date 2022-07-21
 * 
 * @copyright Copyright (c) 2022
 * 
*****************************************************************************/

#include <iostream>

#include "add.h"

using namespace std;

int main(int argc,char *argv[])
{
    cout << add(3,4) << endl;
    return 0;
}

/*****************************************************************************
 *多文件编译方法：  
 *  1.一个命令：
 *    g++ -o main.exe add.cpp 多文件编译.cpp
 *  2.分开的命令：
 *    1) g++ -c 多文件编译.cpp add.cpp
 *       生成 object 文件（*.o）
 *    2) g++ -o main.exe add.o 多文件编译.o
 *       生成二进制文件（link，main.exe）
 *    3) 改.vscode的task.json
 *       去掉args中的：
 *          "${file}" 和
 *          "${fileDirname}\\${fileBasenameNoExtension}.exe"
 *       改为：
 *          "${workspaceFolder}\\*.cpp"
 *          "${workspaceFolder}\\main.exe"
*****************************************************************************/