//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

@class UIColor, YTMInkTouchController;

@interface YTMCollectionViewCell : YTCollectionViewCell
{
    YTMInkTouchController *_inkTouchController;
    unsigned long long _cellPosition;
    _Bool _inMusicHistoryPage;
}

+ (double)wideThumbnailHeightForCellWidth:(double)arg1;
+ (double)narrowCellWidthForSize:(struct CGSize)arg1;
+ (struct CGSize)wideCellSizeForSize:(struct CGSize)arg1 metadataHeight:(double)arg2;
+ (struct CGSize)narrowCellSizeForSize:(struct CGSize)arg1 metadataHeight:(double)arg2;
+ (struct CGPoint)contentInset;
@property(nonatomic, getter=isInMusicHistoryPage) _Bool inMusicHistoryPage; // @synthesize inMusicHistoryPage=_inMusicHistoryPage;
- (void).cxx_destruct;
- (double)rightOffset;
- (double)leftOffset;
- (struct CGRect)thumbnailFrame;
- (unsigned long long)cellPosition;
- (double)getHeightAndSizeMetadata:(id)arg1 metadataWidth:(double)arg2 transferButtonVisible:(_Bool)arg3 transferButtonOverThumbnail:(_Bool)arg4;
- (struct CGSize)cellSizeForEntry:(id)arg1 collectionViewSize:(struct CGSize)arg2;
- (void)layoutThumbnail:(id)arg1 withMetadata:(id)arg2 transferButton:(id)arg3;
- (void)layoutThumbnail:(id)arg1 withMetadata:(id)arg2;
- (_Bool)isNarrow;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
@property(nonatomic) struct CGRect inkViewFrame;
@property(retain, nonatomic) UIColor *highlightInkColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end
