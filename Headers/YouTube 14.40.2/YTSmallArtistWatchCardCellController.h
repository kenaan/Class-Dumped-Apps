//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTInnerTubeCellController.h"

@class YTIWatchCardListRenderer, YTSmallArtistWatchCardCell;

@interface YTSmallArtistWatchCardCellController : YTInnerTubeCellController
{
    YTIWatchCardListRenderer *_renderer;
    YTSmallArtistWatchCardCell *_cell;
    _Bool _expanded;
}

- (void).cxx_destruct;
- (void)didTapExpandView;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1;
- (void)setCell:(id)arg1;
- (void)dealloc;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

@end

