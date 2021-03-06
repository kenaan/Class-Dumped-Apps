//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCChatSingleMediaThumbnailView-Protocol.h"

@class SCAvatarView, SCBaseMediaThumbnailView, SCNetworkImageView, SCRepostSharedSnapMessageThumbnailViewModel, UIImageView, UILabel, UIViewController;
@protocol SCChatCellGestureDelegate, SCChatFullscreenMediaChatTableCellDelegate;

@interface SCRepostSharedSnapThumbnailView : UIView <SCChatSingleMediaThumbnailView>
{
    UIView *_creatorContainerView;
    UILabel *_creatorInfoLabel;
    SCRepostSharedSnapMessageThumbnailViewModel *_viewModel;
    UIViewController<SCChatCellGestureDelegate> *_parentVC;
    id <SCChatFullscreenMediaChatTableCellDelegate> _delegate;
    SCAvatarView *_avatarView;
    SCNetworkImageView *_logoView;
    UIImageView *_imageView;
    _Bool _privateUser;
    SCBaseMediaThumbnailView *_baseMediaThumbnailView;
}

@property(readonly, nonatomic) SCBaseMediaThumbnailView *baseMediaThumbnailView; // @synthesize baseMediaThumbnailView=_baseMediaThumbnailView;
- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)_updateCreatorInfo;
- (void)resetWithOriginalSettings;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (void)pauseVideo;
- (void)resumeVideo;
- (void)prepareVideoIfNecessary;
- (_Bool)fullScreenIsShown;
- (void)dismissFullScreenView;
- (void)resetPlayer;
- (void)resetContents;
- (struct CGSize)thumbnailSize;
- (void)setThumbnailSize:(struct CGSize)arg1;
- (id)mediaId;
- (void)setMediaViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)_initCreatorInfoView;
- (void)_initBaseMediaThumbnailViewWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)initWithParentVC:(id)arg1 delegate:(id)arg2;

@end

