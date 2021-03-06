//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEShareContext, NSError, NSString;
@protocol AWEShareChannel, AWEShareView;

@protocol AWEShareMessage <NSObject>

@optional
- (void)willConfigureShareView:(id <AWEShareView>)arg1 withContext:(AWEShareContext *)arg2;
- (void)didFinishSharingWithContext:(AWEShareContext *)arg1 channel:(id <AWEShareChannel>)arg2 result:(unsigned long long)arg3 error:(NSError *)arg4;
- (void)willShareWithContext:(AWEShareContext *)arg1 channel:(id <AWEShareChannel>)arg2 inView:(id <AWEShareView>)arg3;
- (void)shareFinishedWithType:(long long)arg1 succeed:(_Bool)arg2;
- (void)shareWithType:(long long)arg1 context:(AWEShareContext *)arg2 targetType:(unsigned long long)arg3 targetID:(NSString *)arg4;
@end

