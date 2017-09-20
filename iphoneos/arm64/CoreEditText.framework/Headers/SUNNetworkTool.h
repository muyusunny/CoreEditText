//
//  SUNNetworkTool.h
//  CoreEditText
//
//  Created by Sunny on 2017/4/24.
//  Copyright © 2017年 Sunny. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SUNNetworkTool : NSObject

+ (SUNNetworkTool *)sharedNetworkTool;

+ (NSString *)sha1UrlString1:(NSString *)baseUrl;

- (NSString *)sha1UrlString:(NSString *)liveStreamNum;

- (NSString *)sha1UrlString:(NSString *)liveStreamNum roomID:(NSString *)roomID userID:(NSString *)userID;

@end
