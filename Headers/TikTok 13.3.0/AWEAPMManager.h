//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class NSString;

@interface AWEAPMManager : NSObject <AWEUserMessage>
{
}

+ (id)signInfo;
+ (void)trackerSessionDidChange:(id)arg1;
+ (void)enable:(_Bool)arg1;
+ (void)updateUserInfo;
+ (_Bool)enableToutiaoAPM;
+ (void)attachInfo:(id)arg1 forKey:(id)arg2;
+ (id)sharedInstance;
+ (void)start;
+ (void)setupInformation;
- (void)didFinishLogout;
- (void)didFinishLogin;
- (void)bytedSettingDidChange;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

