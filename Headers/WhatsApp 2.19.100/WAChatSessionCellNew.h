//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WACustomSwipeActionTableViewCell.h"

#import "WAChatSessionCellProtocol-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UILabel, WABadgedLabel, WAChatSession, WAChatSessionCellLabelsView, WAChatSessionCellNewState, WAIndicatorContainerView, WALabel, WAProfilePictureDynamicThumbnailView, WATimestampLabel;
@protocol WAChatSessionCellDelegate;

@interface WAChatSessionCellNew : WACustomSwipeActionTableViewCell <WAChatSessionCellProtocol>
{
    double _currentFontSize;
    _Bool _usesLargerTextSizeConstraints;
    NSArray *_contentViewConstraints;
    NSLayoutConstraint *_largeTextNoLabelsConstraint;
    NSArray *_largeTextWithLabelsConstraints;
    struct CGSize _archivedLableBackgroundSize;
    unsigned long long _constraintState;
    _Bool _showPinButton;
    id <WAChatSessionCellDelegate> _delegate;
    _Bool _ignoreExternalUpdates;
    _Bool _disableQueuedAnimations;
    _Bool _unknownContact;
    _Bool _isLayoutRTL;
    WAChatSession *_chatSession;
    WABadgedLabel *_nameLabel;
    WATimestampLabel *_timeLabel;
    WAIndicatorContainerView *_indicatorsView;
    WAChatSessionCellLabelsView *_labelsView;
    NSLayoutConstraint *_contentLeadingMargin;
    WALabel *_messageLabel;
    UILabel *_activityLabel;
    WAProfilePictureDynamicThumbnailView *_imageViewContactPicture;
    WAChatSessionCellNewState *_state;
    unsigned long long _queuedStateID;
    WAChatSessionCellNewState *_queuedState;
}

+ (double)preferredHeight;
+ (_Bool)newTypingIndicators;
+ (id)cellWithReuseIdentifier:(id)arg1;
+ (void)initialize;
@property(nonatomic) _Bool isLayoutRTL; // @synthesize isLayoutRTL=_isLayoutRTL;
@property(nonatomic) _Bool unknownContact; // @synthesize unknownContact=_unknownContact;
@property(retain, nonatomic) WAChatSessionCellNewState *queuedState; // @synthesize queuedState=_queuedState;
@property(nonatomic) unsigned long long queuedStateID; // @synthesize queuedStateID=_queuedStateID;
@property(retain, nonatomic) WAChatSessionCellNewState *state; // @synthesize state=_state;
@property(retain, nonatomic) WAProfilePictureDynamicThumbnailView *imageViewContactPicture; // @synthesize imageViewContactPicture=_imageViewContactPicture;
@property(retain, nonatomic) UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) WALabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) NSLayoutConstraint *contentLeadingMargin; // @synthesize contentLeadingMargin=_contentLeadingMargin;
@property(retain, nonatomic) WAChatSessionCellLabelsView *labelsView; // @synthesize labelsView=_labelsView;
@property(retain, nonatomic) WAIndicatorContainerView *indicatorsView; // @synthesize indicatorsView=_indicatorsView;
@property(retain, nonatomic) WATimestampLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) WABadgedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WAChatSession *chatSession; // @synthesize chatSession=_chatSession;
@property(nonatomic) __weak id <WAChatSessionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isDisplayingSideButtons) _Bool displayingSideButtons;
- (void)cancelResizingSideButtons;
@property(nonatomic) _Bool shouldAnimatePinAction;
@property(readonly, nonatomic, getter=isResizingSideButtons) _Bool resizingSideButtons;
- (_Bool)resizingSideButtons;
- (void)hideSideButtonsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startPinAnimation;
- (void)setUnreadCount:(long long)arg1;
- (void)setArchived:(_Bool)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setPinned:(_Bool)arg1;
- (void)labelsOnChatSessionDidChange:(id)arg1;
- (void)labelDidChange:(id)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)xmppConnectionChatStateDidChange:(id)arg1;
- (void)updateCellForOldState:(id)arg1 animated:(_Bool)arg2;
- (void)updateLabelsForOldState:(id)arg1;
@property(readonly, nonatomic) _Bool hasLabels;
- (void)updateMessageLabel;
- (void)reloadFonts;
- (void)reloadCellForUpdatedChatState;
- (void)reloadCellForUpdatedChatStateWithDelayInterval:(double)arg1;
- (void)configureWithChatSession:(id)arg1 newState:(id)arg2 showPinButton:(_Bool)arg3 animated:(_Bool)arg4;
- (void)configureWithChatSession:(id)arg1 message:(id)arg2 showPinButton:(_Bool)arg3 showVerifiedName:(_Bool)arg4 startPinAnimation:(_Bool)arg5 animated:(_Bool)arg6;
- (void)configureForGroupsInCommonTableWithChatSession:(id)arg1 listFirst:(id)arg2 animated:(_Bool)arg3;
- (id)accessibilityCustomActions;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)tryQueuedAnimationWithDelay:(double)arg1;
- (void)pinAction:(id)arg1;
- (void)markUnreadAction:(id)arg1;
- (void)archiveAction:(id)arg1;
- (void)showMoreOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showMoreOptions:(id)arg1;
- (id)trailingSwipeActions;
- (id)leadingSwipeActions;
- (_Bool)useFastCompletionAnimations;
- (void)updateLeadingContentMargin;
- (void)layoutMarginsDidChange;
- (void)updateSeparatorInset;
- (void)layoutUntransformedSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool ignoreExternalUpdates;
- (void)endIgnoringExternalUpdatesAndReloadForSwipeAction;
@property(nonatomic) _Bool disableQueuedAnimations;
- (void)prepareForReuse;
- (void)installLargeTextConstraintsWithOtherConstraints:(id)arg1;
- (void)installDefaultConstraintsWithOtherConstraints:(id)arg1;
- (id)permanentConstraints;
- (void)updateConstraints;
- (_Bool)twoXLayout;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
