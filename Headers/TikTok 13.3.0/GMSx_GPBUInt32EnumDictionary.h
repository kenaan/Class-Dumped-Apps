//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPBDictionaryInternalsProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class GMSx_GPBMessage, NSMutableDictionary;

@interface GMSx_GPBUInt32EnumDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GMSx_GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
    CDUnknownFunctionPointerType _validationFunc;
}

@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
- (void)setEnum:(int)arg1 forKey:(unsigned int)arg2;
- (void)removeAll;
- (void)removeEnumForKey:(unsigned int)arg1;
- (void)setRawValue:(int)arg1 forKey:(unsigned int)arg2;
- (void)addRawEntriesFromDictionary:(id)arg1;
- (void)enumerateKeysAndEnumsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)getRawValue:(int *)arg1 forKey:(unsigned int)arg2;
- (_Bool)getEnum:(int *)arg1 forKey:(unsigned int)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setGPBGenericValue:(CDUnion_cf1021d0 *)arg1 forGPBGenericValueKey:(CDUnion_cf1021d0 *)arg2;
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_cf1021d0 *)arg2 keyDataType:(unsigned char)arg3;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndRawValuesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const unsigned int *)arg3 count:(unsigned long long)arg4;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;
- (id)init;

@end

