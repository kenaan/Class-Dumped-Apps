//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEWebViewConfigProtocol-Protocol.h"

@class NSString;

@interface AWEWebConfigImpl : NSObject <AWEWebViewConfigProtocol>
{
}

+ (void)load;
- (id)wkAllowList;
- (_Bool)falconEnable;
- (id)adConfigAppstoreWhiteList;
- (id)adConfigJumpAllowList;
- (id)adConfigAllowClickJumpWhiteList;
- (double)adConfigClickJumpInterval;
- (_Bool)adConfigIsAutoJumpEnabled;
- (_Bool)adConfigIsClickJumpWithinInfoPlist;
- (id)adConfigInterceptTips;
- (id)adConfigInterceptList;
- (_Bool)adConfigIsClickJumpEnabled;
- (id)jsBridgeWhiteList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

