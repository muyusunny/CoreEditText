//
//  AppDelegate.h
//  CoreEditTextPodDemo
//
//  Created by sun on 2017/11/28.
//  Copyright © 2017年 irunthink. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

