//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GIMMe, NSArray, NSMutableSet, YTIReelShelfRenderer;

@interface YTReelShelfCollection : NSObject
{
    NSArray *_displayableItems;
    NSArray *_reelWatchEndpoints;
    NSMutableSet *_dismissedReelItemTokens;
    NSArray *_lastDismissedTokens;
    _Bool _needsUpdateDisplayableItems;
    YTIReelShelfRenderer *_renderer;
    _Bool _hasThumbnailItem;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)calculateDisplayableItems;
- (void)updateWatchEndpointsIfNeeded;
- (void)updateDisplayableItemsIfNeeded;
- (id)reelItems;
- (id)layoutRenderer;
- (id)reelWatchEndpoints;
- (id)dismissableReelItems;
- (id)displayableItems;
- (void)undoDismissReelItems;
- (void)dismissReelItemsWithTokens:(id)arg1;
@property(readonly, nonatomic, getter=isThumbnailShelf) _Bool thumbnailShelf;
@property(readonly, nonatomic) _Bool supportsHidingItems;
- (id)initWithReelShelfRenderer:(id)arg1;

@end

