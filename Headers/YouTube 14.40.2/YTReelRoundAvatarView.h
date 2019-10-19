//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTPageStyling.h"
#import "YTReelWatchTransitionItem.h"

@class CALayer, NSString, UIColor, YTImageView;

@interface YTReelRoundAvatarView : UIView <YTPageStyling, YTReelWatchTransitionItem>
{
    CALayer *_tintLayer;
    long long _pageStyle;
    _Bool _read;
    _Bool _ringHidden;
    _Bool _disabled;
    YTImageView *_avatarImageView;
    double _avatarImageSize;
    double _avatarRingThickness;
    double _innerRingThickness;
    UIColor *_readColor;
    UIColor *_unreadColor;
    UIColor *_avatarBackgroundColor;
}

@property(nonatomic, getter=isRead) _Bool read; // @synthesize read=_read;
@property(nonatomic, getter=isRingHidden) _Bool ringHidden; // @synthesize ringHidden=_ringHidden;
@property(retain, nonatomic) UIColor *avatarBackgroundColor; // @synthesize avatarBackgroundColor=_avatarBackgroundColor;
@property(retain, nonatomic) UIColor *unreadColor; // @synthesize unreadColor=_unreadColor;
@property(retain, nonatomic) UIColor *readColor; // @synthesize readColor=_readColor;
@property(nonatomic) double innerRingThickness; // @synthesize innerRingThickness=_innerRingThickness;
@property(nonatomic) double avatarRingThickness; // @synthesize avatarRingThickness=_avatarRingThickness;
@property(nonatomic) double avatarImageSize; // @synthesize avatarImageSize=_avatarImageSize;
@property(readonly, nonatomic) YTImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)updateColors;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) UIView *reelThumbnail;
@property(readonly, nonatomic) YTReelRoundAvatarView *avatarView;
- (void)animateImageToScale:(double)arg1 overlayOpacity:(double)arg2 withDuration:(double)arg3;
- (double)diameter;
- (void)layoutSubviews;
- (void)setDisabled:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) double defaultRingThickness;
@property(readonly, nonatomic) double defaultAvatarSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
