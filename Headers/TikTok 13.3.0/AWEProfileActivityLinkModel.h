//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSNumber, NSString;

@interface AWEProfileActivityLinkModel : AWEBaseApiModel
{
    _Bool _clickDisappear;
    NSString *_activityText;
    NSString *_activityUrl;
    NSString *_fontColor;
    NSString *_backgroundStyle;
    NSNumber *_closeAfter;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *closeAfter; // @synthesize closeAfter=_closeAfter;
@property(nonatomic) _Bool clickDisappear; // @synthesize clickDisappear=_clickDisappear;
@property(retain, nonatomic) NSString *backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(retain, nonatomic) NSString *fontColor; // @synthesize fontColor=_fontColor;
@property(retain, nonatomic) NSString *activityUrl; // @synthesize activityUrl=_activityUrl;
@property(retain, nonatomic) NSString *activityText; // @synthesize activityText=_activityText;
- (void).cxx_destruct;

@end

