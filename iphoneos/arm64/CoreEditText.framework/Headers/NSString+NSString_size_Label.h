//
//  NSString+NSString_size_Label.h
//  返回字符串的大小
//
//  Created by Sunny on 16-06-24.
//  Copyright (c) 2016年 Sunny. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSString (NSString_size_Label)

/**ios 7 下 lineBreakModel 无意义,只需通过字体就可以得到尺寸，非ios 7 ，lineBreakModel 需要定义*/
- (CGSize) sizeWithFontSize:(NSInteger) fontSize maxSize:(CGSize)maxSize lineBreakModel:(NSLineBreakMode)lineBreakModel;


@end
