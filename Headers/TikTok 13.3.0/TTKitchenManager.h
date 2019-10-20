//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, YYCache;

@interface TTKitchenManager : NSObject
{
    YYCache *_kitchenCache;
    NSCache *_modelCache;
}

+ (Class)modelizer;
+ (void)setModelizer:(Class)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSCache *modelCache; // @synthesize modelCache=_modelCache;
@property(retain, nonatomic) YYCache *kitchenCache; // @synthesize kitchenCache=_kitchenCache;
- (void).cxx_destruct;
- (void)removeAllKitchen;
- (void)cleanCacheLog;
- (id)getModel:(id)arg1;
- (id)_getDictionary:(id)arg1;
- (id)getDictionary:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (id)getArrayArray:(id)arg1;
- (id)getDictionaryArray:(id)arg1;
- (id)getFloatArray:(id)arg1;
- (id)getStringArray:(id)arg1;
- (id)getBOOLArray:(id)arg1;
- (id)_getArray:(id)arg1 type:(unsigned long long)arg2 clazz:(Class)arg3;
- (id)_getArray:(id)arg1 model:(id)arg2;
- (id)getArray:(id)arg1;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (_Bool)getBOOL:(id)arg1;
- (void)setBOOL:(_Bool)arg1 forKey:(id)arg2;
- (id)getString:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (long long)getInt:(id)arg1;
- (void)setInt:(long long)arg1 forKey:(id)arg2;
- (double)getFloat:(id)arg1;
- (void)setFloat:(double)arg1 forKey:(id)arg2;
- (id)allKitchenModels;
- (id)kitchenForKey:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)init;

@end
