//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString;

@interface SCDiscoverFeedStoryDeltaInfoChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_compositeStoryId;
    long long _sequenceMin;
    long long _sequenceMax;
    long long _numPrefetchSnaps;
}

+ (id)deletionRequestForDiscoverFeedStoryDeltaInfo:(id)arg1;
+ (id)changeRequestForDiscoverFeedStoryDeltaInfo:(id)arg1;
+ (id)creationRequestWithDiscoverFeedStoryDeltaInfo:(id)arg1;
@property(nonatomic) long long numPrefetchSnaps; // @synthesize numPrefetchSnaps=_numPrefetchSnaps;
@property(nonatomic) long long sequenceMax; // @synthesize sequenceMax=_sequenceMax;
@property(nonatomic) long long sequenceMin; // @synthesize sequenceMin=_sequenceMin;
@property(copy, nonatomic) NSString *compositeStoryId; // @synthesize compositeStoryId=_compositeStoryId;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_discoverFeedStoryDeltaInfo;
- (id)initWithRowid:(long long)arg1 compositeStoryId:(id)arg2 sequenceMin:(long long)arg3 sequenceMax:(long long)arg4 numPrefetchSnaps:(long long)arg5;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
