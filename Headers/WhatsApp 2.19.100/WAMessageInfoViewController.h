//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatMessagesViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WADetailsTableSizeObserver-Protocol.h"
#import "WANavigationControllerPopFromAnimating-Protocol.h"

@class NSString, UIScrollView, UITableView, UIView, WAMessage, WAMessageInfoSecondaryTableViewDataSource;

@interface WAMessageInfoViewController : WAChatMessagesViewController <UIGestureRecognizerDelegate, WADetailsTableSizeObserver, WANavigationControllerPopFromAnimating>
{
    UIView *_bottomBorderView;
    UIScrollView *_containerScrollView;
    _Bool _needsSetInitialPosition;
    _Bool _secondaryTableViewUpdateScheduled;
    WAMessage *_message;
    UITableView *_secondaryTableView;
    WAMessageInfoSecondaryTableViewDataSource *_secondaryTableViewDataSource;
}

+ (_Bool)automaticallyAdjustsTableViewContentInsets;
+ (_Bool)isEditModeSupported;
+ (_Bool)isMessageActive:(id)arg1;
@property(readonly, nonatomic) WAMessageInfoSecondaryTableViewDataSource *secondaryTableViewDataSource; // @synthesize secondaryTableViewDataSource=_secondaryTableViewDataSource;
@property(readonly, nonatomic) UITableView *secondaryTableView; // @synthesize secondaryTableView=_secondaryTableView;
@property(readonly, nonatomic) WAMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)stickerPackViewController:(id)arg1 didTapDownloadButtonForStickerPack:(id)arg2;
- (unsigned long long)presentationContextForBubbleTableViewCell:(id)arg1;
- (_Bool)usesScreenEdgePanGestureRecognizerForCustomPopTransition;
- (id)preferredPopFromInteractionController;
- (id)popFromAnimationIdentifier;
- (void)popViewController;
- (void)chatStorageDidRevokeMessages:(id)arg1;
- (void)didDeleteMessagesInChatSession:(id)arg1;
- (void)didUpdateMessage:(id)arg1;
- (void)handleMessageDeliveryStatusChangedNotification:(id)arg1;
- (void)fadeOutDateBubblesWithAnimation:(_Bool)arg1;
- (void)reloadMessagesControllerAtMessage:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateViewPositions;
- (void)tableViewContentSizeDidChange;
- (void)tableViewContentSizeWillChange;
- (void)updateSecondaryTableView;
- (void)setNeedsUpdateSecondaryTableView;
- (void)reloadTableViewAfterExpandingMessageBubble;
- (void)reloadAfterFontSizeDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (id)uniqueIdentifier;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewDidLoad;
- (id)createSecondaryTableViewDataSource;
- (id)createSecondaryTableView;
- (void)dealloc;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

