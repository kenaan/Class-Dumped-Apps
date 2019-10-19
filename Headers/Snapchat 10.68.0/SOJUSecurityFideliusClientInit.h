//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUSecurityFideliusClientInit-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUSecurityFideliusClientInit : NSObject <SOJUSecurityFideliusClientInit>
{
    NSArray *_hashedOutBetas;
    NSString *_sojuNewOutBeta;
    NSString *_sojuNewHashedOutBeta;
    NSString *_sojuNewIwek;
    NSNumber *_sojuNewFideliusVersion;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *sojuNewFideliusVersion; // @synthesize sojuNewFideliusVersion=_sojuNewFideliusVersion;
@property(readonly, copy, nonatomic) NSString *sojuNewIwek; // @synthesize sojuNewIwek=_sojuNewIwek;
@property(readonly, copy, nonatomic) NSString *sojuNewHashedOutBeta; // @synthesize sojuNewHashedOutBeta=_sojuNewHashedOutBeta;
@property(readonly, copy, nonatomic) NSString *sojuNewOutBeta; // @synthesize sojuNewOutBeta=_sojuNewOutBeta;
@property(readonly, copy, nonatomic) NSArray *hashedOutBetas; // @synthesize hashedOutBetas=_hashedOutBetas;
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
- (id)initWithHashedOutBetas:(id)arg1 sojuNewOutBeta:(id)arg2 sojuNewHashedOutBeta:(id)arg3 sojuNewIwek:(id)arg4 sojuNewFideliusVersion:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)sojuNewFideliusVersionValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
