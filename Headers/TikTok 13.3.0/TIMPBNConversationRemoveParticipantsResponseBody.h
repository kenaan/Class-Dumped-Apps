//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array, NSMutableArray, NSString;

@interface TIMPBNConversationRemoveParticipantsResponseBody : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long checkCode; // @dynamic checkCode;
@property(copy, nonatomic) NSString *checkMessage; // @dynamic checkMessage;
@property(copy, nonatomic) NSString *extraInfo; // @dynamic extraInfo;
@property(retain, nonatomic) GPBInt64Array *failedParticipantsArray; // @dynamic failedParticipantsArray;
@property(readonly, nonatomic) unsigned long long failedParticipantsArray_Count; // @dynamic failedParticipantsArray_Count;
@property(retain, nonatomic) NSMutableArray *failedSecParticipantsArray; // @dynamic failedSecParticipantsArray;
@property(readonly, nonatomic) unsigned long long failedSecParticipantsArray_Count; // @dynamic failedSecParticipantsArray_Count;
@property(nonatomic) _Bool hasCheckCode; // @dynamic hasCheckCode;
@property(nonatomic) _Bool hasCheckMessage; // @dynamic hasCheckMessage;
@property(nonatomic) _Bool hasExtraInfo; // @dynamic hasExtraInfo;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) int status; // @dynamic status;

@end

