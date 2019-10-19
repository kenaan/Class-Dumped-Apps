//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class NSDictionary, NSNumber, NSString;

@interface AWEOneDayGlanceDataController : AWEListDataController
{
    NSString *_oneDayId;
    NSNumber *_cursor;
    unsigned long long _viewFriendsCount;
    NSDictionary *_logPb;
}

@property(retain, nonatomic) NSDictionary *logPb; // @synthesize logPb=_logPb;
@property(nonatomic) unsigned long long viewFriendsCount; // @synthesize viewFriendsCount=_viewFriendsCount;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) NSString *oneDayId; // @synthesize oneDayId=_oneDayId;
- (void).cxx_destruct;
- (void)reorderModels;
- (id)filterRepetitiveUser:(id)arg1;
- (id)modelAtInexPath:(id)arg1;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithOneDayId:(id)arg1;

@end

