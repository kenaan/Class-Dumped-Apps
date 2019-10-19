//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface SCFeatureSet : NSObject
{
    NSArray *_cachedResponderChain;
    NSArray *_cachedResponderChainReferences;
    NSArray *_cachedSupportedFeatures;
    long long _featureCount;
    NSMutableDictionary *_featureReferencesDictionary;
    NSMutableArray *_featureReferences;
    _Bool _hasPrioritizedFeatures;
}

+ (id)_featuresFromFeatureReferences:(id)arg1;
- (void).cxx_destruct;
- (id)_sortedResponderChainReferences;
- (void)_resetAndInitialize;
- (void)_insertFeature:(id)arg1 key:(id)arg2 priority:(long long)arg3;
- (id)supportedFeatures;
- (id)responderChainIncludingKeys:(id)arg1;
- (id)responderChainExcludingKeys:(id)arg1;
- (id)responderChain;
- (void)removeAll;
- (long long)count;
- (_Bool)hasFeatureForKey:(id)arg1;
- (void)updateFeaturePreservingOriginalPriority:(id)arg1 key:(id)arg2;
- (void)addFeature:(id)arg1 key:(id)arg2 withResponderChainPriority:(long long)arg3;
- (void)addFeature:(id)arg1 key:(id)arg2;
- (id)init;

@end
