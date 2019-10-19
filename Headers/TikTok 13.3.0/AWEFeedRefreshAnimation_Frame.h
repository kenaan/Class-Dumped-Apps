//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEFeedRefreshAnimationProtocol-Protocol.h"

@class LOTAnimationView, NSString, UIViewController;

@interface AWEFeedRefreshAnimation_Frame : NSObject <AWEFeedRefreshAnimationProtocol>
{
    _Bool _isRefreshing;
    UIViewController *_controller;
    LOTAnimationView *_dragAnimation;
    LOTAnimationView *_refreshAnimation_1;
    LOTAnimationView *_refreshAnimation_2;
}

+ (id)animationWithController:(id)arg1;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(retain, nonatomic) LOTAnimationView *refreshAnimation_2; // @synthesize refreshAnimation_2=_refreshAnimation_2;
@property(retain, nonatomic) LOTAnimationView *refreshAnimation_1; // @synthesize refreshAnimation_1=_refreshAnimation_1;
@property(retain, nonatomic) LOTAnimationView *dragAnimation; // @synthesize dragAnimation=_dragAnimation;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)stopRefreshing;
- (void)beginRefreshingAfterDragEnd;
- (void)beginRefreshing;
- (void)dragToEndWithProgress:(double)arg1 refreshBlock:(CDUnknownBlockType)arg2;
- (void)_reverseDragAnimation;
- (void)dragCancellation;
- (void)dragWithProgress:(double)arg1;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

