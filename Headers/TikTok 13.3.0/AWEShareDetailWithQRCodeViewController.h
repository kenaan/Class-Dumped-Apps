//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWESharePanelViewDelegate-Protocol.h"

@class AWEShareContext, AWEShareDetailWithQRCodeBaseContentView, AWESharePanelView, AWEUILoadingView, MASConstraint, NSNumber, NSString;

@interface AWEShareDetailWithQRCodeViewController : UIViewController <AWESharePanelViewDelegate>
{
    _Bool _isFromQRCode;
    _Bool _darkSharePanel;
    _Bool _preparingShare;
    unsigned long long _type;
    AWEShareContext *_context;
    long long _sharePlatformType;
    AWEShareDetailWithQRCodeBaseContentView *_contentView;
    AWEUILoadingView *_loadingView;
    AWESharePanelView *_sharePanelView;
    NSString *_enterFrom;
    long long _settingShareMode;
    NSNumber *_qrcodeType;
    MASConstraint *_topContainerViewCenterY;
    MASConstraint *_topContainerViewTopAlignToViewBottom;
    MASConstraint *_topContainerViewSharePanelSpace;
    MASConstraint *_sharePanelTopAlignToViewBottom;
    MASConstraint *_sharePanelBottomAlignToViewBottom;
}

@property(retain, nonatomic) MASConstraint *sharePanelBottomAlignToViewBottom; // @synthesize sharePanelBottomAlignToViewBottom=_sharePanelBottomAlignToViewBottom;
@property(retain, nonatomic) MASConstraint *sharePanelTopAlignToViewBottom; // @synthesize sharePanelTopAlignToViewBottom=_sharePanelTopAlignToViewBottom;
@property(retain, nonatomic) MASConstraint *topContainerViewSharePanelSpace; // @synthesize topContainerViewSharePanelSpace=_topContainerViewSharePanelSpace;
@property(retain, nonatomic) MASConstraint *topContainerViewTopAlignToViewBottom; // @synthesize topContainerViewTopAlignToViewBottom=_topContainerViewTopAlignToViewBottom;
@property(retain, nonatomic) MASConstraint *topContainerViewCenterY; // @synthesize topContainerViewCenterY=_topContainerViewCenterY;
@property(nonatomic) _Bool preparingShare; // @synthesize preparingShare=_preparingShare;
@property(retain, nonatomic) NSNumber *qrcodeType; // @synthesize qrcodeType=_qrcodeType;
@property(nonatomic) long long settingShareMode; // @synthesize settingShareMode=_settingShareMode;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(retain, nonatomic) AWESharePanelView *sharePanelView; // @synthesize sharePanelView=_sharePanelView;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AWEShareDetailWithQRCodeBaseContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long sharePlatformType; // @synthesize sharePlatformType=_sharePlatformType;
@property(retain, nonatomic) AWEShareContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool darkSharePanel; // @synthesize darkSharePanel=_darkSharePanel;
@property(nonatomic) _Bool isFromQRCode; // @synthesize isFromQRCode=_isFromQRCode;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool readyToShare;
- (void)openAppWithShareType:(long long)arg1;
- (id)sharePlatformUnavailableMessage:(long long)arg1;
- (_Bool)isSharePlatformAvailable:(long long)arg1;
- (id)trackPlatformStringForShareType:(long long)arg1;
- (id)getPlatformString:(long long)arg1;
- (id)saveSuccessfullyMessageForShareType:(long long)arg1;
- (id)sharePlatforms;
- (void)trackQRCodeSave;
- (id)itemIDParamNameWithQRCodeType:(unsigned long long)arg1;
- (id)shareEventWithQRCodeType:(unsigned long long)arg1;
- (void)trackShare;
- (id)generalTrackParams;
- (void)sendShareMessageWithType:(long long)arg1;
- (void)imageSavedToPhotosAlbum:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)cancelButtonTapped;
- (void)shareItemTapped:(long long)arg1;
- (void)actionCalled:(id)arg1;
- (void)dismiss;
- (void)onImageSaveSuccessfully;
- (void)shareImmediately;
- (void)_prepareToShare;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)QRCodeImageCompletionWithUrlList:(id)arg1 error:(id)arg2 placeholder:(id)arg3;
- (_Bool)shouldRequestSpecialQRCode;
- (void)fetchQRCodeImage;
- (void)configureData;
- (id)p_maskLayerForRect:(struct CGRect)arg1;
- (void)configSharePanelMask;
- (void)showSharePanel;
- (void)doAppearAnimation;
- (void)setUpSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithType:(unsigned long long)arg1 shareContext:(id)arg2 platformType:(long long)arg3 settingShareMode:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

