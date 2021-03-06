//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface SCLensFeedLensInfoLayout : NSObject
{
    UIFont *_lensNameLabelFont;
    UIColor *_lensNameTextColor;
    double _lensNameLabelHeight;
    UIFont *_lensCreatorLabelFont;
    UIColor *_lensCreatorTextColor;
    double _lensCreatorLabelHeight;
}

@property(nonatomic) double lensCreatorLabelHeight; // @synthesize lensCreatorLabelHeight=_lensCreatorLabelHeight;
@property(retain, nonatomic) UIColor *lensCreatorTextColor; // @synthesize lensCreatorTextColor=_lensCreatorTextColor;
@property(retain, nonatomic) UIFont *lensCreatorLabelFont; // @synthesize lensCreatorLabelFont=_lensCreatorLabelFont;
@property(nonatomic) double lensNameLabelHeight; // @synthesize lensNameLabelHeight=_lensNameLabelHeight;
@property(retain, nonatomic) UIColor *lensNameTextColor; // @synthesize lensNameTextColor=_lensNameTextColor;
@property(retain, nonatomic) UIFont *lensNameLabelFont; // @synthesize lensNameLabelFont=_lensNameLabelFont;
- (void).cxx_destruct;
@property(readonly, nonatomic) double lensInfoOffset;
@property(readonly, nonatomic) double spacingBetweenLabels;
@property(readonly, nonatomic) double lensInfoHeight;

@end

