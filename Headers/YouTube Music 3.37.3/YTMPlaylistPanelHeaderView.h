//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTMExpandableOverflowViewDelegate-Protocol.h"

@class NSArray, NSPredicate, NSString, QTMButton, UIImageView, YTFormattedStringLabel, YTIPlaylistPanelRenderer, YTMExpandableOverflowView, YTMTransferButton;

@interface YTMPlaylistPanelHeaderView : UIView <YTMExpandableOverflowViewDelegate>
{
    YTFormattedStringLabel *_titleTextLabel;
    YTFormattedStringLabel *_ownerNameLabel;
    YTMExpandableOverflowView *_overflowContainerView;
    UIImageView *_chevronImageView;
    NSArray *_playbackModificationButtons;
    NSArray *_playlistActionButtons;
    NSPredicate *_notHiddenPredicate;
    YTIPlaylistPanelRenderer *_playlistPanelRenderer;
    QTMButton *_tunerButton;
    QTMButton *_likeButton;
    QTMButton *_loopButton;
    QTMButton *_shuffleButton;
    QTMButton *_shareButton;
    QTMButton *_editButton;
    YTMTransferButton *_offlineButton;
    QTMButton *_offlineButtonContainerButton;
}

+ (double)preferredHeight;
@property(readonly, nonatomic) QTMButton *offlineButtonContainerButton; // @synthesize offlineButtonContainerButton=_offlineButtonContainerButton;
@property(readonly, nonatomic) YTMTransferButton *offlineButton; // @synthesize offlineButton=_offlineButton;
@property(readonly, nonatomic) QTMButton *editButton; // @synthesize editButton=_editButton;
@property(readonly, nonatomic) QTMButton *shareButton; // @synthesize shareButton=_shareButton;
@property(readonly, nonatomic) QTMButton *shuffleButton; // @synthesize shuffleButton=_shuffleButton;
@property(readonly, nonatomic) QTMButton *loopButton; // @synthesize loopButton=_loopButton;
@property(readonly, nonatomic) QTMButton *likeButton; // @synthesize likeButton=_likeButton;
@property(readonly, nonatomic) QTMButton *tunerButton; // @synthesize tunerButton=_tunerButton;
@property(retain, nonatomic) YTIPlaylistPanelRenderer *playlistPanelRenderer; // @synthesize playlistPanelRenderer=_playlistPanelRenderer;
- (void).cxx_destruct;
- (id)allButtons;
- (id)visiblePlaylistActionButtons;
- (id)visiblePlaybackModificationButtons;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)moveAllButtonsToSelf;
- (void)didTapPanel;
- (void)updateOverflowButton;
- (void)expandableOverflowViewDidTapExpand:(id)arg1;
- (void)expandableOverflowViewDidTapCollapse:(id)arg1;
- (void)layoutLabelsAndChevron;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithLibraryIconEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

