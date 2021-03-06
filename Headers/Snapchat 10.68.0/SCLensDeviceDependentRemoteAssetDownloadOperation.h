//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLensAssetDownloadOperation.h"

@class SCLensContentDataFetcher;
@protocol SCLensRemoteAssetLoggerProtocol, SCLensRemoteAssetsLensResourceResolver;

@interface SCLensDeviceDependentRemoteAssetDownloadOperation : SCLensAssetDownloadOperation
{
    id <SCLensRemoteAssetsLensResourceResolver> _assetLensResourceResolver;
    SCLensContentDataFetcher *_contentDataFetcher;
    id <SCLensRemoteAssetLoggerProtocol> _lensRemoteAssetLogger;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_processDataFetcherResponseContentPath:(id)arg1 cached:(_Bool)arg2 inputSettings:(id)arg3 error:(id)arg4;
- (void)boostWithSettings:(id)arg1;
- (void)executeWithSettings:(id)arg1;
- (id)initWithLens:(id)arg1 requestTiming:(long long)arg2 asset:(id)arg3 contentDataFetcher:(id)arg4 assetLensResourceResolver:(id)arg5 lensRemoteAssetLogger:(id)arg6;

@end

