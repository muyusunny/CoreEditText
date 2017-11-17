//
//  NSString+DocumentPath.h
//  CoreEditText
//
//  Created by Sunny on 15-5-3.
//  Copyright (c) 2015年 Sunny. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface DocumentPath : NSObject //(DocumentPath)

+(NSString *)TempDocumentPathWith:(NSString *)fileName;

/**创建完整路径---自动创建文件夹*/
+ (NSString *)dataPath:(NSString *)fileName FolderName:(NSString *)FolderName;

/**获得document*/
+(NSString *)documentsPath;

/**读取工程文件*/
+(NSString *) ProductPath:(NSString*)filename type:(NSString *)type;

/**获得document文件路径，名字方便记忆*/
+(NSString *) DocumentPath:(NSString *)filename;

/**获得document文件路径*/
+(NSString *)fullpathOfFilename:(NSString *)filename;

/**写入文件沙盒位置NSDictionary*/
+(void)saveNSDictionaryForDocument:(NSDictionary *)list FileUrl:(NSString*) FileUrl;

/**写入文件存放到工程位置NSDictionary*/
+(void)saveNSDictionaryForProduct:(NSDictionary *)list FileUrl:(NSString*) FileUrl;

/**写入文件 Array 工程*/
+(void)saveOrderArrayListProduct:(NSMutableArray *)list  FileUrl :(NSString*) FileUrl;

/**写入文件 Array 沙盒*/
+(void)saveOrderArrayList:(NSMutableArray *)list  FileUrl :(NSString*) FileUrl;

/**加载文件沙盒NSDictionary FileUrl:文件的名称，获取的是document下面的文件*/
+(NSDictionary *)loadNSDictionaryForDocument : (NSString*) FileUrl;

/**加载文件工程位置NSDictionary  FileUrl:文件的名称，获取的是项目工程中的文件*/
+(NSDictionary *)loadNSDictionaryForProduct: (NSString*) FileUrl;

/**加载文件沙盒String FilePath:文件的路径，获取的是FilePath下面的文件*/
+(NSString *)loadStringForPath : (NSString *)FilePath;

/**加载文件沙盒NSDictionary FilePath:文件的路径，获取的是FilePath下面的文件*/
+(NSDictionary *)loadNSDictionaryForPath : (NSString *)FilePath;

/**加载文件沙盒NSArray  FilePath:文件的路径，获取的是FilePath下面的文件*/
+(NSArray *)loadArrayListForFilePath: (NSString*) FilePath;

/**加载文件沙盒NSArray  FileUrl:文件的名称，获取的是document下面的文件*/
+(NSArray *)loadArrayList: (NSString*) FileUrl;

/**加载文件工程位置NSArray  FileUrl:文件的名称，获取的是项目工程中的文件*/
+(NSArray *)loadArrayListProduct: (NSString*) FileUrl;

/**拷贝文件到沙盒*/
+(int) CopyFileToDocument:(NSString*)FileName;

/**判断文件是否存在*/
+(BOOL) FileIsExists:(NSString*) checkFile;
@end
