//
//  SUNBStringUitil.h
//  CoreEditText
//
//  Created by Sunny on 16-1-20.
//  Copyright (c) 2016年 Sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@interface SUNBStringUitil : NSObject

//NSString 转换成NSData 对象
+ (NSData *)stringToData:(NSString *)string;

//NSData 转换成NSString对象
+ (NSString *)DataToString:(NSData *)data;

//NSData 转换成char*
+ (char *)DataToChar:(NSData *)data;

//char* 转换成NSData对象
+ (NSData *)charToData:(Byte *)chars;

+ (BOOL)stringIsNull:(NSString *)string;

+ (BOOL)stringIsAllWhiteSpace:(NSString *)string;

+ (BOOL)stringToBool:(NSString*)sourceString;

+ (NSInteger)stringToInt:(NSString*)sourceString;

+ (CGFloat)stringToFloat:(NSString*)sourceString;

+ (double)stringToDouble:(NSString*)sourceString;

+ (NSString *)boolToString:(BOOL)boolValue;

+ (NSString *)intToString:(NSInteger)intValue;

+ (NSString *)floatToString:(CGFloat)floatValue;

+ (NSString *)doubleToString:(double)doubleValue;

+ (BOOL)stringIsValidateEmailAddress:(NSString *)string;

+ (BOOL)stringISValidateMobilePhone:(NSString *)string;

+ (BOOL)stringIsValidatePhone:(NSString *)string;

+ (BOOL)stringIsValidateMailCode:(NSString *)string;

+ (BOOL)stringIsAllChineseWord:(NSString *)string;

+ (BOOL)stringISValidateCarNumber:(NSString *)string;

+ (BOOL)stringIsValidateUrl:(NSString *)string;

+ (BOOL)stringISValidatePersonCardNumber:(NSString *)string;

+ (BOOL)stringJustHasNumberAndCharacter:(NSString *)string;

+ (BOOL)stringJustHasNumber:(NSString *)string;

+ (BOOL)stringChineseNumberCharacterOnly:(NSString *)string;

+ (BOOL)sourceString:(NSString*)sourceString regexMatch:(NSString *)regexString;

+ (NSString*)stringFromFile:(NSString*)path;

+ (NSString*)currentTimeStampString;

+ (NSString *)unarchieveFromPath:(NSString *)filePath;

+ (NSString *)MD5:(NSString *)string;

// md5对NSData类型进行进行加密
+ (NSString *)md5WithSourceData:(NSData *)sourceData;

// base64加密
+ (NSString *)base64EncodingWithSourceData:(NSData *)data;

// base64 解密
+ (NSData *)base64DecodingWithString:(NSString *)string;

+ (BOOL)stringContainWords:(NSString *)string words:(NSString *)words;

//SHA1加密方式
+ (NSString *)sha1WithString:(NSString *)sourceString;

+ (NSString *)sha1_base64WithString:(NSString *)sourceString;

+ (NSString *)md5_base64WithString:(NSString *)sourceString;

+ (NSString *)base64WithString:(NSString *)sourceString;

+ (NSString *)stringByTrimingLeadingWhiteSpace:(NSString *)string;

+ (NSString *)stringByTrimingTailingWhiteSpace:(NSString *)string;

+ (NSString *)stringByTrimingWhiteSpace:(NSString *)string;

+ (NSString *)urlEncode:(id)object;

+ (NSString *)encodeStringFromDict:(NSDictionary *)dict;

/**
 带key排序
 */
+ (NSString *)encodeStringFromDictWithSort:(NSDictionary *)dict;

+ (NSRange)stringRange:(NSString *)string;

/**
  *    @brief    截取指定小数位的值
  *
  *    @param    price     目标数据
  *    @param    position  有效小数位
  *
  *    @return   截取后数据
  */
+ (NSString *)notRounding:(NSNumber *)price afterPoint:(NSInteger)position;


/**
 *  汉语转拼音
 */
+ (NSString *)getPinYinFromString:(NSString *)string;

@end
