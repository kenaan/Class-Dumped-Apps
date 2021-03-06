//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCArcadiaObjectInfo-Protocol.h"

@class NSDate, NSString;

@interface SCArcadiaObjectInfo : NSObject <SCArcadiaObjectInfo>
{
    NSString *_name;
    NSString *_bId;
    NSString *_jId;
    NSDate *_fetchDate;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) NSDate *fetchDate; // @synthesize fetchDate=_fetchDate;
@property(readonly, copy, nonatomic) NSString *jId; // @synthesize jId=_jId;
@property(readonly, copy, nonatomic) NSString *bId; // @synthesize bId=_bId;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
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
- (id)initWithName:(id)arg1 bId:(id)arg2 jId:(id)arg3 fetchDate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

