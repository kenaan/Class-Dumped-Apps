//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface AWEIMShareVerifyResponseModel : MTLModel <MTLJSONSerializing>
{
    int _memberCount;
    int _shareScene;
    int _shareType;
    NSString *_conversationID;
    long long _conversationShortID;
    NSString *_groupAvatar;
    NSString *_groupName;
    long long _inviterID;
    NSString *_inviterSecID;
    NSString *_ticket;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) int shareType; // @synthesize shareType=_shareType;
@property(nonatomic) int shareScene; // @synthesize shareScene=_shareScene;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(copy, nonatomic) NSString *inviterSecID; // @synthesize inviterSecID=_inviterSecID;
@property(nonatomic) long long inviterID; // @synthesize inviterID=_inviterID;
@property(nonatomic) int memberCount; // @synthesize memberCount=_memberCount;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *groupAvatar; // @synthesize groupAvatar=_groupAvatar;
@property(nonatomic) long long conversationShortID; // @synthesize conversationShortID=_conversationShortID;
@property(copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

