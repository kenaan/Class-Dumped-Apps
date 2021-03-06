//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCDiscoverFeedLabelOverlayViewModel, SCGradientView, SCLazy, UILabel;
@protocol SCImageDownloading;

@interface SCDiscoverFeedLabelOverlayView : UIView
{
    SCGradientView *_titleBackgroundGradientView;
    SCLazy *_secondaryPrefixIconView;
    SCLazy *_subtitlePrefixIconView;
    unsigned long long _currentTitleLanguageDirection;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_secondaryTextLabel;
    SCLazy *_adSlug;
    SCLazy *_avatarView;
    SCLazy *_badgeView;
    id <SCImageDownloading> _imageDownloader;
    SCDiscoverFeedLabelOverlayViewModel *_viewModel;
    double _topObstructionHeight;
    double _bottomObstructionHeight;
}

@property(nonatomic) double bottomObstructionHeight; // @synthesize bottomObstructionHeight=_bottomObstructionHeight;
@property(nonatomic) double topObstructionHeight; // @synthesize topObstructionHeight=_topObstructionHeight;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(copy, nonatomic) SCDiscoverFeedLabelOverlayViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_layoutTitleLabelWithEffectiveTextBounds:(struct CGRect)arg1 startYPos:(double)arg2 layoutTopToBottom:(_Bool)arg3;
- (void)_layoutSubtitleLabelWithEffectiveTextBounds:(struct CGRect)arg1 startYPos:(double)arg2 layoutTopToBottom:(_Bool)arg3;
- (void)_applyLabelTextAlignment;
- (void)_layoutSubviewsBottomToTop;
- (void)_layoutSubviewsTopToBottom;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

