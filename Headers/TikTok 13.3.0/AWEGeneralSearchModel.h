//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEConcernCardModel.h"

#import "IGListDiffable-Protocol.h"

@class AWEGeneralTopUserStatusModel, AWEIronManModel, AWERecommendWordQueryRecordModel, AWESearchActivityModel, AWESearchAdStarEndorsementModel, AWESearchHotelModel, AWESearchMerchandiseResultModel, AWESearchMovieModel, NSMutableArray, NSNumber;

@interface AWEGeneralSearchModel : AWEConcernCardModel <IGListDiffable>
{
    _Bool _isStarAladdin;
    _Bool _hasTopUser;
    _Bool _hasMoreMerchandise;
    unsigned long long _cardType;
    NSMutableArray *_userArray;
    NSMutableArray *_challengeArray;
    NSMutableArray *_musicArray;
    NSMutableArray *_articleArray;
    NSMutableArray *_poiArray;
    NSMutableArray *_searchWordArray;
    NSMutableArray *_searchMerchandiseArray;
    NSMutableArray *_xiguaVideoArray;
    NSMutableArray *_contentArray;
    AWESearchMovieModel *_movieModel;
    AWESearchActivityModel *_activityInfoModel;
    NSNumber *_rank;
    AWESearchMerchandiseResultModel *_merchandiseResultModel;
    NSNumber *_hasMoreCards;
    AWEIronManModel *_ironManModel;
    AWESearchAdStarEndorsementModel *_adEndorseModel;
    AWESearchHotelModel *_hotelModel;
    AWERecommendWordQueryRecordModel *_wordsQueryRecord;
    AWEGeneralTopUserStatusModel *_topUserStatusModel;
}

+ (CDUnknownBlockType)isEqualBlock;
+ (id)wordsQueryRecordJSONTransformer;
+ (id)adEndorseModelJSONTransformer;
+ (id)correctModelTransformer;
+ (id)activityInfoModelJSONTransformer;
+ (id)movieModelJSONTransformer;
+ (id)xiguaVideoArrayJSONTransformer;
+ (id)searchMerchandiseArrayJSONTransformer;
+ (id)ironManModelTransformer;
+ (id)poiArrayJSONTransformer;
+ (id)searchWordArrayJSONTransformer;
+ (id)articleArrayJSONTransformer;
+ (id)musicArrayJSONTransformer;
+ (id)challengeArrayJSONTransformer;
+ (id)userArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEGeneralTopUserStatusModel *topUserStatusModel; // @synthesize topUserStatusModel=_topUserStatusModel;
@property(retain, nonatomic) AWERecommendWordQueryRecordModel *wordsQueryRecord; // @synthesize wordsQueryRecord=_wordsQueryRecord;
@property(retain, nonatomic) AWESearchHotelModel *hotelModel; // @synthesize hotelModel=_hotelModel;
@property(retain, nonatomic) AWESearchAdStarEndorsementModel *adEndorseModel; // @synthesize adEndorseModel=_adEndorseModel;
@property(retain, nonatomic) AWEIronManModel *ironManModel; // @synthesize ironManModel=_ironManModel;
@property(retain, nonatomic) NSNumber *hasMoreCards; // @synthesize hasMoreCards=_hasMoreCards;
@property(nonatomic) _Bool hasMoreMerchandise; // @synthesize hasMoreMerchandise=_hasMoreMerchandise;
@property(nonatomic) _Bool hasTopUser; // @synthesize hasTopUser=_hasTopUser;
@property(retain, nonatomic) AWESearchMerchandiseResultModel *merchandiseResultModel; // @synthesize merchandiseResultModel=_merchandiseResultModel;
@property(retain, nonatomic) NSNumber *rank; // @synthesize rank=_rank;
@property(retain, nonatomic) AWESearchActivityModel *activityInfoModel; // @synthesize activityInfoModel=_activityInfoModel;
@property(retain, nonatomic) AWESearchMovieModel *movieModel; // @synthesize movieModel=_movieModel;
@property(nonatomic) _Bool isStarAladdin; // @synthesize isStarAladdin=_isStarAladdin;
@property(retain, nonatomic) NSMutableArray *contentArray; // @synthesize contentArray=_contentArray;
@property(retain, nonatomic) NSMutableArray *xiguaVideoArray; // @synthesize xiguaVideoArray=_xiguaVideoArray;
@property(retain, nonatomic) NSMutableArray *searchMerchandiseArray; // @synthesize searchMerchandiseArray=_searchMerchandiseArray;
@property(retain, nonatomic) NSMutableArray *searchWordArray; // @synthesize searchWordArray=_searchWordArray;
@property(retain, nonatomic) NSMutableArray *poiArray; // @synthesize poiArray=_poiArray;
@property(retain, nonatomic) NSMutableArray *articleArray; // @synthesize articleArray=_articleArray;
@property(retain, nonatomic) NSMutableArray *musicArray; // @synthesize musicArray=_musicArray;
@property(retain, nonatomic) NSMutableArray *challengeArray; // @synthesize challengeArray=_challengeArray;
@property(retain, nonatomic) NSMutableArray *userArray; // @synthesize userArray=_userArray;
@property(nonatomic) unsigned long long cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;
- (long long)type;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;

@end

