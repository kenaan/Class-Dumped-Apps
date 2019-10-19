//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "AWEVideoClipFooterView-Protocol.h"

@class AWEAnimatedButton, AWESegmentedClipFooterPassThroughView, AWEVideoRangeSlider, CAGradientLayer, CAShapeLayer, HTSVideoSpeedControl, NSString, UICollectionView, UIColor, UILabel, UIView;
@protocol AWESegmentedClipFooterViewDelegate;

@interface AWESegmentedClipFooterView : UIImageView <AWEVideoClipFooterView>
{
    _Bool _isSegmentedClipsOpen;
    _Bool _openSpeedControlForNormal;
    _Bool _openSpeedControlForSegment;
    _Bool _isNeedSegment;
    _Bool _isInSingleSegmentEditing;
    id <AWESegmentedClipFooterViewDelegate> _delegate;
    AWEAnimatedButton *_rotateButton;
    AWEAnimatedButton *_deleteButton;
    AWEAnimatedButton *_speedControlButton;
    AWEAnimatedButton *_aniCloseButton;
    AWEAnimatedButton *_aniOkButton;
    UIImageView *_cursorView;
    UICollectionView *_framesCollectionView;
    AWESegmentedClipFooterPassThroughView *_framesCollectionLeftMaskView;
    AWESegmentedClipFooterPassThroughView *_framesCollectionRightMaskView;
    UICollectionView *_videosCollectionView;
    AWEVideoRangeSlider *_videoRangeSlider;
    HTSVideoSpeedControl *_speedControl;
    unsigned long long _currentVideoIndex;
    UIColor *_panelColor;
    UIView *_animationBgView;
    UIImageView *_leftAniImage;
    UIImageView *_midAniImage;
    UIImageView *_rightAniImage;
    UIView *_bottomMaskView;
    UILabel *_hintLabel;
    CAShapeLayer *_cornerLayer;
    CAGradientLayer *_gradientLayer;
    struct CGSize _normalItemSize;
    struct CGSize _coverItemSize;
    struct CGRect _aniOldFrame;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CAShapeLayer *cornerLayer; // @synthesize cornerLayer=_cornerLayer;
@property(nonatomic) _Bool isInSingleSegmentEditing; // @synthesize isInSingleSegmentEditing=_isInSingleSegmentEditing;
@property(nonatomic) _Bool isNeedSegment; // @synthesize isNeedSegment=_isNeedSegment;
@property(nonatomic) struct CGRect aniOldFrame; // @synthesize aniOldFrame=_aniOldFrame;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIView *bottomMaskView; // @synthesize bottomMaskView=_bottomMaskView;
@property(retain, nonatomic) UIImageView *rightAniImage; // @synthesize rightAniImage=_rightAniImage;
@property(retain, nonatomic) UIImageView *midAniImage; // @synthesize midAniImage=_midAniImage;
@property(retain, nonatomic) UIImageView *leftAniImage; // @synthesize leftAniImage=_leftAniImage;
@property(retain, nonatomic) UIView *animationBgView; // @synthesize animationBgView=_animationBgView;
@property(nonatomic) _Bool openSpeedControlForSegment; // @synthesize openSpeedControlForSegment=_openSpeedControlForSegment;
@property(nonatomic) _Bool openSpeedControlForNormal; // @synthesize openSpeedControlForNormal=_openSpeedControlForNormal;
@property(retain, nonatomic) UIColor *panelColor; // @synthesize panelColor=_panelColor;
@property(nonatomic) unsigned long long currentVideoIndex; // @synthesize currentVideoIndex=_currentVideoIndex;
@property(retain, nonatomic) HTSVideoSpeedControl *speedControl; // @synthesize speedControl=_speedControl;
@property(retain, nonatomic) AWEVideoRangeSlider *videoRangeSlider; // @synthesize videoRangeSlider=_videoRangeSlider;
@property(nonatomic) _Bool isSegmentedClipsOpen; // @synthesize isSegmentedClipsOpen=_isSegmentedClipsOpen;
@property(retain, nonatomic) UICollectionView *videosCollectionView; // @synthesize videosCollectionView=_videosCollectionView;
@property(retain, nonatomic) AWESegmentedClipFooterPassThroughView *framesCollectionRightMaskView; // @synthesize framesCollectionRightMaskView=_framesCollectionRightMaskView;
@property(retain, nonatomic) AWESegmentedClipFooterPassThroughView *framesCollectionLeftMaskView; // @synthesize framesCollectionLeftMaskView=_framesCollectionLeftMaskView;
@property(retain, nonatomic) UICollectionView *framesCollectionView; // @synthesize framesCollectionView=_framesCollectionView;
@property(nonatomic) struct CGSize coverItemSize; // @synthesize coverItemSize=_coverItemSize;
@property(nonatomic) struct CGSize normalItemSize; // @synthesize normalItemSize=_normalItemSize;
@property(retain, nonatomic) UIImageView *cursorView; // @synthesize cursorView=_cursorView;
@property(retain, nonatomic) AWEAnimatedButton *aniOkButton; // @synthesize aniOkButton=_aniOkButton;
@property(retain, nonatomic) AWEAnimatedButton *aniCloseButton; // @synthesize aniCloseButton=_aniCloseButton;
@property(retain, nonatomic) AWEAnimatedButton *speedControlButton; // @synthesize speedControlButton=_speedControlButton;
@property(retain, nonatomic) AWEAnimatedButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) AWEAnimatedButton *rotateButton; // @synthesize rotateButton=_rotateButton;
@property(nonatomic) __weak id <AWESegmentedClipFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)hintLabelHeight;
- (void)updateUIForSingleVideo;
- (void)updateSpeedControlButtonForSingleVideo;
- (void)updateRotateButtonForSingleVideo;
- (void)setupRightTopViewsFrameForSingleMode;
- (void)setupRightTopViewsFrameForTotal;
- (void)setupRightTopViewsFrameForSegment;
- (void)segmentedClipsEndAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isInVideoSegmentsEditing;
- (void)segmentedClipsEndAnimation;
- (void)segmentedClipsStartAnimationWithCell:(id)arg1;
- (void)setSpeedControlHidden:(_Bool)arg1;
- (_Bool)shouldContinueProceedure;
- (void)updateUIForXSCreenAdapt;
- (double)currentPanelHeight;
- (id)containerView;
- (void)footerViewDidDisappear;
- (void)footerViewWillDisappear;
- (void)footerViewDidAppear;
- (void)footerViewWillAppear;
- (void)buildViews;
- (id)initWithNeedSegment:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enableVideoSegementsEdit;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

