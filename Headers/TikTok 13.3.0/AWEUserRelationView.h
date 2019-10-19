//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAnimatedButton;

@interface AWEUserRelationView : UIView
{
    _Bool _isCompanyProfile;
    AWEAnimatedButton *_sendMsgBtn;
    AWEAnimatedButton *_relationTitleBtn;
    AWEAnimatedButton *_relationImgBtn;
    long long _followStatus;
    long long _followerStatus;
    UIView *_baseView;
    double _relationBtnH;
    double _relationImgBtnW;
    double _relationTitleBtnW;
    double _sendMsgBtnW;
    long long _followButtonStyle;
}

@property(nonatomic) long long followButtonStyle; // @synthesize followButtonStyle=_followButtonStyle;
@property(nonatomic) double sendMsgBtnW; // @synthesize sendMsgBtnW=_sendMsgBtnW;
@property(nonatomic) double relationTitleBtnW; // @synthesize relationTitleBtnW=_relationTitleBtnW;
@property(nonatomic) double relationImgBtnW; // @synthesize relationImgBtnW=_relationImgBtnW;
@property(nonatomic) double relationBtnH; // @synthesize relationBtnH=_relationBtnH;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) _Bool isCompanyProfile; // @synthesize isCompanyProfile=_isCompanyProfile;
@property(readonly, nonatomic) long long followerStatus; // @synthesize followerStatus=_followerStatus;
@property(readonly, nonatomic) long long followStatus; // @synthesize followStatus=_followStatus;
@property(retain, nonatomic) AWEAnimatedButton *relationImgBtn; // @synthesize relationImgBtn=_relationImgBtn;
@property(retain, nonatomic) AWEAnimatedButton *relationTitleBtn; // @synthesize relationTitleBtn=_relationTitleBtn;
@property(retain, nonatomic) AWEAnimatedButton *sendMsgBtn; // @synthesize sendMsgBtn=_sendMsgBtn;
- (void).cxx_destruct;
- (void)layoutWhenFollowed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupUIForNewFollowButtonStyle;
- (void)_resetFrameForImageFadeAnimation:(_Bool)arg1;
- (void)_resetFrameForImageAppearAnimation:(_Bool)arg1;
- (void)_resetRelationBtnAnimated:(_Bool)arg1;
- (void)p_updateDTDefaultRelationViewWithStatus:(long long)arg1 animation:(_Bool)arg2;
- (void)p_resetSymmetricViewFrame;
- (void)p_updateSymmetricViewWithStatus:(long long)arg1;
- (_Bool)isFollowButtonStyleDefaultForDT;
- (void)updateRelationTitleBtnWithStatus:(long long)arg1;
- (void)updateRelationWithFollowStatus:(long long)arg1 followerStatus:(long long)arg2 animated:(_Bool)arg3;
- (void)p_setupUI;
- (void)p_setupDefaultUI;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 isCompanyProfile:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

