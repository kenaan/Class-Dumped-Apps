//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, TIMPBNConversationCoreInfo;

@interface TIMPBNDeleteConversationCoreExtInfoResponseBody : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long checkCode; // @dynamic checkCode;
@property(copy, nonatomic) NSString *checkMessage; // @dynamic checkMessage;
@property(retain, nonatomic) TIMPBNConversationCoreInfo *coreInfo; // @dynamic coreInfo;
@property(copy, nonatomic) NSString *extraInfo; // @dynamic extraInfo;
@property(nonatomic) _Bool hasCheckCode; // @dynamic hasCheckCode;
@property(nonatomic) _Bool hasCheckMessage; // @dynamic hasCheckMessage;
@property(nonatomic) _Bool hasCoreInfo; // @dynamic hasCoreInfo;
@property(nonatomic) _Bool hasExtraInfo; // @dynamic hasExtraInfo;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) int status; // @dynamic status;

@end

