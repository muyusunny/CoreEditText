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
* …

# 版本文件说明

***

* * *

类型有：单真机使用库(体积小)、单模拟器使用库(支持i386和x86_64版本)、通用版本(合并真机和模拟器版本，如果对体积无特殊要求的可以直接使用这个即可)

* * *

* iphones (单真机framework版本)
* iphonesimulator (单模拟器framework版本)
* universal (包含真机跟模拟器framework版本，【常用】)

* * *

* iphones/CoreEditText.framework (单真机[arm64,armv7]framework版本)
* iphones/arm64/CoreEditText.framework(单真机[arm64]framework版本)
* iphones/armv7/CoreEditText.framework(单真机[armv7]framework版本)

* * *

* iphonesimulator/i386/CoreEditText.framework (单模拟器[i386]framework版本)
* iphonesimulator/x86_64/CoreEditText.framework (单模拟器[x86_64]framework版本)
* * *
* universal/CoreEditText.framework (包含真机跟模拟器framework版本，【常用】)

* * *



# 使用方法

使用简单快捷，仅需要把【CoreEditText.framework】库文件拖入项目中，在项目pch文件中引入即可。
## 引入方式如下

```#import <CoreEditText/CoreEditText.h>```
