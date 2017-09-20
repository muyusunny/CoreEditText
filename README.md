# CoreEditText

iOS开发工具类，包含常用功能，为方便使用，特为常用功能封装并且使用宏定义方式运用。

# 功能介绍

包含功能有：
* 相对布局
* 字符串工具
* 系统相关工具
* 快速存取工具
* UI工具
* NSDate工具
* 系统信息
* 系统沙盒
* 文件操作
* bug收集
* MD5,SHA1加密解密
* iOS动画合成
* 多线程操作
* 获取系统信息
* 还有很多很多惊喜,等待你来发现…

# 版本文件说明

类型有：单真机使用库(体积小)、单模拟器使用库(支持i386和x86_64版本)、通用版本(合并真机和模拟器版本，如果对体积无特殊要求的可以直接使用这个即可)

## 文件目录说明

* iphones                                       (单真机framework版本)
* iphonesimulator                               (单模拟器framework版本)
* universal                                     (包含真机和模拟器framework版本,【常用】)

* * *

* iphones/CoreEditText.framework                (单真机【arm64,armv7】framework版本)
* iphones/arm64/CoreEditText.framework          (单真机【arm64】framework版本)
* iphones/armv7/CoreEditText.framework          (单真机【armv7】framework版本)

* * *

* iphonesimulator/i386/CoreEditText.framework   (单模拟器【i386】framework版本)
* iphonesimulator/x86_64/CoreEditText.framework (单模拟器【x86_64】framework版本)

* * *

* universal/CoreEditText.framework              (包含真机和模拟器framework版本,【常用】)

* * *



# 使用方法

使用简单快捷，仅需要把【CoreEditText.framework】库文件拖入项目中，在项目pch文件中引入即可。

## 引入方式如下

```#import <CoreEditText/CoreEditText.h>```

1. 项目中使用 e.g.1

```

NSLog (@"*********************************************************");
NSLog (@"**    当前App的版本号            :%@ ",SUNNUMBER_FLOAT_TO_NUMB_2(SUNBSystemAppVersion));
NSLog (@"**    当前系统版本               :%@ ",SUNNUMBER_FLOAT_TO_NUMB_2(SUNBSystemVersion));
NSLog (@"**    当前App的bundleIdentifier :%@",SUNBSystemAppBundleIdentifier);
NSLog (@"**    当前屏幕大小               :%@ * %@ ",SUNNUMBER_FLOAT_TO_NUMB_2(SUNBSystemScreenWidth),SUNNUMBER_FLOAT_TO_NUMB_2(SUNBSystemScreenHeight));
NSLog (@"*********************************************************\n");

```

输出信息

```
*********************************************************
**    当前App的版本号            :1.1 
**    当前系统版本               :10.3 
**    当前App的bundleIdentifier :com.sunny.CoreEditText
**    当前屏幕大小               :375 * 667 
*********************************************************

```

* * *

2. 汉字转换为汉语拼音 e.g.2

```
NSArray *wordArr = [NSArray arrayWithObjects:@"你好",@"我的",@"程序",@"北京", nil];
for (int i = 0; i < wordArr.count; i++) {
    NSLog(@"%@的拼音是：%@",[wordArr objectAtIndex:i],[SUNGetPinYinFormString([wordArr objectAtIndex:i])]);

}


输出信息：

你好的拼音是：ni hao
我的的拼音是：wo de
程序的拼音是：cheng xu
北京的拼音是：bei jing

```

* * *

3. 线程操作 e.g.3

```

//主线程延迟second秒异步执行block

SUNBAsyncMainQueueDelay(5,^{
    NSLog(@"我延迟了5秒执行");
});

```

# 开发者交流/问题反馈

开发交流/问题反馈 QQ群：221762069
申请添加群时，请备注：iOS工具类讨论
