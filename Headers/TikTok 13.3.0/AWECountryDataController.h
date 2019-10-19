//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class NSNumber, NSString;

@interface AWECountryDataController : AWEListDataController
{
    NSString *_countryCode;
    NSNumber *_minTime;
    NSNumber *_maxTime;
}

@property(copy, nonatomic) NSNumber *maxTime; // @synthesize maxTime=_maxTime;
@property(copy, nonatomic) NSNumber *minTime; // @synthesize minTime=_minTime;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void).cxx_destruct;
- (id)_filterDuplicatedDatasourceWithArray:(id)arg1;
- (id)_loadmoreDataSourceWithArray:(id)arg1;
- (id)_refreshDataSourceWithArray:(id)arg1;
- (void)fetchRoamingFeedWithMinCursor:(id)arg1 maxCursor:(id)arg2 count:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchWithCount:(long long)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

