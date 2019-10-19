//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMButton.h"

@class YTFormattedStringLabel, YTIMusicTwoColumnItemRenderer, YTMMusicThumbnailView;
@protocol YTMTwoColumnItemLinkViewDelegate;

@interface YTMTwoColumnItemLinkView : QTMButton
{
    YTMMusicThumbnailView *_musicThumbnailView;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_subtitleLabel;
    YTIMusicTwoColumnItemRenderer *_entry;
    id <YTMTwoColumnItemLinkViewDelegate> _delegate;
}

+ (double)preferredHeight;
@property(nonatomic) __weak id <YTMTwoColumnItemLinkViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) YTMMusicThumbnailView *musicThumbnailView; // @synthesize musicThumbnailView=_musicThumbnailView;
@property(retain, nonatomic) YTIMusicTwoColumnItemRenderer *entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
- (void)didTap;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end
