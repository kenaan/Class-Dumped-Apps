//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, HTSLiveArtTextLabel, HTSLiveAvatarImageView, NSArray, NSString, UIImageView, UILabel;
@protocol IESLiveEnvironment, IESLiveRoomService, IESLiveUserService;

@interface HTSLiveSmallGiftView : UIView
{
    CDUnknownBlockType _stopAnimationTask;
    NSArray *_groupColorArr;
    long long _groupIndex;
    _Bool _isAnimating;
    _Bool _isGroup;
    _Bool _disableComboCount;
    NSString *_giftKey;
    CDUnknownBlockType _onAnimationEnd;
    CDUnknownBlockType _onTouchViewTap;
    UIView *_containerView;
    UIView *_gradientView;
    UIView *_animationView;
    CAGradientLayer *_gradientLayer;
    CAGradientLayer *_gradientViewLayer;
    UIView *_touchView;
    HTSLiveAvatarImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_descLabel;
    UIImageView *_giftView;
    UILabel *_groupCountLabel;
    UIView *_comboContainerView;
    HTSLiveArtTextLabel *_comboXLabel;
    HTSLiveArtTextLabel *_comboNumberLabel;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveRoomService> _roomService;
    id <IESLiveUserService> _userService;
}

@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveRoomService> roomService; // @synthesize roomService=_roomService;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(nonatomic) _Bool disableComboCount; // @synthesize disableComboCount=_disableComboCount;
@property(retain, nonatomic) HTSLiveArtTextLabel *comboNumberLabel; // @synthesize comboNumberLabel=_comboNumberLabel;
@property(retain, nonatomic) HTSLiveArtTextLabel *comboXLabel; // @synthesize comboXLabel=_comboXLabel;
@property(retain, nonatomic) UIView *comboContainerView; // @synthesize comboContainerView=_comboContainerView;
@property(retain, nonatomic) UILabel *groupCountLabel; // @synthesize groupCountLabel=_groupCountLabel;
@property(retain, nonatomic) UIImageView *giftView; // @synthesize giftView=_giftView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) HTSLiveAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *touchView; // @synthesize touchView=_touchView;
@property(retain, nonatomic) CAGradientLayer *gradientViewLayer; // @synthesize gradientViewLayer=_gradientViewLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType onTouchViewTap; // @synthesize onTouchViewTap=_onTouchViewTap;
@property(copy, nonatomic) CDUnknownBlockType onAnimationEnd; // @synthesize onAnimationEnd=_onAnimationEnd;
@property(nonatomic) _Bool isGroup; // @synthesize isGroup=_isGroup;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) NSString *giftKey; // @synthesize giftKey=_giftKey;
- (void).cxx_destruct;
- (void)p_renderComboCount:(id)arg1;
- (void)touchViewDidTap;
- (_Bool)isAudience;
- (void)refreshUI;
- (void)startComboAnimation:(id)arg1 groupCount:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stopAnimation;
- (void)startFadeAnimation;
- (void)startGradientAnimation;
- (void)startAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateWithGiftMessageNode:(id)arg1;
- (void)setUpGroup;
- (_Bool)isInWhiteBackgroundRoom;
- (void)layoutUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

