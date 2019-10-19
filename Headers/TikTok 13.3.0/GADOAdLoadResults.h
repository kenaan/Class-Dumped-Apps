//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADOAdLoader, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GADOAdLoadResults : NSObject
{
    long long _requestedAdCount;
    long long _returnedAdCount;
    long long _nextIndex;
    NSMutableDictionary *_adLoadResults;
    GADOAdLoader *_adLoader;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

- (void).cxx_destruct;
- (void)handleLoadResult:(id)arg1 isFinalResult:(_Bool)arg2;
- (void)insertAdLoadResult:(id)arg1 atIndex:(long long)arg2;
- (void)setReturnedAdCount:(long long)arg1;
- (id)init;
- (id)initWithAdLoader:(id)arg1 requestedAdCount:(long long)arg2;

@end

