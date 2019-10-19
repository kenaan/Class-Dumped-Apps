//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTRendererController-Protocol.h"

@class GIMMe, NSString, QTMButton, YTFormattedStringLabel, YTIMusicFullscreenPromoRenderer, YTImageView, YTMSpinnableButton, YTMTagManager, YTThumbnailController;
@protocol YTResponder;

@interface YTMFullscreenPromoViewController : UIViewController <YTRendererController>
{
    YTImageView *_backgroundView;
    YTImageView *_logoView;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_bodyTextLabel;
    YTMSpinnableButton *_acceptButton;
    YTMTagManager *_tagManager;
    QTMButton *_dismissButton;
    YTThumbnailController *_thumbnailController;
    YTThumbnailController *_logoThumbnailController;
    unsigned long long _numFailures;
    id <YTResponder> _parentResponder;
    YTIMusicFullscreenPromoRenderer *_model;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)presentPostDismissClingIfNecessary;
- (void)presentErrorMessage;
- (void)loadBackgroundImage;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissAndNavigateToHome;
- (void)hideSpinner;
- (void)showSpinner;
- (void)handlePostTransaction:(id)arg1;
- (void)handleCompleteTransactionEndpoint:(id)arg1;
- (void)presentConfirmationDialog:(id)arg1;
- (void)handleTapForButtonRenderer:(id)arg1 dismissCompletion:(CDUnknownBlockType)arg2;
- (void)didTapDismissButton;
- (void)didTapAcceptButton;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void)loadWithModel:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
