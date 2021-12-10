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
    oauthCode : Third-party login code.
    isTapPush : Whether it is triggered by a click push.
 */
- (void)processNotification:(NSDictionary *)apnsBody andAuthCode:(NSString *)oauthCode andIsTapPush:(BOOL)isTapPush;
@end

NS_ASSUME_NONNULL_END
