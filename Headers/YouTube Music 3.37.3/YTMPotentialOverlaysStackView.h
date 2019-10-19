//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTMMusicItemThumbnailOverlayViewDelegate-Protocol.h"

@class NSArray, NSString, YTMMusicItemThumbnailOverlayView;

@interface YTMPotentialOverlaysStackView : UIView <YTMMusicItemThumbnailOverlayViewDelegate>
{
    YTMMusicItemThumbnailOverlayView *_firstVisibleOverlayView;
    NSArray *_overlayViews;
}

@property(retain, nonatomic) NSArray *overlayViews; // @synthesize overlayViews=_overlayViews;
- (void).cxx_destruct;
- (void)overlayThumbnailBadgeViewDidChangeVisibility:(id)arg1;
- (void)resetFirstVisibleOverlayView;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
