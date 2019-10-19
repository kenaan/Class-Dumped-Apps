//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWEBDASDKMediator-Protocol.h"
#import "BDASDKProtocol-Protocol.h"

@class NSString;

@interface AWEBDASDKMediator : HTSService <BDASDKProtocol, AWEBDASDKMediator>
{
}

- (void)monitorService:(id)arg1 value:(id)arg2 extra:(id)arg3;
- (void)eventV3:(id)arg1 params:(id)arg2 isDoubleSending:(_Bool)arg3;
- (void)eventData:(id)arg1;
- (void)registerMediator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

