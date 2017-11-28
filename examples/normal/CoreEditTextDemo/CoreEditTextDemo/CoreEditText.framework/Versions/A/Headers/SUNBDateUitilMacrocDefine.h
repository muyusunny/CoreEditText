//
//  SUNBDateUitilMacrocDefine.h
//  CoreEditText
//
//  Created by Sunny on 16-1-20.
//  Copyright (c) 2016年 Sunny. All rights reserved.
//

/**
 *  日期相关工具宏
 */

#import "SUNBDateUitil.h"

/**
 *  获取当前日历
 */
#define SUNBDateCurrentCalendar [SUNBDateUitil sharedCalendar]

/**
 *  获取单例格式化器
 */
#define SUNBDateShareFormatter [SUNBDateUitil sharedDateFormatter]

/**
 *  相对现在日期得间隔天数
 */
#define SUNBDateDaysAgo(aDate) [SUNBDateUitil daysAgoFromNow:aDate]

/**
 *  不以午夜为基准计算天数之前
 */
#define SUNBDateDaysAgoAgainstMidNight(aDate) [SUNBDateUitil daysAgoAgainstMidnight:aDate]

/**
 *  获取一个时间与当前时间间隔详情字符串
 */
#define SUNBDateTimeAgoString(aDate) [SUNBDateUitil detailTimeAgoString:aDate]

/**
 *  获取一个时间戳与当前时间的间隔详情字符串
 */
#define SUNBDateTimeAgoStringByTimeInterval(timeInterval) [SUNBDateUitil detailTimeAgoStringByInterval:timeInterval]

/**
 *  天数间隔文本字符串
 */
#define SUNBDateStringDaysAgo(aDate) [SUNBDateUitil stringDaysAgo:aDate]

/**
 *  这个日期是星期几
 */
#define SUNBDateGetWeekDay(aDate) [SUNBDateUitil weekDay:aDate]

/**
 *  返回这个日期是星期几字符串
 */
#define  SUNBDateGetWeekDayString(aDate) [SUNBDateUitil weekDayString:aDate]

/**
 *  返回这个日期在全年中是第多少周字符串
 */
#define  SUNBDateGetWeekNumString(aDate) [SUNBDateUitil weekNumberString:aDate]

/**
 *  在全年中是第多少周
 */
#define SUNBDateGetWeekNum(aDate) [SUNBDateUitil weekNumber:aDate]

/**
 *  获取日期中得年份
 */
#define SUNBDateGetYear(aDate) [SUNBDateUitil year:aDate]

/**
 *  获取日期中得月份
 */
#define SUNBDateGetMonth(aDate) [SUNBDateUitil month:aDate]

/**
 *  获取日期中的日
 */
#define SUNBDateGetDay(aDate) [SUNBDateUitil day:aDate]

/**
 *  获取日期中得小时
 */
#define SUNBDateGetHour(aDate) [SUNBDateUitil hour:aDate]

/**
 *  获取日期中的分钟
 */
#define SUNBDateGetMinute(aDate) [SUNBDateUitil minute:aDate]

/**
 *  日期转字符串
 */
#define SUNBDateToString(aDate) [SUNBDateUitil stringFromDate:aDate]

/**
 *  字符串转日期
 */
#define SUNBDateFromString(aString) [SUNBDateUitil dateFromString:aString]

/**
 *  字符串转日期详细时间
 */
#define SUNBDateTimeFromString(aString) [SUNBDateUitil dateTimeFromString:aString]

/**
 *  将时间戳转成日期
 */
#define SUNBDateFromTimeInterval(timeInterval) [SUNBDateUitil dateFromTimeInterval:timeInterval]

/**
 *  按照某个格式将日期转成字符串
 */
#define SUNBDateToStringByFormat(aDate,format) [SUNBDateUitil stringFromDate:aDate withFormat:format]

/**
 *  按照某个格式将字符串转成日期
 */
#define SUNBDateFromStringByFormat(aString,format) [SUNBDateUitil dateFromString:aString withFormat:format]

/**
 *  这个日期所在周的起始日期
 */
#define SUNBDateBeginningOfWeek(aDate) [SUNBDateUitil beginningOfWeek:aDate]

/**
 *  这个日期的起始时间
 */
#define SUNBDateBeginningOfDay(aDate) [SUNBDateUitil beginningOfDay:aDate]

/**
 *  这个日期所在周的结束日期
 */
#define SUNBDateEndOfWeek(aDate) [SUNBDateUitil endOfWeek:aDate]

/**
 *  普通日期格式字符串
 */
#define SUNBDateFormatString [SUNBDateUitil dateFormatString]

/**
 *  普通时间格式字符串
 */
#define SUNBDateTimeFormatString [SUNBDateUitil timeFormatString]

/**
 *  时间戳格式字符串
 */
#define SUNBDateTimeStampFormatString [SUNBDateUitil timestampFormatString]

/**
 *  数据库存储格式字符串
 */
#define SUNBDateDataBaseFormatString [SUNBDateUitil dbFormatString]

/**
 *  生日转年龄
 */
#define SUNBDateBirthDayToAge(date) [SUNBDateUitil birthdayToAge:date]

/**
 *  生日转年龄
 */
#define SUNBDateBirthDayToAgeByTimeInterval(timeInterval) [SUNBDateUitil birthdayToAgeByTimeInterval:timeInterval]

/**
 *  日期转星座
 */
#define SUNBDateToConstellation(date) [SUNBDateUitil dateToConstellation:date]

/**
 *  时间戳转星座
 */
#define SUNBDateToConstellationByTimeInterval(timeInterval) [SUNBDateUitil dateToConstellationByTimeInterval:timeInterval]


/**
 当前时间戳，精确到毫秒
 */
#define SUNBDateToShiJianChuoHaoMiao   [SUNBDateUitil dateToShiJianChuoHaoMiao]

/**
 当前时间戳，精确到秒
 */
#define SUNBDateToShiJianChuoMiao   [SUNBDateUitil dateToShiJianChuoMiao]



