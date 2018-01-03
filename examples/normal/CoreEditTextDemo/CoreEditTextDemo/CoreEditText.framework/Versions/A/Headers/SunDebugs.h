//
//  SunDebugs.h
//  程序异常处理，错误报告处理
//
//  Created by Sunny on 16/6/29.
//  Copyright © 2016年 sun. All rights reserved.
//
/*
 系统自己统计app使用过程中的应用崩溃信息，并存入沙盒中，方便查看，查找原因，并及时修正Bugs。

 使用方法
 1、头文件声明(AppDelegate.m文件)：
 @property (nonatomic) NSUncaughtExceptionHandler *uncaughtExceptionHandler;


 2、didFinishLaunchingWithOptions方法中加入：

 //异常处理
 self.uncaughtExceptionHandler = NSGetUncaughtExceptionHandler();
 NSSetUncaughtExceptionHandler(&UncaughtExceptionHandler);


 3、applicationDidBecomeActive:(UIApplication *)application

 //进入程序时开始收集bugs
 StartSaveSunBugs;


 4、applicationDidEnterBackground:(UIApplication *)application

 //程序进入后台时暂停收集bugs
 PauseSaveSunBugs;
 
 */

#import <Foundation/Foundation.h>

#define StartSaveSunBugs        [[SunDebugs shareDefineBugs] saveBugs]                  //开始记录Bugs

#define PauseSaveSunBugs        [[SunDebugs shareDefineBugs] pauseSaveBugs]             //暂停记录Bugs

#define KBugsFileListArray      [[SunDebugs shareDefineBugs] BugFileListArray]          //沙盒中记录的bug文件名的数组

@interface SunDebugs : NSObject

void UncaughtExceptionHandler(NSException *exception);

void HandlingExceptionsSunHand();

+ (SunDebugs *)shareDefineBugs;

- (void)saveBugs;

- (void)pauseSaveBugs;

- (NSMutableArray *)BugFileListArray;

@end
