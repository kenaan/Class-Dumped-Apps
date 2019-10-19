//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface AWETiktokDiscoverV3Model : AWEBaseApiModel <MTLJSONSerializing>
{
    NSString *_cellId;
    long long _type;
    NSString *_title;
    NSArray *_awemeList;
    NSString *_refURLString;
    unsigned long long _indexInAllModels;
    double _tagLabelWidth;
    double _titleLabelFontSize;
}

+ (void)registerCellsToCollectionView:(id)arg1;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) double titleLabelFontSize; // @synthesize titleLabelFontSize=_titleLabelFontSize;
@property(nonatomic) double tagLabelWidth; // @synthesize tagLabelWidth=_tagLabelWidth;
@property(nonatomic) unsigned long long indexInAllModels; // @synthesize indexInAllModels=_indexInAllModels;
@property(readonly) NSString *refURLString; // @synthesize refURLString=_refURLString;
@property(retain, nonatomic) NSArray *awemeList; // @synthesize awemeList=_awemeList;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *cellId; // @synthesize cellId=_cellId;
- (void).cxx_destruct;
- (struct CGRect)boundingRectForLastCharacterInAttributeString:(id)arg1 width:(double)arg2;
- (long long)numberOfLineForString:(id)arg1 fontSize:(double)arg2 width:(double)arg3;
- (double)preferredTitleLabelFontSizeForString:(id)arg1 width:(double)arg2;
- (double)preferredTitleLabelFontSize;
- (double)calculatedWidthForString:(id)arg1;
- (double)tagLabelWidthForString:(id)arg1;
- (double)preferredTagLabelWidth;
@property(readonly) double coverRadio;
@property(readonly) struct CGSize waterflowSize;
@property(readonly) NSString *reuseIdentifier;
@property(readonly) _Bool isPlaylist;
@property(readonly) NSString *tagString;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValidForSecondGeneration;
- (_Bool)isValidForFirstGeneration;
@property(readonly) _Bool isValid;
- (id)copyedByReplaceAweme:(id)arg1;
- (id)logPbForTrackerService;
- (id)cellIdForTrackService;
- (id)typeStringForTrackService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

