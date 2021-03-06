//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSNumber, NSString;

@interface PDLContactEntity : NSObject
{
    _Bool _hasImageData;
    NSString *_identifier;
    unsigned long long _rowID;
    unsigned long long _source;
    NSNumber *_affinity;
    NSString *_displayName;
    NSArray *_emailAddresses;
    NSArray *_phoneNumbers;
    NSData *_protoData;
}

@property(readonly, nonatomic) NSData *protoData; // @synthesize protoData=_protoData;
@property(readonly, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(readonly, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, nonatomic) _Bool hasImageData; // @synthesize hasImageData=_hasImageData;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSNumber *affinity; // @synthesize affinity=_affinity;
@property(readonly, nonatomic) unsigned long long source; // @synthesize source=_source;
@property(readonly, nonatomic) unsigned long long rowID; // @synthesize rowID=_rowID;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqualToEntity:(id)arg1;
- (id)initWithIdentifier:(id)arg1 rowID:(unsigned long long)arg2 source:(unsigned long long)arg3 affinity:(id)arg4 displayName:(id)arg5 hasImageData:(_Bool)arg6 emailAddresses:(id)arg7 phoneNumbers:(id)arg8 protoData:(id)arg9;
- (id)initWithIdentifier:(id)arg1 source:(unsigned long long)arg2 affinity:(id)arg3 displayName:(id)arg4 hasImageData:(_Bool)arg5 emailAddresses:(id)arg6 phoneNumbers:(id)arg7 protoData:(id)arg8;
- (id)asAutocompletion;

@end

