//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCachingEvictable-Protocol.h"
#import "SCCachingImageGeneratingDelegate-Protocol.h"

@class NSArray, NSDate, NSNumber, NSString, NSURL, SCCachingImageGenerating, SCCachingMediaItemBuildRequestGroup, SCCachingMediaManager, SCMemoryCache;
@protocol SCCachingMediaEncryption, SCCachingMediaEntity, SCCachingMediaLogger, SCPerforming;

@interface SCCachingMediaItem : NSObject <SCCachingImageGeneratingDelegate, SCCachingEvictable>
{
    NSURL *_contentURL;
    NSString *_UUID;
    SCCachingMediaManager *_cachingMediaManager;
    long long _maxSourceLevel;
    NSArray *_dataImages;
    unsigned long long _imageFormat;
    id <SCCachingMediaEncryption> _encryption;
    id <SCPerforming> _performer;
    _Bool _readImageInfoOnce;
    SCMemoryCache *_memoryCache;
    id <SCCachingMediaLogger> _logger;
    SCCachingMediaItemBuildRequestGroup *_requestGroup;
    _Bool _imageInfoAvailable;
    id <SCCachingMediaEntity> _entity;
    SCCachingImageGenerating *_imageGenerating;
    long long _maxImageCount;
    long long _sourceLevel;
    long long _cost;
    NSDate *_lastAccessTime;
    NSNumber *_identifier;
    struct CGSize _targetSize;
}

@property(copy, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool imageInfoAvailable; // @synthesize imageInfoAvailable=_imageInfoAvailable;
@property(readonly, nonatomic) NSDate *lastAccessTime; // @synthesize lastAccessTime=_lastAccessTime;
@property(readonly, nonatomic) long long cost; // @synthesize cost=_cost;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, nonatomic) long long sourceLevel; // @synthesize sourceLevel=_sourceLevel;
@property(readonly, nonatomic) long long maxImageCount; // @synthesize maxImageCount=_maxImageCount;
@property(readonly, nonatomic) SCCachingImageGenerating *imageGenerating; // @synthesize imageGenerating=_imageGenerating;
@property(retain, nonatomic) id <SCCachingMediaEntity> entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (void)_writeToDiskWithDataImages:(id)arg1 sourceLevel:(long long)arg2 targetSize:(struct CGSize)arg3 faultToMemory:(_Bool)arg4;
- (id)cachingEntityKey;
- (void)evict;
- (void)cachingImageGeneratingIsAccessed:(id)arg1;
- (void)cachingImageGenerating:(id)arg1 sourceLevel:(long long)arg2 imagesGenerated:(id)arg3 saveToDisk:(_Bool)arg4;
- (id)_buildImageGeneratingFromSourceItem:(id)arg1 preferDecode:(_Bool)arg2 requiredSourceLevel:(long long)arg3 requestOptions:(id)arg4 cacheMissHandler:(CDUnknownBlockType)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (id)buildImageGeneratingFromSourceItem:(id)arg1 requiredSourceLevel:(long long)arg2 requestOptions:(id)arg3 cacheMissHandler:(CDUnknownBlockType)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)_writeLastAccessTimeToDisk;
- (_Bool)readDataImagesIntoMemory;
- (void)_processAndDecryptDataFromDisk:(id)arg1 sourceLevel:(long long)arg2;
- (void)readHighestLevelSourceImageInfoFromDisk;
- (id)initWithContentURL:(id)arg1 entity:(id)arg2 cachingMediaManager:(id)arg3 targetSize:(struct CGSize)arg4 maxSourceLevel:(long long)arg5 maxImageCount:(long long)arg6 imageFormat:(unsigned long long)arg7 encryption:(id)arg8 performer:(id)arg9 memoryCache:(id)arg10 logger:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
