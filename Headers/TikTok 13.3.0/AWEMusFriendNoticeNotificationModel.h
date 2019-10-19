//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEUserModel, NSString;

@interface AWEMusFriendNoticeNotificationModel : MTLModel <MTLJSONSerializing>
{
    NSString *_content;
    NSString *_schemaURL;
    AWEUserModel *_fromUser;
    long long _friendType;
}

+ (id)typeJSONTranformer;
+ (id)fromUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long friendType; // @synthesize friendType=_friendType;
@property(retain, nonatomic) AWEUserModel *fromUser; // @synthesize fromUser=_fromUser;
@property(copy, nonatomic) NSString *schemaURL; // @synthesize schemaURL=_schemaURL;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

