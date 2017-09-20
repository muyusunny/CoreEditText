//
//  SUNBSystemUitil.h
//  CoreEditText
//
//  Created by Sunny on 16-1-20.
//  Copyright (c) 2016年 Sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <CoreGraphics/CoreGraphics.h>
@interface SUNBSystemUitil : NSObject

/** 获取占用内存*/
+ (NSString *)usedSpaceAndfreeSpace;

+ (NSString *)appName;

//手机型号
+ (NSString *)phoneModel;

//设备名称
+ (NSString *)deviceName;

//手机的具体型号
+ (NSString*)deviceString;

+ (CGFloat)appVersion;

+ (CGFloat)appFloatVersion;

+ (NSString *)appStringVersion;

+ (NSString *)appBundleIdentifier;

+ (CGFloat)currentSystemVersion;

+ (CGFloat)currentScreenScale;

+ (CGRect)screenBounds;

+ (BOOL)isSystemVersionOver:(CGFloat)versionValue;

+ (BOOL)iPadDevice;

+ (BOOL)iPhone4Device;

+ (BOOL)iPhone5Device;

+ (BOOL)iPhone6Device;

+ (BOOL)iPhone6PlusDevice;

+ (CGSize)deviceScreenSize;

+ (CGFloat)naivationBarHeight;

+ (NSNotificationCenter *)defaultCenter;

+ (void)postNoti:(NSString *)notiName;

+ (void)postNoti:(NSString *)notiName withObject:(id)obj;

+ (void)postNoti:(NSString *)notiName withObject:(id)obj withUserInfo:(NSDictionary *)infoDict;

+ (NSString *)mainBundlePath:(NSString*)fileName;

+ (NSString *)bundle:(NSString *)bundle file:(NSString *)file;

+ (void)showNetworkIndicatorActivity:(BOOL)state;

+ (void)originObject:(id)originObject associateObject:(id)anObject byKey:(NSString * const)associateKey;

+ (id)associateObjectFromOrigin:(id)originObject byKey:(NSString * const)associateKey;

+ (void)associateRemoveFromOrigin:(id)originObject;

+ (BOOL)cameraAvailable;

+ (BOOL)frontCameraAvailable;

+ (BOOL)cameraFlashAvailable;

+ (BOOL)canSendSMS;

+ (BOOL)canMakePhoneCall;

+ (BOOL)isAppCameraAccessAuthorized;

+ (BOOL)isAppPhotoLibraryAccessAuthorized;

/**
 *  获取屏幕Y轴起始点
 */
+(double)getSelfViewFrameOrangeY;

/**
 *  系统是否 >=7.0 <7.1
 */
+(BOOL)isSystemVersionIs7;

@end
