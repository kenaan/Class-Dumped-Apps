//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString, SCStoriesSnapViewStatus;

@interface SCStoriesLegacyViewStatusSyncChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_storySnapServerId;
    NSString *_legacyUsername;
    SCStoriesSnapViewStatus *_viewStatus;
}

+ (id)deletionRequestForStoriesLegacyViewStatusSync:(id)arg1;
+ (id)changeRequestForStoriesLegacyViewStatusSync:(id)arg1;
+ (id)creationRequestWithStoriesLegacyViewStatusSync:(id)arg1;
@property(copy, nonatomic) SCStoriesSnapViewStatus *viewStatus; // @synthesize viewStatus=_viewStatus;
@property(copy, nonatomic) NSString *legacyUsername; // @synthesize legacyUsername=_legacyUsername;
@property(copy, nonatomic) NSString *storySnapServerId; // @synthesize storySnapServerId=_storySnapServerId;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_storiesLegacyViewStatusSync;
- (id)initWithRowid:(long long)arg1 storySnapServerId:(id)arg2 legacyUsername:(id)arg3 viewStatus:(id)arg4;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
