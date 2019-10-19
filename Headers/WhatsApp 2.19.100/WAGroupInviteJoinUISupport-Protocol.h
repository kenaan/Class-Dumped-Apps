//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UIViewController, WAGroupAddRequest, XMPPGroup;

@protocol WAGroupInviteJoinUISupport <NSObject>
- (void)promptToJoinGroup:(XMPPGroup *)arg1 alreadyParticipant:(_Bool)arg2 groupAddRequest:(WAGroupAddRequest *)arg3 completion:(void (^)(long long))arg4;
- (void)promptToJoinGroup:(XMPPGroup *)arg1 inviteURL:(NSURL *)arg2 inviteCode:(NSString *)arg3 displayInOtherAppButton:(_Bool)arg4 alreadyParticipant:(_Bool)arg5 completion:(void (^)(long long))arg6;
- (void)presentErrorWithTitle:(NSString *)arg1 description:(NSString *)arg2 tryAgain:(void (^)(void))arg3 withCompletion:(void (^)(void))arg4;
- (void)hideActivityIndicatorWithCompletion:(void (^)(void))arg1;
- (void)showActivityIndicatorWithText:(NSString *)arg1 cancelHandler:(void (^)(void))arg2;
- (void)dismissAnimated:(_Bool)arg1 withCompletionHandler:(void (^)(void))arg2;
- (void)presentFromViewController:(UIViewController *)arg1;
@end
