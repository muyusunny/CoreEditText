//
//  SunDebugs.h
//  程序异常处理，错误报告处理
//
//  Created by Sunny on 16/6/29.
//  Copyright © 2016年 sun. All rights reserved.
//
/*
 使用方法
 1、头文件声明：
 @property (nonatomic) NSUncaughtExceptionHandler *uncaughtExceptionHandler;
 
 2、didFinishLaunchingWithOptions方法中加入：
 //异常处理
 self.uncaughtExceptionHandler = NSGetUncaughtExceptionHandler();
 NSSetUncaughtExceptionHandler(&UncaughtExceptionHandler);
 3、applicationDidBecomeActive:(UIApplication *)application
 进入程序时开始收集bugs
 【StartReadSunBugs;】
 4、applicationDidEnterBackground:(UIApplication *)application
 程序进入后台时暂停收集bugs
 【PauseReadSunBugs;】
 
 */

#import <Foundation/Foundation.h>

#define StartReadSunBugs        [[SunDebugs shareDefineBugs] readBugs]

#define PauseReadSunBugs        [[SunDebugs shareDefineBugs] pauseReadBugs]

@interface SunDebugs : NSObject

void UncaughtExceptionHandler(NSException *exception);

void HandlingExceptionsSunHand();

+(SunDebugs *)shareDefineBugs;

- (void)readBugs;

- (void)pauseReadBugs;

@end
