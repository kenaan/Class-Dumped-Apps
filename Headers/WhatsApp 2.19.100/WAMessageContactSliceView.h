//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

@class NSMutableArray, UIImageView, WAMessageContactSlice;

@interface WAMessageContactSliceView : WAMessageContainerSliceView
{
    UIImageView *_chevronImageView;
    NSMutableArray *_imageViews;
}

+ (void)initialize;
+ (_Bool)isUserInteractionEnabled;
- (void).cxx_destruct;
- (void)prepareForPreviewWithContext:(id)arg1;
- (id)dataForPreviewingContext:(id)arg1 location:(struct CGPoint)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)profilePictureManagerPictureDidChange:(id)arg1;
- (void)reloadProfilePictureForJID:(id)arg1;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageContactSlice *slice; // @dynamic slice;

@end

