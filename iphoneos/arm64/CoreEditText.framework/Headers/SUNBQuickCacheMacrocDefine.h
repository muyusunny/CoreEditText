//
//  SUNBQuickCacheMacrocDefine.h
//  CoreEditText
//
//  Created by Sunny on 16-1-20.
//  Copyright (c) 2016年 Sunny. All rights reserved.
//

/**
 *  文件描述
 *
 *  这个工具类宏定义封装了对
 *  NSUserDefault,NSCache,NSFileManager
 *  NSKeyedArchieve,NSDocumentDirectory,NSCacheDirectory的便捷操作
 */

#import "SUNBQuickCacheUitil.h"

/* 写宏定义的时候，前面变量参数的名字，多参数的时候不能方法名和后面调用方法的参数名字一样 */

/**
 *  检查一个valueObj,keyObj对象是否有一个是空的
 */
#define SUNBCheckKeyValueHasNull(keyObj,valueObj) [SUNBQuickCacheUitil checkValue:valueObj key:keyObj]

/**
 *  检查一个对象是否为空
 */
#define SUNBCheckObjectNull(object) [SUNBQuickCacheUitil isNullObject:object]

/**
 *  NSUserDefault 保存键值对 keyObj,valueObj
 */
#define SUNBUDFCache(keyObj,valueObj) [SUNBQuickCacheUitil userDefaultCache:valueObj key:keyObj]

/**
 *  NSUserDefault 删除键keyObj对应的值
 */
#define SUNBUDFRemove(keyObj) [SUNBQuickCacheUitil userDefaultRemove:keyObj]

/**
 *  NSUserDefault 获取键keyObj对应的值
 */
#define SUNBUDFGetValue(keyObj) [SUNBQuickCacheUitil userDefaultGetValue:keyObj]

/**
 *  NSUserDefault 判断键keyObject对应的值是否为空
 */
#define SUNBUDFEmptyValue(keyObj) [SUNBQuickCacheUitil userDefaultEmptyValue:keyObj]

/**
 *  NSCache 存储键值对 keyObj,valueObj
 */
#define SUNBNSCacheSet(keyObj,valueObj) [SUNBQuickCacheUitil systemMemoryCacheSet:valueObj key:keyObj]

/**
 *  NSCache 删除键keyObj对应的值
 */
#define SUNBNSCacheRemove(keyObj) [SUNBQuickCacheUitil systemMemoryCacheRemove:keyObj]

/**
 *  NSCache 获取键keyObj对应的值
 */
#define SUNBNSCacheGetValue(keyObj) [SUNBQuickCacheUitil systemMemoryCacheGetValue:keyObj]

/**
 *  NSCache 判断键keyObject对应的值是否为空
 */
#define SUNBNSCacheEmptyValue(keyObj) [SUNBQuickCacheUitil systemMemoryCacheEmptyValue:keyObj]

/**
 *  获取系统默认文件管理
 */
#define SUNBFileManager [SUNBQuickCacheUitil fileManager]

/**
 *  指定路径pathObj是否存在文件
 */
#define SUNBFileIsExist(pathObj) [SUNBQuickCacheUitil fileExist:pathObj]

/**
 *  指定路径pathObj是否存在目录
 */
#define SUNBFileDirectoryIsExist(pathObj) [SUNBQuickCacheUitil directoryExist:pathObj]

/**
 *  读取某个路径的二进制数据，返回 NSData
 */
#define SUNBFileRead(pathObj) [SUNBQuickCacheUitil readFromFile:pathObj]

/**
 *  将二进制数据写入文件 dataObj:NSData pathObj:NSString
 */
#define SUNBFileWrite(dataObj,pathObj) [SUNBQuickCacheUitil writeFileData:dataObj toPath:pathObj]

/**
 *  在指定路径创建目录，返回BOOL结果
 */
#define SUNBFileDirectoryCreate(pathObj) [SUNBQuickCacheUitil createDirectory:pathObj]

/**
 *  删除指定路径文件
 */
#define SUNBFileDeleteFile(path) [SUNBQuickCacheUitil deleteFileAtPath:path]

/**
 *  删除指定目录
 */
#define SUNBFileDeleteDirectory(path) [SUNBQuickCacheUitil deleteDirectoryAtPath:path]

/**
 *  从fromFilePath复制文件到toFilePath,shouldRemove标示是否删除复制源文件
 */
#define SUNBFileCopyFileIsRemove(fromFilePath,toFilePath,shouldRemove) [SUNBQuickCacheUitil copyFileFromPath:fromFilePath toPath:toFilePath isRemoveOld:shouldRemove]

/**
 *  将某个对象归档到指定路径
 */
#define SUNBArchieveObject(object,filePath) [SUNBQuickCacheUitil archieveObject:object toFilePath:filePath]

/**
 *  从指定路径读取被归档过的对象
 */
#define SUNBUnArchieveObject(fromFilePath) [SUNBQuickCacheUitil unarchieveFromPath:fromFilePath]

/**
 *  获取NSDocumentDirectory目录
 */
#define SUNBAppDocumentDirectory [SUNBQuickCacheUitil documentDirectory]

/**
 *  获取NSCacheDirectory目录
 */
#define SUNBAppCacheDirectory [SUNBQuickCacheUitil cacheDirectory]

/**
 *  返回文件名为fileName在NSDocumentDirectory中的路径
 */
#define SUNBAppDoucmentPath(fileName) [SUNBQuickCacheUitil documentDirectoryPath:fileName]

/**
 *  返回文件名为fileName在NSCacheDirectory中的路径
 */
#define SUNBAppCachePath(fileName) [SUNBQuickCacheUitil cacheDirectoryPath:fileName]

/**
 *  将object对象用fileName名字保存到NSDocumentDirectory目录下
 */
#define SUNBAppDocumentSave(object,fileName) [SUNBQuickCacheUitil documentDirectorySave:object withFileName:fileName]

/**
 *  将object对象用fileName名字保存到NSCacheDirectory目录下
 */
#define SUNBAppCacheSave(object,fileName) [SUNBQuickCacheUitil cacheDirectorySave:object withFileName:fileName]

/**
 *  删除NSDocumentDirectory目录下名为fileName的文件
 */
#define SUNBAppDocumentDelete(fileName)  [SUNBQuickCacheUitil documentDirectoryDelete:fileName]

/**
 *  删除NSCacheDirectory目录下名为fileName的文件
 */
#define SUNBAppCacheDelete(fileName) [SUNBQuickCacheUitil cacheDirectoryDelete:fileName]

