//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GADOAdURLStash : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableDictionary *_adViewResourceCollections;
    NSMutableDictionary *_mainDocumentURLAdViewKeys;
    NSMutableDictionary *_adViewLoadingFrameCount;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)internalAdViewForMainDocumentURL:(id)arg1;
- (id)adViewForMainDocumentURL:(id)arg1;
- (_Bool)hasLoadingAd;
- (id)responseBodyForRequest:(id)arg1;
- (_Bool)shouldInterceptRequestWithMainDocumentURL:(id)arg1;
- (void)removeInformationForAdViewKey:(id)arg1 canonicalMainDocumentURL:(id)arg2;
- (void)adView:(id)arg1 didAttemptAutoClickRequest:(id)arg2;
- (void)adView:(id)arg1 didClickThroughToURL:(id)arg2;
- (void)adViewDidFinishLayout:(id)arg1;
- (void)adViewDidFinishLoad:(id)arg1;
- (void)adViewDidStartLoad:(id)arg1;
- (void)removeAdView:(id)arg1;
- (void)adView:(id)arg1 request:(id)arg2 didReceiveData:(id)arg3;
- (void)adView:(id)arg1 request:(id)arg2 willReceiveResponse:(id)arg3;
- (void)adView:(id)arg1 willLoadRequest:(id)arg2;
- (void)adView:(id)arg1 willLoadURLRequest:(id)arg2;
- (id)collectionForAdView:(id)arg1;
- (void)adViewWillLoadRootContent:(id)arg1;
- (id)init;

@end

