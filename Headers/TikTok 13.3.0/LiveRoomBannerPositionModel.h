//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESLiveBannerListModel, NSString;

@interface LiveRoomBannerPositionModel : MTLModel <MTLJSONSerializing>
{
    IESLiveBannerListModel *_topLeft;
    IESLiveBannerListModel *_topRight;
    IESLiveBannerListModel *_bottomRight;
    IESLiveBannerListModel *_giftPanel;
    IESLiveBannerListModel *_giftPaneBottomRight;
    IESLiveBannerListModel *_openLive;
    IESLiveBannerListModel *_gameLiveMiddle;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) IESLiveBannerListModel *gameLiveMiddle; // @synthesize gameLiveMiddle=_gameLiveMiddle;
@property(retain, nonatomic) IESLiveBannerListModel *openLive; // @synthesize openLive=_openLive;
@property(retain, nonatomic) IESLiveBannerListModel *giftPaneBottomRight; // @synthesize giftPaneBottomRight=_giftPaneBottomRight;
@property(retain, nonatomic) IESLiveBannerListModel *giftPanel; // @synthesize giftPanel=_giftPanel;
@property(retain, nonatomic) IESLiveBannerListModel *bottomRight; // @synthesize bottomRight=_bottomRight;
@property(retain, nonatomic) IESLiveBannerListModel *topRight; // @synthesize topRight=_topRight;
@property(retain, nonatomic) IESLiveBannerListModel *topLeft; // @synthesize topLeft=_topLeft;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

