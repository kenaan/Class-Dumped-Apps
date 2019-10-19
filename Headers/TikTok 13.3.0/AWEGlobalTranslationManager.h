//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEGlobalTranslationSubscription, NSMutableDictionary, NSPointerArray, NSString;

@interface AWEGlobalTranslationManager : NSObject
{
    NSPointerArray *_subscriptions;
    NSMutableDictionary *_translationCache;
    AWEGlobalTranslationSubscription *_subscription;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AWEGlobalTranslationSubscription *subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) NSMutableDictionary *translationCache; // @synthesize translationCache=_translationCache;
@property(retain, nonatomic) NSPointerArray *subscriptions; // @synthesize subscriptions=_subscriptions;
- (void).cxx_destruct;
- (void)clearTempCache;
- (void)_fetchTranslationForOriginalContents:(id)arg1 targetLanguageCode:(id)arg2 additionalParams:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchTranslationForOriginalContent:(id)arg1 targetLanguageCode:(id)arg2 additionalParams:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) NSString *targetLanguageCode;
- (void)_updateTranslationStatus:(unsigned long long)arg1 withError:(id)arg2;
- (void)submitOriginalContentsForTranslation:(id)arg1 requestingStatus:(_Bool)arg2 enableTempCache:(_Bool)arg3 additionalParams:(id)arg4;
- (void)submitOriginalContentsForTranslation:(id)arg1 requestingStatus:(_Bool)arg2 enableTempCache:(_Bool)arg3;
- (void)submitOriginalContentForTranslation:(id)arg1 requestingStatus:(_Bool)arg2 additionalParams:(id)arg3;
- (void)submitOriginalContentForTranslation:(id)arg1 requestingStatus:(_Bool)arg2;
- (unsigned long long)fetchTranslationStatusFrom:(id)arg1;
- (id)fetchTranslationFrom:(id)arg1;
- (void)addSubscription:(id)arg1;

@end

