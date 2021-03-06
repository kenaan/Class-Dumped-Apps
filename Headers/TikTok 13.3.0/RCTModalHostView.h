//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RCTInvalidating-Protocol.h"

@class NSArray, NSNumber, NSString, RCTBridge, RCTModalHostViewController, RCTTouchHandler;
@protocol RCTModalHostViewInteractor;

@interface RCTModalHostView : UIView <RCTInvalidating>
{
    RCTBridge *_bridge;
    _Bool _isPresented;
    RCTModalHostViewController *_modalViewController;
    RCTTouchHandler *_touchHandler;
    UIView *_reactSubview;
    long long _lastKnownOrientation;
    NSString *_animationType;
    long long _presentationStyle;
    CDUnknownBlockType _onShow;
    NSNumber *_identifier;
    id <RCTModalHostViewInteractor> _delegate;
    NSArray *_supportedOrientations;
    CDUnknownBlockType _onOrientationChange;
}

@property(copy, nonatomic) CDUnknownBlockType onOrientationChange; // @synthesize onOrientationChange=_onOrientationChange;
@property(copy, nonatomic) NSArray *supportedOrientations; // @synthesize supportedOrientations=_supportedOrientations;
@property(nonatomic) __weak id <RCTModalHostViewInteractor> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType onShow; // @synthesize onShow=_onShow;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(copy, nonatomic) NSString *animationType; // @synthesize animationType=_animationType;
- (void).cxx_destruct;
- (unsigned long long)supportedOrientationsMask;
@property(nonatomic, getter=isTransparent) _Bool transparent;
- (_Bool)hasAnimationType;
- (void)invalidate;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)dismissModalViewController;
- (void)didUpdateReactSubviews;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (void)notifyForOrientationChange;
- (void)notifyForBoundsChange:(struct CGRect)arg1;
- (id)initWithBridge:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

