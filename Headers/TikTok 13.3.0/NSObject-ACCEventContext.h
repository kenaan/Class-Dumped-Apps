//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCEventContext;

@interface NSObject (ACCEventContext)
+ (void)acc_trackEvent:(id)arg1 context:(id)arg2;
- (void)acc_trackEvent:(id)arg1 context:(id)arg2;
- (void)acc_trackEvent:(id)arg1 attributes:(CDUnknownBlockType)arg2;
- (void)acc_trackEvent:(id)arg1;
@property(retain, nonatomic) ACCEventContext *acc_eventContext;
@end

