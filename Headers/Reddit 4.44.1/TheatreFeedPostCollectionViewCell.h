//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseCollectionViewCell.h>

@class TheatreFeedPostView;

@interface TheatreFeedPostCollectionViewCell : BaseCollectionViewCell
{
    TheatreFeedPostView *_theatreFeedPostView;
}

@property(retain, nonatomic) TheatreFeedPostView *theatreFeedPostView; // @synthesize theatreFeedPostView=_theatreFeedPostView;
- (void).cxx_destruct;
- (void)noLongerPastVisibilityThreshold;
- (void)noLongerFullyVisible;
- (void)didEndDisplayingCell;
- (void)didBecomeFullyVisible;
- (void)didPassVisibilityThreshold;
- (void)willBeginDisplayingCell;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

