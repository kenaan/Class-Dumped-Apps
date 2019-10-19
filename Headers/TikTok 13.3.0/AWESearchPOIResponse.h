//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWERiskPreventModel, AWESearchCorrectModel, AWESearchNilInfoModel, AWESearchNilTextModel, NSArray, NSNumber;

@interface AWESearchPOIResponse : AWEBaseApiModel
{
    _Bool _hasMore;
    NSNumber *_cursor;
    NSArray *_poiList;
    AWESearchCorrectModel *_correctModel;
    AWESearchNilInfoModel *_searchNilInfoModel;
    AWESearchNilTextModel *_searchNilTextModel;
    AWERiskPreventModel *_riskPreventModel;
}

+ (id)riskPreventModelJSONTransformer;
+ (id)searchNilTextModelTransformer;
+ (id)searchNilInfoModelTransformer;
+ (id)correctModelTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)poiListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWERiskPreventModel *riskPreventModel; // @synthesize riskPreventModel=_riskPreventModel;
@property(retain, nonatomic) AWESearchNilTextModel *searchNilTextModel; // @synthesize searchNilTextModel=_searchNilTextModel;
@property(retain, nonatomic) AWESearchNilInfoModel *searchNilInfoModel; // @synthesize searchNilInfoModel=_searchNilInfoModel;
@property(retain, nonatomic) AWESearchCorrectModel *correctModel; // @synthesize correctModel=_correctModel;
@property(copy, nonatomic) NSArray *poiList; // @synthesize poiList=_poiList;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;

@end

