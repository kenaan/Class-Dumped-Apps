//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array, NSMutableDictionary, NSString;

@interface TIMPBNCreateConversationV2RequestBody : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *avatarURL; // @dynamic avatarURL;
@property(retain, nonatomic) NSMutableDictionary *bizExt; // @dynamic bizExt;
@property(readonly, nonatomic) unsigned long long bizExt_Count; // @dynamic bizExt_Count;
@property(nonatomic) int conversationType; // @dynamic conversationType;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasAvatarURL; // @dynamic hasAvatarURL;
@property(nonatomic) _Bool hasConversationType; // @dynamic hasConversationType;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasIdempotentId; // @dynamic hasIdempotentId;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasPersistent; // @dynamic hasPersistent;
@property(copy, nonatomic) NSString *idempotentId; // @dynamic idempotentId;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GPBInt64Array *participantsArray; // @dynamic participantsArray;
@property(readonly, nonatomic) unsigned long long participantsArray_Count; // @dynamic participantsArray_Count;
@property(nonatomic) _Bool persistent; // @dynamic persistent;

@end

