//
//  SUNBDateUitil.h
//  CoreEditText
//
//  Created by Sunny on 16-1-20.
//  Copyright (c) 2016年 Sunny. All rights reserved.
//

#import <Foundation/Foundation.h>



static NSString *kNSDateHelperFormatFullDateWithTime    = @"MMM d, yyyy h:mm a";
static NSString *kNSDateHelperFormatFullDate            = @"MMM d, yyyy";
static NSString *kNSDateHelperFormatShortDateWithTime   = @"MMM d h:mm a";
static NSString *kNSDateHelperFormatShortDate           = @"MMM d";
static NSString *kNSDateHelperFormatWeekday             = @"EEEE";
static NSString *kNSDateHelperFormatWeekdayWithTime     = @"EEEE h:mm a";
static NSString *kNSDateHelperFormatTime                = @"h:mm a";
static NSString *kNSDateHelperFormatTimeWithPrefix      = @"'at' h:mm a";
static NSString *kNSDateHelperFormatSQLDate             = @"yyyy-MM-dd";
static NSString *kNSDateHelperFormatSQLTime             = @"HH:mm:ss";
static NSString *kNSDateHelperFormatSQLDateWithTime     = @"yyyy-MM-dd HH:mm";

@interface SUNBDateUitil : NSObject

+ (NSCalendar *)sharedCalendar;

+ (NSDateFormatter *)sharedDateFormatter;

+ (NSString *)detailTimeAgoString:(NSDate *)date;

+ (NSString *)detailTimeAgoStringByInterval:(long long)timeInterval;

+ (NSUInteger)daysAgoFromNow:(NSDate *)date;

+ (NSUInteger)daysAgoAgainstMidnight:(NSDate *)date;

+ (NSString *)stringDaysAgo:(NSDate *)date;

+ (NSString *)stringDaysAgoAgainstMidnight:(BOOL)flag withDate:(NSDate *)date;

+ (NSUInteger)weekDay:(NSDate *)date;

+ (NSString *)weekDayString:(NSDate *)date;

+ (NSString *)weekNumberString:(NSDate *)date;

+ (NSUInteger)weekNumber:(NSDate *)date;

+ (NSUInteger)hour:(NSDate *)date;

+ (NSUInteger)minute:(NSDate *)date;

+ (NSUInteger)month:(NSDate *)date;

+ (NSUInteger)year:(NSDate *)date;

+ (NSInteger)day:(NSDate *)date;

+ (NSDate *)dateFromTimeInterval:(long long)timeInterval;

+ (NSDate *)dateFromString:(NSString *)string;

+ (NSDate *)dateTimeFromString:(NSString *)string;

+ (NSDate *)dateFromString:(NSString *)string withFormat:(NSString *)format;

+ (NSString *)stringFromDate:(NSDate *)date withFormat:(NSString *)string;

+ (NSString *)stringFromDate:(NSDate *)date;

+ (NSString *)stringWithDateStyle:(NSDateFormatterStyle)dateStyle timeStyle:(NSDateFormatterStyle)timeStyle withDate:(NSDate *)date;

+ (NSDate *)beginningOfWeek:(NSDate *)date;

+ (NSDate *)beginningOfDay:(NSDate *)date;

+ (NSDate *)endOfWeek:(NSDate *)date;

+ (NSString *)dateFormatString;

+ (NSString *)timeFormatString;

+ (NSString *)timestampFormatString;

+ (NSString *)dbFormatString;

+ (NSString *)birthdayToAge:(NSDate *)date;

+ (NSString *)birthdayToAgeByTimeInterval:(NSTimeInterval)date;

+ (NSString *)dateToConstellation:(NSDate *)date;

+ (NSString *)dateToConstellationByTimeInterval:(NSTimeInterval)date;

+ (NSString *)dateToShiJianChuoHaoMiao;

+ (NSString *)dateToShiJianChuoMiao;

@end
