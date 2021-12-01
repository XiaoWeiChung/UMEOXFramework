//
//  UmeoxNotificationCenter.h
//  UmeoxFramework
//
//  Created by 陈晓伟 on 2021/11/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UmeoxNotificationCenter : NSObject
// 单例对象
+ (instancetype)shareInstance;
/*
    notification : Push notification.
    isTapPush : Whether it is triggered by a click push.
 */
- (void)handlePushRemote:(NSDictionary *)apnsBody isTapPush:(BOOL)isTapPush;
@end

NS_ASSUME_NONNULL_END
