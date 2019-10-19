//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface JSONKeyMapper : NSObject
{
    int _lock;
    CDUnknownBlockType _JSONToModelKeyBlock;
    CDUnknownBlockType _modelToJSONKeyBlock;
    NSMutableDictionary *_toJSONMap;
}

+ (id)baseMapper:(id)arg1 withModelToJSONExceptions:(id)arg2;
+ (id)mapper:(id)arg1 withExceptions:(id)arg2;
+ (id)mapperFromUpperCaseToLowerCase;
+ (id)mapperForTitleCase;
+ (id)mapperForSnakeCase;
+ (id)mapperFromUnderscoreCaseToCamelCase;
+ (id)swapKeysAndValuesInDictionary:(id)arg1;
@property(nonatomic) int lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *toJSONMap; // @synthesize toJSONMap=_toJSONMap;
@property(readonly, nonatomic) CDUnknownBlockType modelToJSONKeyBlock; // @synthesize modelToJSONKeyBlock=_modelToJSONKeyBlock;
@property(readonly, nonatomic) CDUnknownBlockType JSONToModelKeyBlock; // @synthesize JSONToModelKeyBlock=_JSONToModelKeyBlock;
- (void).cxx_destruct;
- (id)convertValue:(id)arg1;
- (id)convertValue:(id)arg1 isImportingToModel:(_Bool)arg2;
- (id)initWithModelToJSONDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithModelToJSONBlock:(CDUnknownBlockType)arg1;
- (id)initWithJSONToModelBlock:(CDUnknownBlockType)arg1 modelToJSONBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

