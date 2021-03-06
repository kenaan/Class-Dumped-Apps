//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSLock, NSMutableDictionary;

@interface SCLensRemoteAssetsInGalleryHandler : NSObject
{
    NSMutableDictionary *_assetIdToPathMap;
    NSLock *_assetIdToPathMapLock;
    NSFileManager *_fileManager;
}

+ (id)_getAbsolutePathForBlobWithId:(id)arg1;
+ (id)_cacheDirectoryPath;
+ (id)deserializeLensAssetData:(id)arg1 fileManager:(id)arg2;
- (void).cxx_destruct;
- (_Bool)_isValidAssetMap:(id)arg1;
- (id)serializedLensAssetsWithError:(id *)arg1;
- (id)assetPathForId:(id)arg1;
- (id)initWithAssetIdsToPathMap:(id)arg1 fileManager:(id)arg2;

@end

