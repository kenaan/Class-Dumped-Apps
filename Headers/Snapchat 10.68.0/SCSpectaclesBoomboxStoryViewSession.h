//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol SCSpectaclesAppLogger;

@interface SCSpectaclesBoomboxStoryViewSession : NSObject
{
    id <SCSpectaclesAppLogger> _spectaclesLogger;
    NSString *_entryId;
    NSMutableArray *_snapViewSessions;
    NSString *_sessionId;
    long long _viewSource;
}

- (void).cxx_destruct;
- (void)endSession;
- (void)addSnapViewSession:(id)arg1;
- (id)initWithEntryId:(id)arg1 sessionId:(id)arg2 spectaclesLogger:(id)arg3 viewSource:(long long)arg4;

@end

