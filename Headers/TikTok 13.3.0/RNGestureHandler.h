//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSNumber, NSString, UIGestureRecognizer;
@protocol RNGestureHandlerEventEmitter;

@interface RNGestureHandler : NSObject <UIGestureRecognizerDelegate>
{
    UIGestureRecognizer *_recognizer;
    long long _lastState;
    NSArray *_handlersToWaitFor;
    NSArray *_simultaneousHandlers;
    struct RNGHHitSlop _hitSlop;
    _Bool _enabled;
    _Bool _shouldCancelWhenOutside;
    NSNumber *_tag;
    id <RNGestureHandlerEventEmitter> _emitter;
}

+ (id)findGestureHandlerByRecognizer:(id)arg1;
@property(nonatomic) _Bool shouldCancelWhenOutside; // @synthesize shouldCancelWhenOutside=_shouldCancelWhenOutside;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) UIGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(nonatomic) __weak id <RNGestureHandlerEventEmitter> emitter; // @synthesize emitter=_emitter;
@property(readonly, nonatomic) NSNumber *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)reset;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (long long)state;
- (void)sendEventsInState:(long long)arg1 forViewWithTag:(id)arg2 withExtraData:(id)arg3;
- (void)handleGesture:(id)arg1;
- (id)eventExtraData:(id)arg1;
- (void)unbindFromView;
- (void)bindToView:(id)arg1;
- (void)configure:(id)arg1;
- (id)initWithTag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

