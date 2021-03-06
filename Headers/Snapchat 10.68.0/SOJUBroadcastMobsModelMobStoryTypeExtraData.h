//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUBroadcastMobsModelMobStoryTypeExtraData-Protocol.h"

@class NSString, SOJUBroadcastMobsModelCustomMobStoryExtraData, SOJUBroadcastMobsModelGeofencedMobStoryExtraData, SOJUBroadcastMobsModelGroupChatMobStoryExtraData, SOJUBroadcastMobsModelPrivateMobStoryExtraData;

@interface SOJUBroadcastMobsModelMobStoryTypeExtraData : NSObject <SOJUBroadcastMobsModelMobStoryTypeExtraData>
{
    SOJUBroadcastMobsModelGeofencedMobStoryExtraData *_geofenced;
    SOJUBroadcastMobsModelCustomMobStoryExtraData *_custom;
    SOJUBroadcastMobsModelPrivateMobStoryExtraData *_privateStory;
    SOJUBroadcastMobsModelGroupChatMobStoryExtraData *_groupChat;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUBroadcastMobsModelGroupChatMobStoryExtraData *groupChat; // @synthesize groupChat=_groupChat;
@property(readonly, copy, nonatomic) SOJUBroadcastMobsModelPrivateMobStoryExtraData *privateStory; // @synthesize privateStory=_privateStory;
@property(readonly, copy, nonatomic) SOJUBroadcastMobsModelCustomMobStoryExtraData *custom; // @synthesize custom=_custom;
@property(readonly, copy, nonatomic) SOJUBroadcastMobsModelGeofencedMobStoryExtraData *geofenced; // @synthesize geofenced=_geofenced;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGeofenced:(id)arg1 custom:(id)arg2 privateStory:(id)arg3 groupChat:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

