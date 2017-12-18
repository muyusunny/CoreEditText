//
//  AppDelegate.m
//  CoreEditTextDemo
//
//  Created by sun on 2017/11/28.
//  Copyright © 2017年 irunthink. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@end

@implementation AppDelegate

    /*
    此为demo演示，所显示的页面并非静态库的全部功能，主要目的是介绍工具类的使用方法和宏定义的使用方法，工具类中的其他方法都可以参照该方法调用和使用，工具类中的每个方法都标注了注释，如果在使用过程中遇到问题，可以添加QQ群讨论，或者打开页面介绍中的网站进行反馈，如果感觉工具类的使用对自己有帮助，还请在Git上为我加星，您的鼓励是我改进并长期维护的最大的支持。
    使用中，还请打开工具类的头文件，多看一下，多对比下demo使用。
    开发交流/问题反馈 QQ群：221762069 
    申请添加群时，请备注：iOS工具类讨论
    iOS开发讨论发言：https://www.irunthink.com/forum-92-1.html    
    */

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.

    /**
     *  输出最基本的系统信息
     */
    LogSystemAppInfo;

    /**
     *  手机基本信息
     */
    NSLog(@"手机型号：%@",SUNBSystemPhoneModelInfo);
    NSLog(@"手机用户定义名称：%@",SUNBSystemDeviceUserName);

    /**
     *  汉字转换为汉语拼音
     */
    NSArray *wordArr = [NSArray arrayWithObjects:@"你好",@"我的",@"程序",@"北京", nil];
    for (int i = 0; i < wordArr.count; i++) {
        NSLog(@"%@的拼音是：%@",[wordArr objectAtIndex:i],SUNGetPinYinFormString([wordArr objectAtIndex:i]));
    }

    /**
     *  主线程延迟second秒异步执行block
     */
    SUNBAsyncMainQueueDelay(5,^{
        NSLog(@"我延迟了5秒执行");
    });



    return YES;
}


- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}


- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    // Saves changes in the application's managed object context before the application terminates.
    [self saveContext];
}


#pragma mark - Core Data stack

@synthesize persistentContainer = _persistentContainer;

- (NSPersistentContainer *)persistentContainer {
    // The persistent container for the application. This implementation creates and returns a container, having loaded the store for the application to it.
    @synchronized (self) {
        if (_persistentContainer == nil) {
            _persistentContainer = [[NSPersistentContainer alloc] initWithName:@"CoreEditTextDemo"];
            [_persistentContainer loadPersistentStoresWithCompletionHandler:^(NSPersistentStoreDescription *storeDescription, NSError *error) {
                if (error != nil) {
                    // Replace this implementation with code to handle the error appropriately.
                    // abort() causes the application to generate a crash log and terminate. You should not use this function in a shipping application, although it may be useful during development.
                    
                    /*
                     Typical reasons for an error here include:
                     * The parent directory does not exist, cannot be created, or disallows writing.
                     * The persistent store is not accessible, due to permissions or data protection when the device is locked.
                     * The device is out of space.
                     * The store could not be migrated to the current model version.
                     Check the error message to determine what the actual problem was.
                    */
                    NSLog(@"Unresolved error %@, %@", error, error.userInfo);
                    abort();
                }
            }];
        }
    }
    
    return _persistentContainer;
}

#pragma mark - Core Data Saving support

- (void)saveContext {
    NSManagedObjectContext *context = self.persistentContainer.viewContext;
    NSError *error = nil;
    if ([context hasChanges] && ![context save:&error]) {
        // Replace this implementation with code to handle the error appropriately.
        // abort() causes the application to generate a crash log and terminate. You should not use this function in a shipping application, although it may be useful during development.
        NSLog(@"Unresolved error %@, %@", error, error.userInfo);
        abort();
    }
}

@end
