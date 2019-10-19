//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTDShareBaseViewController.h"

#import "AWEShareViewControllerProtocol-Protocol.h"
#import "BTDShareActionDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AWEShareIconAndTitleCell, NSMutableArray, NSString, UIButton, UILabel, UIPanGestureRecognizer, UIScrollView, UIView;

@interface AWEAwemeShareViewController : BTDShareBaseViewController <UIGestureRecognizerDelegate, BTDShareActionDelegate, UIScrollViewDelegate, AWEShareViewControllerProtocol>
{
    _Bool _isBGColorWhite;
    _Bool _isMaskLayerHidden;
    _Bool _hasDouPlusTracked;
    _Bool _hasWithoutWatermarkTracked;
    NSMutableArray *_firstLineShareChannels;
    NSMutableArray *_secondLineShareChannels;
    CDUnknownBlockType _hideFilter;
    long long _hideOptions;
    unsigned long long _maskOption;
    UIView *_contentBaseView;
    double _viewBaseHeight;
    double _viewHeight;
    UIButton *_cancelButton;
    UILabel *_titleLabel;
    UIScrollView *_firstLineView;
    UIScrollView *_secondLineView;
    UIView *_effectView;
    UIView *_separatorCellFirstLine;
    UIView *_separatorCellSecondLine;
    NSMutableArray *_extensionArray;
    UIPanGestureRecognizer *_panGes;
    AWEShareIconAndTitleCell *_douPlusCell;
    AWEShareIconAndTitleCell *_withoutWatermarkCell;
    struct CGPoint _lastLocation;
}

+ (id)ntType;
@property(nonatomic) __weak AWEShareIconAndTitleCell *withoutWatermarkCell; // @synthesize withoutWatermarkCell=_withoutWatermarkCell;
@property(nonatomic) _Bool hasWithoutWatermarkTracked; // @synthesize hasWithoutWatermarkTracked=_hasWithoutWatermarkTracked;
@property(nonatomic) __weak AWEShareIconAndTitleCell *douPlusCell; // @synthesize douPlusCell=_douPlusCell;
@property(nonatomic) _Bool hasDouPlusTracked; // @synthesize hasDouPlusTracked=_hasDouPlusTracked;
@property(nonatomic) _Bool isMaskLayerHidden; // @synthesize isMaskLayerHidden=_isMaskLayerHidden;
@property(nonatomic) _Bool isBGColorWhite; // @synthesize isBGColorWhite=_isBGColorWhite;
@property(nonatomic) struct CGPoint lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) UIPanGestureRecognizer *panGes; // @synthesize panGes=_panGes;
@property(retain, nonatomic) NSMutableArray *extensionArray; // @synthesize extensionArray=_extensionArray;
@property(retain, nonatomic) UIView *separatorCellSecondLine; // @synthesize separatorCellSecondLine=_separatorCellSecondLine;
@property(retain, nonatomic) UIView *separatorCellFirstLine; // @synthesize separatorCellFirstLine=_separatorCellFirstLine;
@property(retain, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UIScrollView *secondLineView; // @synthesize secondLineView=_secondLineView;
@property(retain, nonatomic) UIScrollView *firstLineView; // @synthesize firstLineView=_firstLineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(nonatomic) double viewBaseHeight; // @synthesize viewBaseHeight=_viewBaseHeight;
@property(retain, nonatomic) UIView *contentBaseView; // @synthesize contentBaseView=_contentBaseView;
@property(nonatomic) unsigned long long maskOption; // @synthesize maskOption=_maskOption;
@property(nonatomic) long long hideOptions; // @synthesize hideOptions=_hideOptions;
@property(copy, nonatomic) CDUnknownBlockType hideFilter; // @synthesize hideFilter=_hideFilter;
@property(retain, nonatomic) NSMutableArray *secondLineShareChannels; // @synthesize secondLineShareChannels=_secondLineShareChannels;
@property(retain, nonatomic) NSMutableArray *firstLineShareChannels; // @synthesize firstLineShareChannels=_firstLineShareChannels;
- (void).cxx_destruct;
- (id)videoImpressionType:(id)arg1;
- (void)showSelfSeeNotShare;
- (void)setTitleAlignmentLeftForAlert:(id)arg1;
- (_Bool)p_shouldForbidDownloadWithModel:(id)arg1;
- (_Bool)p_needReviewSaveShareType:(long long)arg1;
- (_Bool)p_videoUnreviewed;
- (_Bool)p_unreviewedVideoToLink:(long long)arg1;
- (id)_shareModeLogWithShareType:(long long)arg1;
- (CDUnknownBlockType)_openAppBlockWithShareType:(long long)arg1;
- (id)_platformSaveSettingWithShareType:(long long)arg1;
- (_Bool)isMaskHidden;
- (void)addExtension:(id)arg1;
- (double)_calculateViewHeight;
- (void)updateBaseViewFrame;
- (id)_maskLayerForRect:(struct CGRect)arg1;
- (void)hideItemIfNeed:(id)arg1;
- (void)_updateTitleLabel;
- (void)_updateSecondLineView;
- (void)_updateFirstLineView;
- (_Bool)p_isDisabledShareType:(long long)arg1 forAweme:(id)arg2;
- (id)p_youthControlToastTextOfShareType:(long long)arg1;
- (_Bool)p_shareTypeDisabledInYouthControl:(long long)arg1;
- (void)p_showUnreviewedToastWithType:(long long)arg1;
- (void)p_showUnreviewedShareGuideWithType:(long long)arg1;
- (void)_sendShareMessageWithType:(long long)arg1;
- (void)_contentViewPanned:(id)arg1;
- (void)_cancelButtonClicked:(id)arg1;
- (void)_alertWithShareType:(long long)arg1;
- (void)_getTokenWithShareType:(long long)arg1;
- (void)_saveWithShareType:(long long)arg1;
- (_Bool)supportShareImageBySDK:(long long)arg1;
- (void)_shareAndDismiss:(long long)arg1;
- (void)_trackEventWithType:(long long)arg1 itemID:(id)arg2 authorID:(id)arg3;
- (void)_showWithAnimation;
- (void)updateVideoPrivacy;
- (_Bool)isPrivateAccount;
- (_Bool)isPrivateVideo;
- (void)tryScrollToDouPlus;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)trackDouPlusEvent;
- (_Bool)checkDouPlusDisplay;
- (void)checkWithoutWatermarkDisplay;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)shouldUseTokenWithTargetType:(unsigned long long)arg1;
- (void)showNotDownloadReason;
- (void)shareViewTapped:(id)arg1;
- (id)currentVideoControl;
- (void)showOnWindow:(id)arg1 enableMask:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismiss;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)containerFrameDidChange;
- (void)didReceiveMemoryWarning;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

