//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAGradientLayer, NSString, UIImageView, UILabel;

@interface IESLiveFansGroupJoinSuccessAnimationView : UIView <CAAnimationDelegate>
{
    _Bool _isAnimating;
    _Bool _horizontal;
    CDUnknownBlockType _animationDidFinish;
    long long _animationStyle;
    UIView *_backgroundView;
    UIView *_userInfoView;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_nameSubLabel;
    long long _screenStyle;
    double _userInfoTopOffset;
    CAGradientLayer *_backLayer;
    struct CGPoint _endPoint;
}

@property(retain, nonatomic) CAGradientLayer *backLayer; // @synthesize backLayer=_backLayer;
@property(nonatomic) double userInfoTopOffset; // @synthesize userInfoTopOffset=_userInfoTopOffset;
@property(nonatomic) long long screenStyle; // @synthesize screenStyle=_screenStyle;
@property(nonatomic) _Bool horizontal; // @synthesize horizontal=_horizontal;
@property(retain, nonatomic) UILabel *nameSubLabel; // @synthesize nameSubLabel=_nameSubLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long animationStyle; // @synthesize animationStyle=_animationStyle;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(copy, nonatomic) CDUnknownBlockType animationDidFinish; // @synthesize animationDidFinish=_animationDidFinish;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void).cxx_destruct;
- (void)orientationDidChange:(long long)arg1;
- (void)updateAnimationInfo:(id)arg1 withColors:(id)arg2;
- (void)stopAllAnimations;
- (void)animationsDidFinished;
- (void)groupAnimation;
- (void)opacityAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startAnimationWithInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isHorizontal:(_Bool)arg2 screenStyle:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

