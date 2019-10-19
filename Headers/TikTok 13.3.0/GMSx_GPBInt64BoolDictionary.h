//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPBDictionaryInternalsProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class GMSx_GPBMessage, NSMutableDictionary;

@interface GMSx_GPBInt64BoolDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GMSx_GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

- (void)removeAll;
- (void)removeBoolForKey:(long long)arg1;
- (void)setBool:(_Bool)arg1 forKey:(long long)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (_Bool)getBool:(_Bool *)arg1 forKey:(long long)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setGPBGenericValue:(CDUnion_cf1021d0 *)arg1 forGPBGenericValueKey:(CDUnion_cf1021d0 *)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndBoolsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithBools:(const _Bool *)arg1 forKeys:(const long long *)arg2 count:(unsigned long long)arg3;
- (id)init;

@end

