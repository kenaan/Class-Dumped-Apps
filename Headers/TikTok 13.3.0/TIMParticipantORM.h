//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TIMBaseORM.h"

#import "TIMParticipantModelProtocol-Protocol.h"

@class NSString;

@interface TIMParticipantORM : TIMBaseORM <TIMParticipantModelProtocol>
{
    long long _userID;
    NSString *_belongingConversationIdentifier;
    long long _sortOrder;
    long long _role;
    NSString *_alias;
    NSString *_secUserID;
}

+ (const struct WCTProperty *)secUserID;
+ (const struct WCTProperty *)alias;
+ (const struct WCTProperty *)role;
+ (const struct WCTProperty *)sortOrder;
+ (const struct WCTProperty *)belongingConversationIdentifier;
+ (const struct WCTProperty *)userID;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *secUserID; // @synthesize secUserID=_secUserID;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property(retain, nonatomic) NSString *belongingConversationIdentifier; // @synthesize belongingConversationIdentifier=_belongingConversationIdentifier;
@property(nonatomic) long long userID; // @synthesize userID=_userID;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

