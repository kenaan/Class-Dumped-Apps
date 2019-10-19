//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSHashTable, YTOfflineAdParser;

@interface YTOfflineAdController : NSObject
{
    YTOfflineAdParser *_offlineAdParser;
    NSHashTable *_observers;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)notifyDidSavePlayerDataForOfflineAd:(id)arg1;
- (void)incrementAdAssetCountForAdVideoID:(id)arg1;
- (void)fetchAndSavePlayerDataForOfflineAd:(id)arg1 hostVideo:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)fetchOfflineAdNeedingPlayerResponse:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)removeOfflineAdControllerObserver:(id)arg1;
- (void)addOfflineAdControllerObserver:(id)arg1;
- (id)init;

@end
