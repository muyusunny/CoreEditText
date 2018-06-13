//
//  SUNBSystemMacrocDefine.h
//  CoreEditText
//
//  Created by Sunny on 16-1-20.
//  Copyright (c) 2016年 Sunny. All rights reserved.
//

/**
 *
 *  这个文件封装了大部分系统相关的功能宏定义
 */

#import "SUNBSystemUitil.h"

/**
 *  去除performSelector警告
 *
 *  @param code 需要屏蔽警告的代码
 *
 *  @return
 */
#define SUNBSystemRemovePerformSelectorLeakWarning(code)                    \
_Pragma("clang diagnostic push")                                        \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"")     \
code;                                                                   \
_Pragma("clang diagnostic pop")                                         \


/**
 *  获取占用内存
 */
#define KusedSpaceAndFree       [SUNBSystemUitil usedSpaceAndfreeSpace]

/**
 *  当前App的名称
 */
#define SUNBSystemAppName [SUNBSystemUitil appName]

/**
 *  手机型号(iphone/ipad)
 */
#define SUNBSystemPhoneModel [SUNBSystemUitil phoneModel]

/**
 *  手机具体的型号 (iphone 6 plus)
 */
#define SUNBSystemPhoneModelInfo [SUNBSystemUitil deviceString]

/**
 *  设备名称
 */
#define SUNBSystemDeviceName [SUNBSystemUitil deviceName]

/**
 *  设备用户名称
 */
#define SUNBSystemDeviceUserName [SUNBSystemUitil deviceUserName]


/**
 *  当前App的版本号
 */
#define SUNBSystemAppVersion [SUNBSystemUitil appVersion]

/**
 *  当前App的Bundel版本号
 */
#define SUNBSystemAppBundleVersion [SUNBSystemUitil appBundleVersion]

/**
 *  当前App的版本号 float型
 */
#define SUNBSystemAppFloatVersion [SUNBSystemUitil appFloatVersion]

/**
 *  当前App的版本号 字符串型
 */
#define SUNBSystemAppStringVersion [SUNBSystemUitil appStringVersion]

/**
 *  当前App的bundleIdentifier
 */
#define SUNBSystemAppBundleIdentifier [SUNBSystemUitil appBundleIdentifier]

/**
 *  屏幕绝对画布
 */
#define SUNBSystemScreenBounds [SUNBSystemUitil screenBounds]

/**
 *  获取系统版本号
 */
#define SUNBSystemVersion [SUNBSystemUitil currentSystemVersion]

/**
 *  当前屏幕缩放倍数
 */
#define SUNBScreenScale [SUNBSystemUitil currentScreenScale]

/**
 *  系统是否超过5.0
 */
#define SUNBSystemIsOver5 [SUNBSystemUitil isSystemVersionOver:5.0]

/**
 *  系统是否超过6.0
 */
#define SUNBSystemIsOver6 [SUNBSystemUitil isSystemVersionOver:6.0]

/**
 *  系统是否超过7.0
 */
#define SUNBSystemIsOver7 [SUNBSystemUitil isSystemVersionOver:7.0]

/**
 *  系统是否超过8.0
 */
#define SUNBSystemIsOver8 [SUNBSystemUitil isSystemVersionOver:8.0]

/**
 *  获取屏幕大小
 */
#define SUNBSystemScreenSize [SUNBSystemUitil deviceScreenSize]

/**
 *  获取屏幕宽度
 */
#define SUNBSystemScreenWidth [SUNBSystemUitil deviceScreenSize].width

/**
 *  获取屏幕高度
 */
#define SUNBSystemScreenHeight [SUNBSystemUitil deviceScreenSize].height

/**
 *  是否iPhone4
 */
#define SUNBSystemiPhone4 [SUNBSystemUitil iPhone4Device]

/**
 *  是否iPhone5
 */
#define SUNBSystemiPhone5 [SUNBSystemUitil iPhone5Device]

/**
 *  是否iPhone6
 */
#define SUNBSystemiPhone6 [SUNBSystemUitil iPhone6Device]

/**
 *  是否iPhone6 plus
 */
#define SUNBSystemiPhone6Plus [SUNBSystemUitil iPhone6PlusDevice]

/**
 *  是否iPad
 */
#define SUNBSystemiPad [SUNBSystemUitil iPadDevice]

/**
 *  系统UINavigationBar高度
 */
#define SUNBSystemNavigationBarHeight [SUNBSystemUitil naivationBarHeight]

/**
 *  Y轴增量
 */
#define SUNBSystemOriginYDelta 20.f

/**
 *  AppDelegate
 */
#define SUNBApplicationDelegate [UIApplication shareApplication].delegate

/**
 *  创建对象弱引用
 */
#define SUNBWeakObject(anObject)  __weak __typeof(anObject)

/**
 *  创建对象强引用
 */
#define SUNBStrongObject(anObject) __strong __typeof(anObject) 

/**
 *  创建self弱引用
 */
#define SUNBWeakSelf SUNBWeakObject(self)

/**
 *  创建self强引用
 */
#define SUNBStrongSelf SUNBStrongObject(SUNBWeakSelf)

/**
 *  系统通知中心
 */
#define SUNBNotificationCenter [SUNBSystemUitil defaultCenter]

/**
 *  系统通知中心发noti名字的通知
 */
#define SUNBNotificationPost(noti) [SUNBSystemUitil postNoti:noti]

/**
 *  系统通知中心发noti名字的通知，携带参数对象object
 */
#define SUNBNotificationPostObj(noti,object) [SUNBSystemUitil postNoti:noti withObject:object]

/**
 *  系统通知中心发noti名字的通知，携带参数对象object ,携带用户自定义信息userInfo
 */
#define SUNBNotificationPostObjUserInfo(noti,object,userInfo) [SUNBSystemUitil postNoti:noti withObject:object withUserInfo:userInfo]

/**
 *  获取mainBundle
 */
#define SUNBMainBundle [NSBundle mainBundle]

/**
 *  获取mainBundle内名字为fileName的文件的路径
 */
#define SUNBMainBundlePath(fileName) [SUNBSystemUitil mainBundlePath:fileName]

/**
 *  获取路径为bundlePath的指定bundle中文件名为fileName的文件路径
 */
#define SUNBBundlePath(bundlePath,fileName) [SUNBSystemUitil bundle:bundlePath file:fileName]


/**
 *  运行时给一个对象添加一个成员，添加的associateKey必须是一个静态常量字符串 static NSString * const associateKey = @"";
 */
#define SUNBAssociateOriginWithObject(originObj,associateObj,associateKey) [SUNBSystemUitil originObject:originObj associateObject:associateObj byKey:associateKey]

/**
 *  通过key获取运行时加入的成员
 */
#define SUNBGetAssociateObject(originObj,associateKey) [SUNBSystemUitil associateObjectFromOrigin:originObj byKey:associateKey]

/**
 *  移除辅助成员
 */
#define SUNBAssociateRemove(originObj) [SUNBSystemUitil associateRemoveFromOrigin:originObj]

/**
 *  照相机是否可用
 */
#define SUNBCameraIsAvailable [SUNBSystemUitil cameraAvailable]

/**
 *  前置摄像头是否可用
 */
#define SUNBFrontCameraAvailable [SUNBSystemUitil frontCameraAvailable]

/**
 *  照相机闪光灯是否可用
 */
#define SUNBCameraFlashAvailable [SUNBSystemUitil cameraFlashAvailable]

/**
 *  是否支持发短信
 */
#define SUNBSystemCanSendSMS [SUNBSystemUitil canSendSMS]

/**
 *  是否支持打电话
 */
#define SUNBSystemCanMakePhoneCall [SUNBSystemUitil canMakePhoneCall]

/**
 *  App是否有权限访问照片库
 */
#define SUNBAppCanAccessPhotoLibrary [SUNBSystemUitil isAppPhotoLibraryAccessAuthorized]

/**
 *  App是否有权限访问相机
 */
#define SUNBAppCanAccessCamera [SUNBSystemUitil isAppCameraAccessAuthorized]

/**
 *  获取屏幕Y轴起始点
 */
#define SUNBAppSelfViewFrameOrangeY [SUNBSystemUitil getSelfViewFrameOrangeY]

/**
 *  系统是否 >=7.0 <7.1
 */
#define SUNBSystemVersionIs7 [SUNBSystemUitil isSystemVersionIs7]
