//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ActionIDController : NSObject
{
}

- (void)showSignUpPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceLogout:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshTokens:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showStreamLimitDialog:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showYesNoDialog:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showOnHoldDialog_Ab11185:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showDialog:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleError:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
