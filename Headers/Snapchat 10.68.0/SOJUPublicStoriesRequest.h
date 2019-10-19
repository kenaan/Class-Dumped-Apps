//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUPublicStoriesRequest-Protocol.h"

@class NSNumber, NSString;

@interface SOJUPublicStoriesRequest : NSObject <SOJUPublicStoriesRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_sharedId;
    NSNumber *_screenWidthIn;
    NSNumber *_screenHeightIn;
    NSNumber *_screenWidthPx;
    NSNumber *_screenHeightPx;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *screenHeightPx; // @synthesize screenHeightPx=_screenHeightPx;
@property(readonly, copy, nonatomic) NSNumber *screenWidthPx; // @synthesize screenWidthPx=_screenWidthPx;
@property(readonly, copy, nonatomic) NSNumber *screenHeightIn; // @synthesize screenHeightIn=_screenHeightIn;
@property(readonly, copy, nonatomic) NSNumber *screenWidthIn; // @synthesize screenWidthIn=_screenWidthIn;
@property(readonly, copy, nonatomic) NSString *sharedId; // @synthesize sharedId=_sharedId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
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
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 sharedId:(id)arg4 screenWidthIn:(id)arg5 screenHeightIn:(id)arg6 screenWidthPx:(id)arg7 screenHeightPx:(id)arg8;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)screenHeightPxValue;
- (int)screenWidthPxValue;
- (float)screenHeightInValue;
- (float)screenWidthInValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
