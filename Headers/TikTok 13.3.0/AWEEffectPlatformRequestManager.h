//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EffectPlatformRequestDelegate-Protocol.h"

@class NSString;

@interface AWEEffectPlatformRequestManager : NSObject <EffectPlatformRequestDelegate>
{
}

- (void)requestWithURLString:(id)arg1 parameters:(id)arg2 headerFields:(id)arg3 httpMethod:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)downloadFileWithURLString:(id)arg1 downloadPath:(id)arg2 downloadProgress:(id *)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
