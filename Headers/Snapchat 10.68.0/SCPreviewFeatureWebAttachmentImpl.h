//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCEventListener-Protocol.h"
#import "SCPreviewAttachmentToolbarButtonItemDelegate-Protocol.h"
#import "SCPreviewFeatureCommerceAttachmentAttachingDelegate-Protocol.h"
#import "SCPreviewFeatureWebAttachment-Protocol.h"
#import "SCPreviewGestureResponder-Protocol.h"
#import "SCSearchAttachmentsResultViewControllerDelegate-Protocol.h"
#import "SCSearchResultsViewControllerDelegate-Protocol.h"
#import "SCSearchWebViewControllerDelegate-Protocol.h"

@class NSString, SCAttachmentsLogger, SCPreviewConfiguration, SCPreviewToolBar, SCPreviewView, SCSearchAttachmentsDataProvider, SCUserSession, UIViewController;
@protocol SCPreviewFeatureCommerceAttachment, SCPreviewFeatureWebAttachmentDelegate><SCPreviewFeatureParentViewControllerAccessing, SCPreviewLogging;

@interface SCPreviewFeatureWebAttachmentImpl : SCFeature <SCSearchAttachmentsResultViewControllerDelegate, SCSearchWebViewControllerDelegate, SCPreviewFeatureWebAttachment, SCSearchResultsViewControllerDelegate, SCEventListener, SCPreviewAttachmentToolbarButtonItemDelegate, SCPreviewFeatureCommerceAttachmentAttachingDelegate, SCPreviewGestureResponder>
{
    SCPreviewConfiguration *_configuration;
    SCUserSession *_userSession;
    UIViewController *_parentViewController;
    id <SCPreviewFeatureCommerceAttachment> _commerceAttachmentFeature;
    SCPreviewView *_previewView;
    SCPreviewToolBar *_toolbar;
    id <SCPreviewLogging> _previewLogger;
    NSString *_searchSessionId;
    unsigned long long _attachmentsQueryNumber;
    SCAttachmentsLogger *_attachmentsLogger;
    SCSearchAttachmentsDataProvider *_searchAttachmentsDataProvider;
    _Bool _openInProgress;
    id <SCPreviewFeatureWebAttachmentDelegate><SCPreviewFeatureParentViewControllerAccessing> _delegate;
    NSString *_attachmentUrlString;
}

@property(readonly, nonatomic) NSString *attachmentUrlString; // @synthesize attachmentUrlString=_attachmentUrlString;
@property(nonatomic) __weak id <SCPreviewFeatureWebAttachmentDelegate><SCPreviewFeatureParentViewControllerAccessing> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)previewFeatureCommerceAttachmentDidDetach:(id)arg1;
- (void)previewFeatureCommerceAttachment:(id)arg1 didAttachUrl:(id)arg2;
- (void)configureWithView:(id)arg1;
- (void)_logAttachmentToolUsageEnded;
- (void)_openAttachmentsView;
- (void)_closeToolbarSelectedItem;
- (void)_didDeattachUrlWithData:(id)arg1;
- (void)_didAttachUrl:(id)arg1 extraData:(id)arg2;
- (void)_willDetachUrl;
- (void)_setupSnapAttachments;
- (_Bool)_exitAttachmentSubMenu;
- (unsigned long long)didTapPreviewContainerView:(id)arg1;
- (void)attachmentToolbarButtonItemDidPressWebButton:(id)arg1;
- (void)attachmentToolbarButtonItemDidPressStoreButton:(id)arg1;
- (void)searchWebViewControllerViewDidAppear:(id)arg1;
- (void)searchAttachmentsResultViewControllerViewDidAppear:(id)arg1;
- (void)searchResultsViewController:(id)arg1 didOverscrollWithOffset:(double)arg2;
- (void)searchResultsViewController:(id)arg1 didCancelWithDismissActionType:(long long)arg2;
- (id)_addExtraLoggingData:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)updateForAttachmentItem:(_Bool)arg1;
- (_Bool)shouldShowToolbarAttachment;
- (void)updateAttachmentToolBarAttachmentStatus;
- (id)createWebAttachmentToolBarButtonItemWithTarget:(id)arg1 selector:(SEL)arg2 currentAttachmentUrl:(id)arg3;
- (void)attachmentLoggingWithExtraData:(id)arg1;
- (void)updateWithNewAttachmentUrlString:(id)arg1;
- (id)initWithUserSession:(id)arg1 previewConfiguration:(id)arg2 previewLogger:(id)arg3 commerceAttachmentFeature:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
