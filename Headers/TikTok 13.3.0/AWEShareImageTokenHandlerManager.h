//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PHPhotoLibraryChangeObserver-Protocol.h"

@class NSString, PHAsset, PHFetchResult;
@protocol OS_dispatch_queue;

@interface AWEShareImageTokenHandlerManager : NSObject <PHPhotoLibraryChangeObserver>
{
    _Bool _isFetchingAssets;
    _Bool _hasEnteredBackground;
    _Bool _registered;
    _Bool _photoLibraryNotChanged;
    _Bool _useOptimizingWhenFetchingAssets;
    NSObject<OS_dispatch_queue> *_queue;
    PHFetchResult *_lastResult;
    PHAsset *_lastCheckedAsset;
    PHAsset *_assetToCheck;
}

@property(retain, nonatomic) PHAsset *assetToCheck; // @synthesize assetToCheck=_assetToCheck;
@property(retain, nonatomic) PHAsset *lastCheckedAsset; // @synthesize lastCheckedAsset=_lastCheckedAsset;
@property(retain, nonatomic) PHFetchResult *lastResult; // @synthesize lastResult=_lastResult;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool useOptimizingWhenFetchingAssets; // @synthesize useOptimizingWhenFetchingAssets=_useOptimizingWhenFetchingAssets;
@property(nonatomic) _Bool photoLibraryNotChanged; // @synthesize photoLibraryNotChanged=_photoLibraryNotChanged;
@property(nonatomic) _Bool registered; // @synthesize registered=_registered;
@property(nonatomic) _Bool hasEnteredBackground; // @synthesize hasEnteredBackground=_hasEnteredBackground;
@property(nonatomic) _Bool isFetchingAssets; // @synthesize isFetchingAssets=_isFetchingAssets;
- (void).cxx_destruct;
- (void)reportQRCodeRecignitionEnd:(id)arg1 extraLogInfo:(id)arg2;
- (void)reportQRCodeRecignitionEnd:(id)arg1;
- (void)reportQRCodeRecignitionBegin;
- (void)reportNoCrash:(_Bool)arg1;
- (void)assumeWillCrash;
- (_Bool)needExitToAvoidCrash;
- (void)compareChange:(id)arg1;
- (void)_photoLibraryDidChange:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)applicationWillTerminate;
- (void)didEnterBackground;
- (_Bool)isValidPhoto:(id)arg1;
- (void)detectQRCodeURLFromAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)optimizedExtractQRCodeURLFromPhotoAlbum:(CDUnknownBlockType)arg1;
- (void)originalExtractQRCodeURLFromPhotoAlbum:(CDUnknownBlockType)arg1;
- (void)extractQRCodeURLFromPhotoAlbum:(CDUnknownBlockType)arg1;
- (void)delayedExtractQRCodeWithRetryCount:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getShareImageToken:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

