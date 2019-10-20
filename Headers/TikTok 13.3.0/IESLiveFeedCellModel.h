//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESFeedBannerResponseModel, IESFeedRankRoundModel, IESLiveFeedAdModel, IESLiveFeedBannerModel, LiveRoomModel, NSArray, NSDictionary, NSNumber, NSString;

@interface IESLiveFeedCellModel : MTLModel <MTLJSONSerializing>
{
    _Bool _recommend;
    NSArray *_labelURLList;
    LiveRoomModel *_room;
    NSString *_title;
    NSNumber *_type;
    NSDictionary *_data;
    NSArray *_tags;
    IESLiveFeedBannerModel *_bannerModel;
    IESLiveFeedAdModel *_adModel;
    IESFeedRankRoundModel *_rankModel;
    IESFeedBannerResponseModel *_bannerResponse;
    NSString *_requestId;
    NSString *_adBase64Str;
}

+ (id)rankModelJSONTransformer;
+ (id)bannerResponseJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *adBase64Str; // @synthesize adBase64Str=_adBase64Str;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic, getter=isRecommend) _Bool recommend; // @synthesize recommend=_recommend;
@property(retain, nonatomic) IESFeedBannerResponseModel *bannerResponse; // @synthesize bannerResponse=_bannerResponse;
@property(retain, nonatomic) IESFeedRankRoundModel *rankModel; // @synthesize rankModel=_rankModel;
@property(retain, nonatomic) IESLiveFeedAdModel *adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) IESLiveFeedBannerModel *bannerModel; // @synthesize bannerModel=_bannerModel;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
@property(retain, nonatomic) NSArray *labelURLList; // @synthesize labelURLList=_labelURLList;
- (void).cxx_destruct;
- (void)mergeRoomFromModel:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
