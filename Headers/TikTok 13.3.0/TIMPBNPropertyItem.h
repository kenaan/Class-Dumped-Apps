//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface TIMPBNPropertyItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long createTime; // @dynamic createTime;
@property(nonatomic) _Bool hasCreateTime; // @dynamic hasCreateTime;
@property(nonatomic) _Bool hasIdempotentId; // @dynamic hasIdempotentId;
@property(nonatomic) _Bool hasSecUid; // @dynamic hasSecUid;
@property(nonatomic) _Bool hasUid; // @dynamic hasUid;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(copy, nonatomic) NSString *idempotentId; // @dynamic idempotentId;
@property(copy, nonatomic) NSString *secUid; // @dynamic secUid;
@property(nonatomic) long long uid; // @dynamic uid;
@property(copy, nonatomic) NSString *value; // @dynamic value;

@end

