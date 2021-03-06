//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdCollectionItemImpressionTrack-Protocol.h"

@class NSNumber, NSString, SOJUAdDeepLinkImpressionTrack, SOJUAdRemoteWebpageImpressionTrack;

@interface SOJUAdCollectionItemImpressionTrack : NSObject <SOJUAdCollectionItemImpressionTrack>
{
    NSString *_productId;
    NSNumber *_positionIndex;
    NSString *_attachmentType;
    SOJUAdRemoteWebpageImpressionTrack *_remoteWebpage;
    SOJUAdDeepLinkImpressionTrack *_deepLink;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUAdDeepLinkImpressionTrack *deepLink; // @synthesize deepLink=_deepLink;
@property(readonly, copy, nonatomic) SOJUAdRemoteWebpageImpressionTrack *remoteWebpage; // @synthesize remoteWebpage=_remoteWebpage;
@property(readonly, copy, nonatomic) NSString *attachmentType; // @synthesize attachmentType=_attachmentType;
@property(readonly, copy, nonatomic) NSNumber *positionIndex; // @synthesize positionIndex=_positionIndex;
@property(readonly, copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
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
- (id)initWithProductId:(id)arg1 positionIndex:(id)arg2 attachmentType:(id)arg3 remoteWebpage:(id)arg4 deepLink:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)attachmentTypeEnum;
- (int)positionIndexValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

