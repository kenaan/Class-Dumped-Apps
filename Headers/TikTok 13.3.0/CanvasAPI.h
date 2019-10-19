//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface CanvasAPI : NSObject <RCTBridgeModule>
{
}

+ (void)draw:(id)arg1 actions:(id)arg2;
+ (const struct RCTMethodInfo *)__rct_export__312;
+ (const struct RCTMethodInfo *)__rct_export__211;
+ (const struct RCTMethodInfo *)__rct_export__100;
+ (void)load;
+ (id)moduleName;
- (void)release:(id)arg1;
- (id)drawSync:(id)arg1 actions:(id)arg2;
- (id)measureText:(id)arg1 fontSize:(double)arg2;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

