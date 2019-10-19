//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEPOIActivityModel, AWEPOIClassRankModel, AWEPOIQuoraInfoModel, AWEPOIThirdPartyOrderModel, NSArray, NSString;

@interface AWEPOIExtensionModel : AWEBaseApiModel
{
    _Bool _valid;
    _Bool _hasDetailInfo;
    _Bool _hasUploadImagePermission;
    NSString *_telephone;
    NSString *_businessHour;
    NSString *_website;
    NSString *_specialties;
    NSString *_introduction;
    NSString *_introductionTitle;
    NSString *_rating;
    NSString *_cost;
    NSString *_costWithUnit;
    NSString *_subtype;
    NSString *_tags;
    NSArray *_photos;
    NSArray *_recommendedItems;
    NSString *_recommendTitle;
    NSString *_commentURL;
    AWEPOIThirdPartyOrderModel *_thirdPartyOrderModel;
    NSArray *_comments;
    AWEPOIActivityModel *_poiActivityModel;
    NSArray *_categories;
    AWEPOIClassRankModel *_classRank;
    NSArray *_banners;
    long long _bizSrc;
    NSString *_feedbackURL;
    AWEPOIQuoraInfoModel *_quora;
}

+ (id)poiActivityModelJSONTransformer;
+ (id)categoriesJSONTransformer;
+ (id)commentsJSONTransformer;
+ (id)recommendedItemsJSONTransformer;
+ (id)photosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEPOIQuoraInfoModel *quora; // @synthesize quora=_quora;
@property(nonatomic) _Bool hasUploadImagePermission; // @synthesize hasUploadImagePermission=_hasUploadImagePermission;
@property(copy, nonatomic) NSString *feedbackURL; // @synthesize feedbackURL=_feedbackURL;
@property(nonatomic) long long bizSrc; // @synthesize bizSrc=_bizSrc;
@property(retain, nonatomic) NSArray *banners; // @synthesize banners=_banners;
@property(retain, nonatomic) AWEPOIClassRankModel *classRank; // @synthesize classRank=_classRank;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) AWEPOIActivityModel *poiActivityModel; // @synthesize poiActivityModel=_poiActivityModel;
@property(nonatomic) _Bool hasDetailInfo; // @synthesize hasDetailInfo=_hasDetailInfo;
@property(retain, nonatomic) NSArray *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) AWEPOIThirdPartyOrderModel *thirdPartyOrderModel; // @synthesize thirdPartyOrderModel=_thirdPartyOrderModel;
@property(copy, nonatomic) NSString *commentURL; // @synthesize commentURL=_commentURL;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(copy, nonatomic) NSString *recommendTitle; // @synthesize recommendTitle=_recommendTitle;
@property(retain, nonatomic) NSArray *recommendedItems; // @synthesize recommendedItems=_recommendedItems;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(copy, nonatomic) NSString *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
@property(copy, nonatomic) NSString *costWithUnit; // @synthesize costWithUnit=_costWithUnit;
@property(copy, nonatomic) NSString *cost; // @synthesize cost=_cost;
@property(copy, nonatomic) NSString *rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *introductionTitle; // @synthesize introductionTitle=_introductionTitle;
@property(copy, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(copy, nonatomic) NSString *specialties; // @synthesize specialties=_specialties;
@property(copy, nonatomic) NSString *website; // @synthesize website=_website;
@property(copy, nonatomic) NSString *businessHour; // @synthesize businessHour=_businessHour;
@property(copy, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
- (void).cxx_destruct;
- (id)tagList;
- (id)recommendedDishes;

@end

