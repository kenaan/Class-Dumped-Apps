//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSLiveUserEnterViewProtocol-Protocol.h"

@class FLAnimatedImageView, HTSLiveNativeAnimationUserEnterNode, HTSLiveScorllLabelView, NSString;
@protocol HTSLiveTemplateProvider;

@interface HTSLiveSpecialUserEnterView : UIView <HTSLiveUserEnterViewProtocol>
{
    CDUnknownBlockType _onAnimationEnd;
    CDUnknownBlockType _onTouchViewTap;
    HTSLiveScorllLabelView *_contentView;
    FLAnimatedImageView *_contentBackgroundView;
    id <HTSLiveTemplateProvider> _templateProvider;
    HTSLiveNativeAnimationUserEnterNode *_enterNode;
}

@property(retain, nonatomic) HTSLiveNativeAnimationUserEnterNode *enterNode; // @synthesize enterNode=_enterNode;
@property(nonatomic) __weak id <HTSLiveTemplateProvider> templateProvider; // @synthesize templateProvider=_templateProvider;
@property(retain, nonatomic) FLAnimatedImageView *contentBackgroundView; // @synthesize contentBackgroundView=_contentBackgroundView;
@property(retain, nonatomic) HTSLiveScorllLabelView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType onTouchViewTap; // @synthesize onTouchViewTap=_onTouchViewTap;
@property(copy, nonatomic) CDUnknownBlockType onAnimationEnd; // @synthesize onAnimationEnd=_onAnimationEnd;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startShowingAnimation;
- (id)view;
- (void)updateWithEnterMessageNode:(id)arg1;
- (void)startAnimation;
- (void)setTouchCompletion:(CDUnknownBlockType)arg1;
- (void)setAnimationCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllFromSuperView;
- (void)renderUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

