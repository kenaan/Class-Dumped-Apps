//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, UIColor, UIImage;

@interface SCDiscoverFeedDynamicReplayOverlayViewModelBuilder : NSObject
{
    UIImage *_primaryIconImage;
    NSAttributedString *_primaryIconSubtitle;
    unsigned long long _primaryIconSubtitleMaxLines;
    UIImage *_secondaryIconImage;
    NSAttributedString *_secondaryIconSubtitle;
    unsigned long long _secondaryIconSubtitleMaxLines;
    NSAttributedString *_replayOverlayTitle;
    _Bool _showMiddleSeparator;
    UIColor *_middleSeparatorColor;
}

+ (id)discoverFeedDynamicReplayOverlayViewModelFromExistingDiscoverFeedDynamicReplayOverlayViewModel:(id)arg1;
+ (id)discoverFeedDynamicReplayOverlayViewModel;
- (void).cxx_destruct;
- (id)withMiddleSeparatorColor:(id)arg1;
- (id)withShowMiddleSeparator:(_Bool)arg1;
- (id)withReplayOverlayTitle:(id)arg1;
- (id)withSecondaryIconSubtitleMaxLines:(unsigned long long)arg1;
- (id)withSecondaryIconSubtitle:(id)arg1;
- (id)withSecondaryIconImage:(id)arg1;
- (id)withPrimaryIconSubtitleMaxLines:(unsigned long long)arg1;
- (id)withPrimaryIconSubtitle:(id)arg1;
- (id)withPrimaryIconImage:(id)arg1;
- (id)build;

@end
