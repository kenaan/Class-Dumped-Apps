//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class NSNumber, NSString;

@interface AWEMusicAwemeListDataController : AWEListDataController
{
    NSString *_musicID;
    NSNumber *_offset;
}

@property(copy, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
- (void).cxx_destruct;
- (void)resetData;
- (void)fetchWithCount:(long long)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

