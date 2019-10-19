//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTResponder.h"
#import "YTReusableView.h"
#import "YTThumbnailMapping.h"

@class NSMutableArray, NSString, UIScrollView, YTIWatchCardRelatedData, YTWatchCardListHeaderView;

@interface YTWatchCardRelatedView : UIView <YTReusableView, YTResponder, YTThumbnailMapping>
{
    YTWatchCardListHeaderView *_headerView;
    UIScrollView *_carousel;
    NSMutableArray *_thumbnails;
    NSMutableArray *_labels;
    NSMutableArray *_tapTargets;
    NSMutableArray *_tapRecognizers;
    id <YTResponder> _parentResponder;
    YTIWatchCardRelatedData *_relatedData;
    unsigned long long _reuseIndex;
}

+ (double)labelHeightForRelatedData:(id)arg1 width:(double)arg2;
+ (double)thumbnailSizeForRelatedData:(id)arg1 width:(double)arg2;
+ (void)setFormattedString:(id)arg1 forLabel:(id)arg2;
+ (double)preferredHeightForRelatedData:(id)arg1 headerHeight:(int)arg2 width:(double)arg3;
@property(nonatomic) unsigned long long reuseIndex; // @synthesize reuseIndex=_reuseIndex;
@property(readonly, nonatomic) YTWatchCardListHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) YTIWatchCardRelatedData *relatedData; // @synthesize relatedData=_relatedData;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (double)labelHeight;
- (double)thumbnailSize;
- (void)didTapRelatedItem:(id)arg1;
- (id)thumbnailMappings;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
