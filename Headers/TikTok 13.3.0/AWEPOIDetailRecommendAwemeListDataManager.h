//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class NSNumber, NSString;

@interface AWEPOIDetailRecommendAwemeListDataManager : AWEListDataController
{
    _Bool _hasMore;
    _Bool _shouldLoadMore;
    long long _poiClassCode;
    NSString *_poiID;
    NSString *_groupID;
    NSNumber *_cursor;
    NSString *_initialRequestID;
}

@property(nonatomic) _Bool shouldLoadMore; // @synthesize shouldLoadMore=_shouldLoadMore;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *initialRequestID; // @synthesize initialRequestID=_initialRequestID;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
@property(nonatomic) long long poiClassCode; // @synthesize poiClassCode=_poiClassCode;
- (void).cxx_destruct;
- (void)calculateFilteredDataSource;
- (_Bool)loadmoreHasMore;
- (_Bool)canLoadMore;
- (id)p_baseParameters;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPOIID:(id)arg1 groupID:(id)arg2;

@end

