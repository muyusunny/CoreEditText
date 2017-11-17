//
//  SUNBDispatchMacrocDefine.h
//  CoreEditText
//
//  Created by Sunny on 16-1-20.
//  Copyright (c) 2016年 Sunny. All rights reserved.
//

/**
 *  文件描述
 *
 *  这个工具类宏可以方便在各种队列中执行block,提供便捷的使用方法
 *  是对GCD的一个简单封装
 */

#import "SUNBDispatchCenterUitil.h"

/**
 *  主线程异步执行block
 */
#define SUNBAsyncMainQueue(block) [SUNBDispatchCenterUitil asyncMainQueue:block]

/**
 *  主线程延迟second秒异步执行block
 */
#define SUNBAsyncMainQueueDelay(second,block) [SUNBDispatchCenterUitil asyncMainQueue:block delay:second]

/**
 *  全局后台线程异步执行block
 */
#define SUNBAsyncGlobalBackgroundQueue(block) [SUNBDispatchCenterUitil asyncGlobalBackgroundQueue:block]

/**
 *  全局后台线程延迟second秒异步执行block
 */
#define SUNBAsyncGlobalBackgroundQueueDelay(second,block) [SUNBDispatchCenterUitil asyncGlobalBackgroundQueue:block delay:second]

/**
 *  全局高优先级线程异步执行block
 */
#define SUNBAsyncGlobalHighQueue(block) [SUNBDispatchCenterUitil asyncGlobalHighQueue:block]

/**
 *  全局高优先级线程延迟second秒异步执行block
 */
#define SUNBAsyncGlobalHighQueueDelay(second,block) [SUNBDispatchCenterUitil asyncGlobalHighQueue:block delay:second]

/**
 *  全局低优先级线程异步执行block
 */
#define SUNBAsyncGlobalLowQueue(block) [SUNBDispatchCenterUitil asyncGlobalLowQueue:block]

/**
 *  全局低优先级线程延迟second秒异步执行block
 */
#define SUNBAsyncGlobalLowQueueDelay(second,block) [SUNBDispatchCenterUitil asyncGlobalLowQueue:block delay:second]

/**
 *  全局默认线程异步执行block
 */
#define SUNBAsyncGlobalDefaultQueue(block) [SUNBDispatchCenterUitil asyncGlobalDefaultQueue:block]

/**
 *  全局默认线程延迟second秒异步执行block
 */
#define SUNBAsyncGlobalDefaultQueueDelay(second,block) [SUNBDispatchCenterUitil asyncGlobalDefaultQueue:block delay:second]

/**
 *  在queue线程队列异步执行block
 */
#define SUNBAsync(queue,block)  [SUNBDispatchCenterUitil asyncQueue:queue action:block]

/**
 *  在queue线程序延迟second秒异步执行block
 */
#define SUNBAsyncDelay(queue,second,block)  [SUNBDispatchCenterUitil asyncQueue:queue action:block delay:second]

/**
 *  只执行一次block,创建单例使用
 */
#define SUNBDispatchOnce(onceToken,block) [SUNBDispatchCenterUitil dispatchOnce:onceToken action:block]
