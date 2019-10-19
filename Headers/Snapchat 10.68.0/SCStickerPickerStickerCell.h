//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCEventListener-Protocol.h"

@class NSArray, NSString, SCStickerPickerThumbnailLoadRequest, SCUserSession, UIActivityIndicatorView, UIImage, UIImageView, UILabel, UIView;
@protocol SCPerforming, SCStickerProtocol;

@interface SCStickerPickerStickerCell : UICollectionViewCell <SCEventListener>
{
    UILabel *_label;
    UIImageView *_stickerImageView;
    UIActivityIndicatorView *_stickerImageLoadingView;
    UIView *_activeView;
    SCStickerPickerThumbnailLoadRequest *_thumbnailRequest;
    id <SCPerforming> _performer;
    CDUnknownBlockType _delayShowActivityViewBlock;
    long long _numDisplayed;
    long long _numEndDisplayed;
    double _startTime;
    unsigned long long _loadingState;
    SCUserSession *_userSession;
    NSArray *_contexts;
    _Bool _canTapToReload;
    id <SCStickerProtocol> _sticker;
    unsigned long long _sourceType;
}

@property(readonly, nonatomic) _Bool canTapToReload; // @synthesize canTapToReload=_canTapToReload;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, copy, nonatomic) id <SCStickerProtocol> sticker; // @synthesize sticker=_sticker;
- (void).cxx_destruct;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (double)emojiFontSize;
- (void)shrink;
- (void)grow;
- (_Bool)isStickerReady;
- (void)_startAnimatingStickerIfNecessary;
- (void)_stopAnimatingStickerIfNecessary;
- (void)_setImageStickerWithUserSession:(id)arg1 contexts:(id)arg2;
- (void)_setEmojiLabel;
- (void)_updateEmojiLabelFontSize;
- (void)_setEmojiSticker;
- (void)willDisplay;
- (void)didEndDisplay;
- (void)prepareForReuse;
- (void)setSticker:(id)arg1 userSession:(id)arg2 contexts:(id)arg3;
@property(readonly, copy, nonatomic) UIImage *stickerImage;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
