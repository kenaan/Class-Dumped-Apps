//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FQuerySpec;

@interface FTrackedQuery : NSObject
{
    _Bool _isComplete;
    _Bool _isActive;
    unsigned long long _queryId;
    FQuerySpec *_query;
    double _lastUse;
}

@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(nonatomic) double lastUse; // @synthesize lastUse=_lastUse;
@property(retain, nonatomic) FQuerySpec *query; // @synthesize query=_query;
@property(nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)setActiveState:(_Bool)arg1;
- (id)setComplete;
- (id)updateLastUse:(double)arg1;
- (id)initWithId:(unsigned long long)arg1 query:(id)arg2 lastUse:(double)arg3 isActive:(_Bool)arg4;
- (id)initWithId:(unsigned long long)arg1 query:(id)arg2 lastUse:(double)arg3 isActive:(_Bool)arg4 isComplete:(_Bool)arg5;

@end

