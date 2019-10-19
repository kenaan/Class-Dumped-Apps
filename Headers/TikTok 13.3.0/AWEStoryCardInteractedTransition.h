//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWETransitionContextProvider-Protocol.h"

@class NSString, UITabBarController, UIView, UIViewController;
@protocol AWEStoryCardInnerContextProvider, AWEStoryCardOuterContextProvider;

@interface AWEStoryCardInteractedTransition : NSObject <AWETransitionContextProvider>
{
    UIView *_fromVCSnapshot;
    UIView *_toVCSnapshot;
    UIView *_containerView;
    UIView *_focusView;
    UIView *_maskView;
    UIView *_tabbar;
    UITabBarController *_tabBarController;
    UIView *_snapshotTabbar;
    UIView *_fromView;
    UIView *_fromViewMigrationContainer;
    UIView *_toAvatarView;
    UIView *_toAvatarSnapshot;
    UIView *_avatarView;
    UIView *_coverView;
    UIView *_coverSnapshot;
    UIViewController<AWEStoryCardInnerContextProvider> *_fromCP;
    UIViewController<AWEStoryCardOuterContextProvider> *_toCP;
    struct CGRect _startFrame;
    struct CGRect _endFrame;
}

+ (void)load;
@property(retain, nonatomic) UIViewController<AWEStoryCardOuterContextProvider> *toCP; // @synthesize toCP=_toCP;
@property(retain, nonatomic) UIViewController<AWEStoryCardInnerContextProvider> *fromCP; // @synthesize fromCP=_fromCP;
@property(nonatomic) struct CGRect endFrame; // @synthesize endFrame=_endFrame;
@property(nonatomic) struct CGRect startFrame; // @synthesize startFrame=_startFrame;
@property(retain, nonatomic) UIView *coverSnapshot; // @synthesize coverSnapshot=_coverSnapshot;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *toAvatarSnapshot; // @synthesize toAvatarSnapshot=_toAvatarSnapshot;
@property(retain, nonatomic) UIView *toAvatarView; // @synthesize toAvatarView=_toAvatarView;
@property(retain, nonatomic) UIView *fromViewMigrationContainer; // @synthesize fromViewMigrationContainer=_fromViewMigrationContainer;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(retain, nonatomic) UIView *snapshotTabbar; // @synthesize snapshotTabbar=_snapshotTabbar;
@property(retain, nonatomic) UITabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(retain, nonatomic) UIView *tabbar; // @synthesize tabbar=_tabbar;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *focusView; // @synthesize focusView=_focusView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *toVCSnapshot; // @synthesize toVCSnapshot=_toVCSnapshot;
@property(retain, nonatomic) UIView *fromVCSnapshot; // @synthesize fromVCSnapshot=_fromVCSnapshot;
- (void).cxx_destruct;
- (double)progressForCurrentPosition:(struct CGPoint)arg1 startPosition:(struct CGPoint)arg2;
- (void)cancelAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)finishAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
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

