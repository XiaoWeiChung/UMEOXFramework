//
//  UmeoxFramework.h
//  UmeoxFramework
//
//  Created by 陈晓伟 on 2021/11/10.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UmeoxFrameworkDelegate <NSObject>
- (void)loginSuccess;
@end

@interface UmeoxFramework : NSObject
// 是否在视频通话界面
@property (assign, nonatomic) BOOL isJumpToVideoVc;
// APP视图高度
@property (assign, nonatomic) CGFloat viewHeight;
// APP Y坐标
@property (assign, nonatomic) CGFloat posY;
// 导航栏
@property (strong, nonatomic) UINavigationController * _Nonnull nav;
@property (nonatomic,assign) id<UmeoxFrameworkDelegate>delegate;

// 单例对象
+ (instancetype)shareInstance;
// 初始化相关配置信息
- (void)initUmeoxFrameworkWithCode:(NSString *)code andSetAppConfig:(NSDictionary *)dict;
// 进入主页
- (UIViewController *)startMain;
// 更新宝贝信息
- (void)profileUpdated:(NSString *)oAuthCode ProfileId:(NSString *)profileId;
@end

NS_ASSUME_NONNULL_END
