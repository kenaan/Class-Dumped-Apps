//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol YTAdLayout, YTAdSlot, YTAdTrigger;

@protocol YTTriggerAdapter <NSObject>
- (void)unregisterTrigger:(id <YTAdTrigger>)arg1;
- (void)registerTrigger:(id <YTAdTrigger>)arg1 withTriggerCategory:(unsigned long long)arg2 slot:(id <YTAdSlot>)arg3 layout:(id <YTAdLayout>)arg4;
@end

