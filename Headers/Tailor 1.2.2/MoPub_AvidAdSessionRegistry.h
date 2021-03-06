//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MoPub_InternalAvidAdSessionDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;

@interface MoPub_AvidAdSessionRegistry : NSObject <MoPub_InternalAvidAdSessionDelegate>
{
    NSMutableDictionary *_avidAdSessions;
    NSMutableDictionary *_internalAvidAdSessions;
    long long _activeSessionCount;
}

+ (id)getInstance;
@property(nonatomic) long long activeSessionCount; // @synthesize activeSessionCount=_activeSessionCount;
- (void).cxx_destruct;
- (id)findInternalAvidAdSessionByView:(id)arg1;
- (id)findInternalAvidAdSessionById:(id)arg1;
- (id)findAvidAdSessionById:(id)arg1;
@property(readonly, nonatomic) NSArray *internalAvidAdSessions;
@property(readonly, nonatomic) NSArray *avidAdSessions;
@property(readonly, nonatomic) _Bool hasActiveSessions;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)postHasActiveSessionChanged;
- (void)adSessionResignActive:(id)arg1;
- (void)adSessionBecomeActive:(id)arg1;
- (void)adSessionDidEnd:(id)arg1;
- (void)postIsEmptyChanged;
- (void)registerAvidAdSession:(id)arg1 withInternalAvidAdSession:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

