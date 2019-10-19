//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

#import "AWEChallengeListDataControllerDelegate-Protocol.h"

@class NSMutableArray, NSNumber, NSString;

@interface AWEChallengeFeedCommentListDataController : AWEListDataController <AWEChallengeListDataControllerDelegate>
{
    _Bool _isCommerce;
    NSString *_challengeID;
    NSString *_hashtagName;
    unsigned long long _sortType;
    NSMutableArray *_adFilteredDataSource;
    NSNumber *_offset;
}

@property(copy, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool isCommerce; // @synthesize isCommerce=_isCommerce;
@property(retain, nonatomic) NSMutableArray *adFilteredDataSource; // @synthesize adFilteredDataSource=_adFilteredDataSource;
@property(nonatomic) unsigned long long sortType; // @synthesize sortType=_sortType;
@property(copy, nonatomic) NSString *hashtagName; // @synthesize hashtagName=_hashtagName;
@property(copy, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
- (void).cxx_destruct;
- (long long)convertIndexToAdFiltered:(long long)arg1;
- (id)transLateModelArray:(id)arg1;
- (long long)convertIndexToOrigin:(long long)arg1;
- (void)resetData;
- (long long)dataSourceIndexFromFilteredIndex:(long long)arg1;
- (void)fetchWithCount:(long long)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

