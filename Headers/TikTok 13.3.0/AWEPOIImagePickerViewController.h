//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEGalleryBaseViewControllerDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIView;
@protocol AWEGalleryBaseViewController, AWEPOIImagePickerViewControllerDelegate;

@interface AWEPOIImagePickerViewController : UIViewController <AWEGalleryBaseViewControllerDelegate>
{
    _Bool _shouldShowTip;
    id <AWEPOIImagePickerViewControllerDelegate> _delegate;
    UIView *_headerView;
    UIViewController<AWEGalleryBaseViewController> *_pictureUploadViewController;
    NSArray *_selectedImages;
    UIButton *_nextStepButton;
}

@property(nonatomic) _Bool shouldShowTip; // @synthesize shouldShowTip=_shouldShowTip;
@property(retain, nonatomic) UIButton *nextStepButton; // @synthesize nextStepButton=_nextStepButton;
@property(retain, nonatomic) NSArray *selectedImages; // @synthesize selectedImages=_selectedImages;
@property(retain, nonatomic) UIViewController<AWEGalleryBaseViewController> *pictureUploadViewController; // @synthesize pictureUploadViewController=_pictureUploadViewController;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <AWEPOIImagePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showTips;
- (id)nextStepTitle;
- (void)galleryViewController:(id)arg1 canMultSelect:(_Bool)arg2;
- (void)galleryViewControllerDataSourceChanged:(id)arg1 newSelectedAssetModelArray:(id)arg2 newTotalDuration:(double)arg3;
- (void)galleryViewController:(id)arg1 selectedPhotoCount:(long long)arg2 beforeSelectedCount:(long long)arg3 selectedAssetModelArray:(id)arg4 totalDuration:(double)arg5;
- (void)handleCancelSelection;
- (void)handleFinishSelection;
- (void)setupHeaderView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

