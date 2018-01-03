//
//  SUNBStringMacrocDefine.h
//  CoreEditText
//
//  Created by Sunny on 16-1-20.
//  Copyright (c) 2016年 Sunny. All rights reserved.
//

/**
 *  文件描述
 * 
 *  这个工具宏封装了大部分字符串常用的便捷方法
 */

#import "SUNBStringUitil.h"

/*!
 *  @brief 字符串转Data
 *
 *  @param string 字符串
 *
 *  @return data
 */
#define SunStringToData(string)         [SUNBStringUitil stringToData:string]

/*!
 *  @brief data转字符串
 *
 *  @param string data
 *
 *  @return string
 */
#define SunDataToString(DataString)       [SUNBStringUitil DataToString:DataString]

/*!
 *  @brief data转char
 *
 *  @param DataString data
 *
 *  @return char
 */
#define SunDataToChar(DataString)         [SUNBStringUitil DataToChar:DataString]

/*!
 *  @brief char转data
 *
 *  @param CharString char
 *
 *  @return data
 */
#define SunCharToData(CharString)         [SUNBStringUitil charToData:CharString]


/**
 string字符串中是否包含特定字符

 @param string 字符串
 @param words 字符
 @return yes包含，no不包含
 */
#define SunStringContainWords(string,word) [SUNBStringUitil stringContainWords:string words:word]

/**
 *  字符串是否为空
 */
#define SUNBStringIsNull(string) [SUNBStringUitil stringIsNull:string]

/**
 *  字符串是否全为空格
 */
#define SUNBStringIsAllWhiteSpace(string) [SUNBStringUitil stringIsAllWhiteSpace:string]

/**
 *  字符串转NSInteger
 */
#define SUNBStringToInt(string) [SUNBStringUitil stringToInt:string]

/**
 *  字符串转CGFloat
 */
#define SUNBStringToFloat(string) [SUNBStringUitil stringToFloat:string]

/**
 *  字符串转double
 */
#define SUNBStringToDouble(string) [SUNBStringUitil stringToDouble:string]

/**
 *  字符串转Bool
 */
#define SUNBStringToBool(string) [SUNBStringUitil stringToBool:string]

/**
 *  int转字符串
 */
#define SUNBStringFromInt(int) [SUNBStringUitil intToString:int]

/**
 *  float转字符串
 */
#define SUNBStringFromFloat(float) [SUNBStringUitil floatToString:float]

/**
 *  double转字符串
 */
#define SUNBStringFromDouble(double) [SUNBStringUitil doubleToString:double]

/**
 *  bool转字符串
 */
#define SUNBStringFromBool(bool) [SUNBStringUitil boolToString:bool]

/**
 *  字符串是否合法邮箱
 */
#define SUNBStringIsEmail(string) [SUNBStringUitil stringIsValidateEmailAddress:string]

/**
 *  字符串是否合法手机号码
 */
#define SUNBStringIsMobilePhone(string) [SUNBStringUitil stringISValidateMobilePhone:string]

/**
 *  字符串是否合法url
 */
#define SUNBStringIsUrl(string) [SUNBStringUitil stringIsValidateUrl:string]

/**
 *  字符串是否合法座机
 */
#define SUNBStringIsPhone(string) [SUNBStringUitil stringIsValidatePhone:string]

/**
 *  字符串是否合法邮政编码
 */
#define SUNBStringIsMailCode(string) [SUNBStringUitil stringIsValidateMailCode:string]

/**
 *  字符串是否合法身份证号
 */
#define SUNBStringIsPersonCardNumber(string) [SUNBStringUitil stringISValidatePersonCardNumber:string]

/**
 *  字符串是否合法车牌号
 */
#define SUNBStringIsCarNumber(string) [SUNBStringUitil stringISValidateCarNumber:string]

/**
 *  字符串是否只有中文字符
 */
#define SUNBStringChineseOnly(string) [SUNBStringUitil stringIsAllChineseWord:string]

/**
 *  字符串是否只有英文字符
 */
#define SUNBStringCharNumOnly(string) [SUNBStringUitil stringJustHasNumberAndCharacter:string]

/**
 *  字符串是否只包含字符，中文，数字
 */
#define SUNBStringCharNumChineseOnly(string) [SUNBStringUitil stringChineseNumberCharacterOnly:string]

/**
 *  字符串是否纯数字
 */
#define SUNBStringNumOnly(string) [SUNBStringUitil stringJustHasNumber:string]

/**
 *  从文件中读取出字符串
 */
#define SUNBStringFromFile(path) [SUNBStringUitil stringFromFile:path]

/**
 *  从归档路径读取出字符串
 */
#define SUNBStringUnArchieve(path) [SUNBStringUitil unarchieveFromPath:path]

/**
 *  获取一个当前时间戳字符串
 */
#define SUNBStringCurrentTimeStamp [SUNBStringUitil currentTimeStampString]

/**
 *  将字符串转为MD5字符串
 */
#define SUNBStringToMD5(string) [SUNBStringUitil MD5:string]

/**
 将NSData转为MD5字符串
 */
#define SUNBStringToMD5WithData(data) [SUNBStringUitil md5WithSourceData:data]

/**
 将NSData转为Base64字符串(加密)
 */
#define SUNBStringToBase64(data) [SUNBStringUitil base64EncodingWithSourceData:data]

/**
 将字符串转为Base64数据(解密)
 */
#define SUNBDataToBase64(string) [SUNBStringUitil base64DecodingWithString:string]

/**
 将字符串转为SHA1字符串
 */
#define SUNBStringToSha1(string) [SUNBStringUitil sha1WithString:string]

/**
 将字符串转为SHA1_BASE64字符串
 */
#define SUNBStringToSha1_Base64(string) [SUNBStringUitil sha1_base64WithString:string]

/**
 将字符串转为MD5_BASE64字符串
 */
#define SUNBStringToMd5_Base64(string) [SUNBStringUitil md5_base64WithString:string]

/**
 将字符串转为BASE64字符串
 */
#define SUNBStringToBase64String(string) [SUNBStringUitil base64WithString:string]

/**
 *  返回去除字符串首的空格的字符串
 */
#define SUNBStringClearLeadingWhiteSpace(string) [SUNBStringUitil stringByTrimingLeadingWhiteSpace:string]

/**
 *  返回去除字符串结尾的空格的字符串
 */
#define SUNBStringClearTailingWhiteSpace(string) [SUNBStringUitil stringByTrimingTailingWhiteSpace:string]

/**
 *  返回去除字符串中所有的空格的字符串
 */
#define SUNBStringClearAllWhiteSpace(string) [SUNBStringUitil stringByTrimingWhiteSpace:string]

/**
 *  Url编码对象,通常是字符串,返回编码后的字符串
 */
#define SUNBStringEncodeString(string) [SUNBStringUitil urlEncode:string]

/**
 *  Url编码一个字典,键值对用@链接,返回编码后的字符串
 */
#define SUNBStringEncodeDict(aDict) [SUNBStringUitil encodeStringFromDict:aDict]

/**
 *  Url编码一个字典,键值对用@链接,返回编码后的字符串(添加Key排序)
 */
#define SUNBStringEncodeDictWithSort(aDict)[SUNBStringUitil encodeStringFromDictWithSort:aDict]

/**
 *  返回字符串范围
 */
#define SUNBStringRange(string) [SUNBStringUitil stringRange:string]

/*!
 *  @brief iOS数据解析精度问题解决，目标位数保留小数点后两位数
 *
 *  @param Number 需要格式化的数据
 *
 *  @return 具体返回的有效两位小数
 */
#define SUNNumberHaveRounding(Number) [SUNBStringUitil notRounding:Number afterPoint:2]

/*!
 *  @brief iOS数据解析精度问题解决，目标位数保留小数点后N位数
 *
 *  @param Number 需要格式化的数据
 *
 *  @return 具体返回的有效小数点数
 */
#define SUNNumberHaveRoundingToN(Number,N) [SUNBStringUitil notRounding:Number afterPoint:N]

/**
 一键把汉字转换为汉语拼音

 @param string 需要转换的汉字
 @return 转换成功的拼音
 */
#define SUNGetPinYinFormString(string) [SUNBStringUitil getPinYinFromString:string]


