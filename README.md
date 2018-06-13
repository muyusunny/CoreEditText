# CoreEditText
[github地址](https://github.com/muyusunny/CoreEditText)：https://github.com/muyusunny/CoreEditText

iOS开发工具类，包含常用功能，为方便使用，特为常用功能封装并且使用宏定义方式运用。在做开发时候能用少点代码就用少点，封装起来的工具类更好用，体积小，使用方便，使开发高效快捷。工具类不定期更新，请关注工具类链接或者关注博客动态。如在使用过程中遇到什么问题或者有新的建议或者意见，请加qq群、git、开发论坛等讨论反馈，我会及时关注并更新。

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
* 字符串转数字
* NSData转对象
* 对象转二进制NSData
* 将图标设置成圆形
* 设置UIView边框
* 图片质量压缩
* 改变图片大小
* 将日期格式转化成字符串
* 获取当前时间
* 返回字符串的尺寸
* 计算两个日期之间相差分钟数
* 获取磁盘总空间大小
* 获取磁盘可用空间大小
* 获取指定路径下某个文件的大小
* 获取文件夹下所有文件的大小
* 计算上次日期距离现在多久, 如 xx 小时前、xx 分钟前等
* 判断手机号码格式是否正确
* 判断邮箱格式是否正确
* 全屏截图
* 截取一张 view 生成图片
* 截取view中某个区域生成一张图片
* 判断字符串中是否含有空格
* 根据路径返回目录或文件的大小
* 得到指定目录下的所有文件
* 删除指定目录或文件
* 清空指定目录下文件
* 创建完整路径---自动创建文件夹
* 获得document
* 拷贝文件到沙盒
* 判断文件是否存在
* 相对现在日期得间隔天数
* 获取一个时间与当前时间间隔详情字符串
* 获取一个时间戳与当前时间的间隔详情字符串
* 天数间隔
* 日期是星期几
* 返回日期在全年中是第多少周
* 日期转字符串
* 字符串转日期
* 字符串转日期详细时间
* 将时间戳转成日期
* 按照某个格式将日期转成字符串
* 按照某个格式将字符串转成日期
* 时间戳格式字符串
* 生日转年龄
* 日期转星座
* 时间戳转星座
* 当前时间戳，精确到毫秒
* 当前时间戳，精确到秒
* 主线程异步执行block
* 主线程延迟second秒异步执行block
* 全局后台线程异步执行block
* 全局后台线程延迟second秒异步执行block
* 只执行一次block,创建单例使用
* 输出当前app相关信息
* 检查一个valueObj,keyObj对象是否有一个是空的
* 检查一个对象是否为空
* NSUserDefault 保存键值对 keyObj,valueObj
* NSUserDefault 获取键keyObj对应的值
* 在指定路径创建目录，返回BOOL结果
* 从16进制字符中得到颜色
* 快速获取图片
* 获取一个View的截图
* 获取一个Layer的截图
* 按照aColor颜色创建一张size大小的图片
* 以duration持续时间执行一个UIView动画block
* 延迟second秒，以duration持续时间执行一个UIView动画block
* x轴增量移动动画
* y轴增量移动动画
* 移动到指定xy轴点动画
* 反转动画
* 字符串转Data
* data转字符串
* data转char
* char转data
* string字符串中是否包含特定字符
* 字符串是否为空
* 字符串转NSInteger
* 字符串转CGFloat
* 字符串转double
* 字符串转Bool
* int转字符串
* float转字符串
* double转字符串
* bool转字符串
* 字符串是否合法邮箱
* 字符串是否合法手机号码
* 字符串是否合法url
* 字符串是否合法座机
* 字符串是否合法身份证号
* 字符串是否合法车牌号
* 字符串是否只有中文字符
* 字符串是否只有英文字符
* 字符串是否只包含字符，中文，数字
* 字符串是否纯数字
* 从文件中读取出字符串
* 将字符串转为MD5字符串
* 将NSData转为MD5字符串
* 将NSData转为Base64字符串(加密)
* 将字符串转为Base64数据(解密)
* 将字符串转为SHA1字符串
* 将字符串转为SHA1_BASE64字符串
* 将字符串转为MD5_BASE64字符串
* 将字符串转为BASE64字符串
* 返回去除字符串首的空格的字符串
* 返回去除字符串结尾的空格的字符串
* 返回去除字符串中所有的空格的字符串
* Url编码对象,通常是字符串,返回编码后的字符串
* Url编码一个字典,键值对用@链接,返回编码后的字符串
* Url编码一个字典,键值对用@链接,返回编码后的字符串(添加Key排序)
* iOS数据解析精度问题，目标位数保留小数点后两位数
* 一键把汉字转换为汉语拼音
* 获取系统占用内存
* 当前App的名称
* 手机型号(iphone/ipad)
* 手机具体的型号 (iphone 6 plus)
* 设备名称
* 设备用户名称
* 当前App的版本号
* 当前App的Bundel版本号
* 当前App的bundleIdentifier
* 获取系统版本号
* 当前屏幕缩放倍数
* 系统通知中心
* 系统通知中心发noti名字的通知
* 系统通知中心发noti名字的通知，携带参数对象object
* 照相机是否可用
* 是否支持打电话
* 是否支持发短信
* App是否有权限访问照片库
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

 1. 直接下载文件使用
 
 使用简单快捷，仅需要把【CoreEditText.framework】库文件拖入项目中，在项目pch文件中引入即可。<br>
 注意：此方式使用时记得在项目的Build Settings中Other linker Flags中添加：-ObjC
 
 
 
 2. pod安装使用

```
pod 'CoreEditText'
```


----------


```
platform :ios, '8.0'

target '项目的target' do
    pod 'CoreEditText'
end
```


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
    NSLog(@"%@的拼音是：%@",[wordArr objectAtIndex:i],SUNGetPinYinFormString([wordArr objectAtIndex:i]));

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

## Demo ##
1、文件夹examples下normal/CoreEditTextDemo为正常下载使用的Demo<br>
2、CocoaPods/CoreEditTextPodDemo下的为使用pod方式导入的Demo，大家可以参考使用。如果有问题可以添加QQ群讨论。


----------


# 更新日志 #
* 2018.06.13 修复类库已知bug，修复类库引入项目可能报错的问题。

----------


# 开发者交流/问题反馈

开发交流/问题反馈 QQ群：221762069 <br>
申请添加群时，请备注：iOS工具类讨论

iOS开发讨论发言：[https://www.irunthink.com/forum-92-1.html](https://www.irunthink.com/forum-92-1.html)
