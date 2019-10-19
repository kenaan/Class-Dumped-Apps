//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWECenteredScrollFlowLayoutDelegate-Protocol.h"
#import "AWESwitchRecordModeCollectionViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AWEAnimatedButton, AWECenteredScrollFlowLayout, AWEStickerSwitchImageView, AWEStoryCameraGradientView, AWEStoryColorManager, AWEStoryRecordAnimationView, AWEStorySwitchRecordModeView, AWEStoryTextContainerView, AWEStoryTextImageModel, AWESwitchRecordModeCollectionView, AWETransparentLabel, AWEVideoPublishViewModel, CAGradientLayer, NSArray, NSString, NSTimer, UIButton, UIImage, UIImageView, UILabel;
@protocol AWEStoryCameraContainerViewDelegate;

@interface AWEStoryCameraContainerView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, AWECenteredScrollFlowLayoutDelegate, AWESwitchRecordModeCollectionViewDelegate>
{
    _Bool _isPannedZoomListView;
    AWEAnimatedButton *_backButton;
    UIButton *_cameraFlipButton;
    AWEAnimatedButton *_settingsButton;
    AWEAnimatedButton *_stickerSwitchButton;
    AWEStoryRecordAnimationView *_recordAnimationView;
    AWEStickerSwitchImageView *_stickerSwitchImageView;
    UILabel *_stickerSwitchLabel;
    UILabel *_filterNameLabel;
    AWEAnimatedButton *_switchColorButton;
    UIImage *_textImage;
    AWEStoryTextImageModel *_textImageModel;
    AWEStoryTextContainerView *_textContainerView;
    AWEAnimatedButton *_uploadVideoButton;
    UILabel *_uploadVideoLabel;
    UIImageView *_photoImageView;
    AWEStorySwitchRecordModeView *_recordButtonSwitchView;
    AWESwitchRecordModeCollectionView *_zoomListCollectionView;
    id <AWEStoryCameraContainerViewDelegate> _delegate;
    CDUnknownBlockType _startEditBlock;
    CDUnknownBlockType _finishEditBlock;
    CDUnknownBlockType _textModeFinishButtonClickBlock;
    unsigned long long _currentMode;
    unsigned long long _recordMode;
    UILabel *_hintLabel;
    NSTimer *_hintLabelTimer;
    NSTimer *_zoomInfoTimer;
    UIView *_flashView;
    NSArray *_zoomEffects;
    AWECenteredScrollFlowLayout *_layout;
    AWETransparentLabel *_zoomEffectLabel;
    UILabel *_textFunctionHintLabel;
    AWEStoryCameraGradientView *_colorView;
    AWEStoryColorManager *_colorManager;
    CAGradientLayer *_iconGradientLayer;
    AWEVideoPublishViewModel *_publishModel;
}

@property(retain, nonatomic) AWEVideoPublishViewModel *publishModel; // @synthesize publishModel=_publishModel;
@property(nonatomic) _Bool isPannedZoomListView; // @synthesize isPannedZoomListView=_isPannedZoomListView;
@property(retain, nonatomic) CAGradientLayer *iconGradientLayer; // @synthesize iconGradientLayer=_iconGradientLayer;
@property(retain, nonatomic) AWEStoryColorManager *colorManager; // @synthesize colorManager=_colorManager;
@property(retain, nonatomic) AWEStoryCameraGradientView *colorView; // @synthesize colorView=_colorView;
@property(retain, nonatomic) UILabel *textFunctionHintLabel; // @synthesize textFunctionHintLabel=_textFunctionHintLabel;
@property(retain, nonatomic) AWETransparentLabel *zoomEffectLabel; // @synthesize zoomEffectLabel=_zoomEffectLabel;
@property(retain, nonatomic) AWECenteredScrollFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSArray *zoomEffects; // @synthesize zoomEffects=_zoomEffects;
@property(retain, nonatomic) UIView *flashView; // @synthesize flashView=_flashView;
@property(retain, nonatomic) NSTimer *zoomInfoTimer; // @synthesize zoomInfoTimer=_zoomInfoTimer;
@property(retain, nonatomic) NSTimer *hintLabelTimer; // @synthesize hintLabelTimer=_hintLabelTimer;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) unsigned long long recordMode; // @synthesize recordMode=_recordMode;
@property(nonatomic) unsigned long long currentMode; // @synthesize currentMode=_currentMode;
@property(copy, nonatomic) CDUnknownBlockType textModeFinishButtonClickBlock; // @synthesize textModeFinishButtonClickBlock=_textModeFinishButtonClickBlock;
@property(copy, nonatomic) CDUnknownBlockType finishEditBlock; // @synthesize finishEditBlock=_finishEditBlock;
@property(copy, nonatomic) CDUnknownBlockType startEditBlock; // @synthesize startEditBlock=_startEditBlock;
@property(nonatomic) __weak id <AWEStoryCameraContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AWESwitchRecordModeCollectionView *zoomListCollectionView; // @synthesize zoomListCollectionView=_zoomListCollectionView;
@property(retain, nonatomic) AWEStorySwitchRecordModeView *recordButtonSwitchView; // @synthesize recordButtonSwitchView=_recordButtonSwitchView;
@property(retain, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(retain, nonatomic) UILabel *uploadVideoLabel; // @synthesize uploadVideoLabel=_uploadVideoLabel;
@property(retain, nonatomic) AWEAnimatedButton *uploadVideoButton; // @synthesize uploadVideoButton=_uploadVideoButton;
@property(retain, nonatomic) AWEStoryTextContainerView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(retain, nonatomic) AWEStoryTextImageModel *textImageModel; // @synthesize textImageModel=_textImageModel;
@property(retain, nonatomic) UIImage *textImage; // @synthesize textImage=_textImage;
@property(retain, nonatomic) AWEAnimatedButton *switchColorButton; // @synthesize switchColorButton=_switchColorButton;
@property(retain, nonatomic) UILabel *filterNameLabel; // @synthesize filterNameLabel=_filterNameLabel;
@property(retain, nonatomic) UILabel *stickerSwitchLabel; // @synthesize stickerSwitchLabel=_stickerSwitchLabel;
@property(retain, nonatomic) AWEStickerSwitchImageView *stickerSwitchImageView; // @synthesize stickerSwitchImageView=_stickerSwitchImageView;
@property(retain, nonatomic) AWEStoryRecordAnimationView *recordAnimationView; // @synthesize recordAnimationView=_recordAnimationView;
@property(retain, nonatomic) AWEAnimatedButton *stickerSwitchButton; // @synthesize stickerSwitchButton=_stickerSwitchButton;
@property(retain, nonatomic) AWEAnimatedButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(retain, nonatomic) UIButton *cameraFlipButton; // @synthesize cameraFlipButton=_cameraFlipButton;
@property(retain, nonatomic) AWEAnimatedButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)colorViewTapped:(id)arg1;
- (struct CGRect)recordAnimationViewRectInZoomListView;
- (void)zoomTimerReached;
- (void)activeZoomLabelTimer;
- (void)hintTimerReached;
- (void)activeHintLabelTimer;
- (void)configStickerBtnWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configStickerBtnWithURLArray:(id)arg1 index:(long long)arg2 isDefault:(_Bool)arg3 isUsing:(_Bool)arg4;
- (void)configStickerBtnWithURLArray:(id)arg1 isDefault:(_Bool)arg2 isUsing:(_Bool)arg3;
- (void)setupUI;
- (void)selectZoomEffect:(id)arg1;
- (void)startZoomCellLoadingAnimationWithIndex:(long long)arg1;
- (void)stopZoomCellLoadingAnimationWithIndex:(long long)arg1;
- (void)updateZoomListCollectionViewSelectedIndex:(long long)arg1;
- (_Bool)needShowTextView;
- (_Bool)needShowZoomListCollectionView;
- (_Bool)needShowTextFunctionHintLabel;
- (_Bool)needShowRecordAnimationButton;
- (_Bool)needShowUploadRelatedView;
- (_Bool)needShowStickerRelatedView;
- (_Bool)needShowCommonAndTextView;
- (_Bool)needShowCommonView;
- (_Bool)shouldRecognizePanGestureWithView:(id)arg1;
- (_Bool)shouldRecognizeTapGestureWithView:(id)arg1 touchPoint:(struct CGPoint)arg2;
- (_Bool)shouldRecognizeLongPressGestureWithView:(id)arg1 touchPoint:(struct CGPoint)arg2;
- (void)switchRecordModeCollectionViewPressMove:(struct CGPoint)arg1 WithView:(id)arg2;
- (void)switchRecordModeCollectionViewCancelledWithView:(id)arg1;
- (void)switchRecordModeCollectionViewPressEndWithView:(id)arg1;
- (void)switchRecordModeCollectionViewPressStartWithView:(id)arg1;
- (void)switchRecordModeCollectionViewTappedWithView:(id)arg1;
- (void)shouldAdjustSelectedIndexToIndex:(id)arg1 withView:(id)arg2;
- (void)collectionViewScrollStopAtIndex:(long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)selectedZoomEffectIsReady;
- (void)selectZoomWithEffect:(id)arg1;
- (void)resetTextPicture;
- (void)refreshColor;
- (void)updateZoomEffectCellWithEffect:(id)arg1;
- (void)updateZoomEffects:(id)arg1;
- (void)stopFlash;
- (void)startFlash;
- (void)switchToMode:(unsigned long long)arg1;
- (void)hideZoomLabelWithAnimation:(_Bool)arg1;
- (void)hideZoomLabel;
- (void)showZoomLabel;
- (void)hideHintLabelWithAnimation:(_Bool)arg1;
- (void)hideHintLabel;
- (void)showHintLabel;
- (void)refreshUploadImageView;
- (void)transferToMode:(unsigned long long)arg1 animated:(_Bool)arg2 moveZoomListView:(_Bool)arg3;
- (void)configStickerBtnWithURLArray:(id)arg1;
- (void)showFilterNamaLabelWithFilterName:(id)arg1;
- (id)initWithPublishModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

