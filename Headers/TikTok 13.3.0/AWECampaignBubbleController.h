//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEBubble, AWEToolTipView;

@interface AWECampaignBubbleController : NSObject
{
    _Bool _shouldPostpone;
    _Bool _hasEnteredIntoCampaignByNonProfileMeans;
    _Bool _hasBlockByMeTab;
    AWEToolTipView *_toolTipView;
    AWEBubble *_tabbarCampaignBubble;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AWEBubble *tabbarCampaignBubble; // @synthesize tabbarCampaignBubble=_tabbarCampaignBubble;
@property(retain, nonatomic) AWEToolTipView *toolTipView; // @synthesize toolTipView=_toolTipView;
@property(nonatomic) _Bool hasBlockByMeTab; // @synthesize hasBlockByMeTab=_hasBlockByMeTab;
@property(nonatomic) _Bool hasEnteredIntoCampaignByNonProfileMeans; // @synthesize hasEnteredIntoCampaignByNonProfileMeans=_hasEnteredIntoCampaignByNonProfileMeans;
@property(nonatomic) _Bool shouldPostpone; // @synthesize shouldPostpone=_shouldPostpone;
- (void).cxx_destruct;
- (void)dismissBubble;
- (_Bool)presentBubbleWithTitle:(id)arg1 image:(id)arg2 andDuration:(double)arg3;
- (void)presentActivityBubbleOnReceivingBubbleData:(id)arg1;
- (void)presentBubbleOnReceivingBubbleData:(id)arg1;
- (void)setupObservation;
- (void)presentMyTabCampaignBubbleWhenAvailable;
- (void)presentMyTabCampaignBubbleImmediatelyIfNeeded;

@end

