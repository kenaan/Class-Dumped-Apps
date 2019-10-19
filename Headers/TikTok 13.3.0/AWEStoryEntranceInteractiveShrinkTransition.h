//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWETransitionContextProvider-Protocol.h"

@class NSString, UITabBarController, UIView, UIViewController;
@protocol AWEStoryEntranceInnerTransitionContextProvider, AWEStoryEntranceOutterTransitionContextProvider;

@interface AWEStoryEntranceInteractiveShrinkTransition : NSObject <AWETransitionContextProvider>
{
    UIView *_fromVCSnapshot;
    UIView *_toVCSnapshot;
    UIView *_avatarStartView;
    UIView *_avatarTargetView;
    UIView *_containerView;
    UIView *_maskView;
    UIView *_avatarStartSnapShot;
    UIView *_fromView;
    UITabBarController *_tabBarController;
    UIView *_snapshotTabbar;
    UIView *_tabbar;
    double _translateY;
    double _scale;
    UIViewController<AWEStoryEntranceInnerTransitionContextProvider> *_fromCP;
    UIViewController<AWEStoryEntranceOutterTransitionContextProvider> *_toCP;
    struct CGRect _avatarStartFrame;
    struct CGRect _avatarTargetFrame;
    struct CGRect _zoomMinFrame;
    struct CGRect _zoomStartFrame;
}

+ (void)load;
@property(retain, nonatomic) UIViewController<AWEStoryEntranceOutterTransitionContextProvider> *toCP; // @synthesize toCP=_toCP;
@property(retain, nonatomic) UIViewController<AWEStoryEntranceInnerTransitionContextProvider> *fromCP; // @synthesize fromCP=_fromCP;
@property double scale; // @synthesize scale=_scale;
@property double translateY; // @synthesize translateY=_translateY;
@property struct CGRect zoomStartFrame; // @synthesize zoomStartFrame=_zoomStartFrame;
@property struct CGRect zoomMinFrame; // @synthesize zoomMinFrame=_zoomMinFrame;
@property struct CGRect avatarTargetFrame; // @synthesize avatarTargetFrame=_avatarTargetFrame;
@property struct CGRect avatarStartFrame; // @synthesize avatarStartFrame=_avatarStartFrame;
@property(retain, nonatomic) UIView *tabbar; // @synthesize tabbar=_tabbar;
@property(retain, nonatomic) UIView *snapshotTabbar; // @synthesize snapshotTabbar=_snapshotTabbar;
@property(retain, nonatomic) UITabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(retain, nonatomic) UIView *avatarStartSnapShot; // @synthesize avatarStartSnapShot=_avatarStartSnapShot;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *avatarTargetView; // @synthesize avatarTargetView=_avatarTargetView;
@property(retain, nonatomic) UIView *avatarStartView; // @synthesize avatarStartView=_avatarStartView;
@property(retain, nonatomic) UIView *toVCSnapshot; // @synthesize toVCSnapshot=_toVCSnapshot;
@property(retain, nonatomic) UIView *fromVCSnapshot; // @synthesize fromVCSnapshot=_fromVCSnapshot;
- (void).cxx_destruct;
- (double)resistanceFunction:(double)arg1;
- (struct CGPoint)resistancePointForCurrentPoint:(struct CGPoint)arg1 startPoint:(struct CGPoint)arg2;
- (double)progressForCurrentPosition:(struct CGPoint)arg1 startPosition:(struct CGPoint)arg2;
- (void)cancelAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)finishAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (struct CGPoint)transformPodintFrom:(struct CGPoint)arg1 start:(struct CGPoint)arg2;
- (void)updateAnimationWithPosition:(struct CGPoint)arg1 startPosition:(struct CGPoint)arg2;
- (void)startCustomAnimationWithFromVC:(id)arg1 toVC:(id)arg2 fromContextProvider:(id)arg3 toContextProvider:(id)arg4 containerView:(id)arg5 context:(id)arg6;
- (unsigned long long)allowTriggerDirectionForContext:(id)arg1;
- (unsigned long long)interactionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

