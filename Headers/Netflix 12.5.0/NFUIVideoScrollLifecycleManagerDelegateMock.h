//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUIVideoScrollLifecycleManagerDelegate-Protocol.h"

@class NSArray;

@interface NFUIVideoScrollLifecycleManagerDelegateMock : NSObject <NFUIVideoScrollLifecycleManagerDelegate>
{
    _Bool _didCallDelegateMethod;
    _Bool _isScrolling;
    NSArray *_playableItems;
    NSArray *_pausableItems;
    NSArray *_stoppableItems;
}

@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(copy, nonatomic) NSArray *stoppableItems; // @synthesize stoppableItems=_stoppableItems;
@property(copy, nonatomic) NSArray *pausableItems; // @synthesize pausableItems=_pausableItems;
@property(copy, nonatomic) NSArray *playableItems; // @synthesize playableItems=_playableItems;
@property(nonatomic) _Bool didCallDelegateMethod; // @synthesize didCallDelegateMethod=_didCallDelegateMethod;
- (void).cxx_destruct;
- (void)reset;
- (void)playableStateDidChangeForPlayable:(id)arg1 pausable:(id)arg2 stoppable:(id)arg3 whileScrolling:(_Bool)arg4;

@end

