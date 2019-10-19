//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableDictionary, NSMutableSet;

@interface SCMediaSendTaskUploadGroup : NSObject <NSCoding>
{
    NSMutableSet *_enabledElements;
    NSMutableDictionary *_statuses;
    unsigned long long _aggregateStatus;
}

@property(readonly, nonatomic) unsigned long long aggregateStatus; // @synthesize aggregateStatus=_aggregateStatus;
- (void).cxx_destruct;
- (unsigned long long)_aggregateStatus;
- (void)_updateAggregateStatus;
- (void)failPrimaryUploads;
- (void)awakeFromCoder;
- (unsigned long long)statusForElement:(unsigned long long)arg1;
- (void)setStatus:(unsigned long long)arg1 forElement:(unsigned long long)arg2;
- (_Bool)isElementEnabled:(unsigned long long)arg1;
- (void)setElement:(unsigned long long)arg1 enabled:(_Bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithAdoptedEphemeralMedia:(id)arg1 mediaList:(id)arg2 state:(long long)arg3;
- (id)initWithEphemeralMedia:(id)arg1 mediaList:(id)arg2 lensRemoteAssetsUploadOperation:(id)arg3;

@end
