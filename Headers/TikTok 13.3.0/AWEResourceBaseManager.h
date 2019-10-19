//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface AWEResourceBaseManager : NSObject
{
    NSMutableDictionary *_resourceDownloadTaskMap;
    unsigned long long _searchPathDirectory;
    NSString *_dirName;
    NSString *_resourceDirectory;
}

@property(copy, nonatomic) NSString *resourceDirectory; // @synthesize resourceDirectory=_resourceDirectory;
@property(copy, nonatomic) NSString *dirName; // @synthesize dirName=_dirName;
@property(nonatomic) unsigned long long searchPathDirectory; // @synthesize searchPathDirectory=_searchPathDirectory;
@property(retain, nonatomic) NSMutableDictionary *resourceDownloadTaskMap; // @synthesize resourceDownloadTaskMap=_resourceDownloadTaskMap;
- (void).cxx_destruct;
- (id)decompressedResourcesDirectory;
- (id)auctualDecompressedResourcePathForItem:(id)arg1;
- (id)decompressedResourcePathForResourceItem:(id)arg1;
- (id)resourcePathForResourceItem:(id)arg1;
- (_Bool)isDownloadingResoursItem:(id)arg1;
- (_Bool)isFileExistAtPath:(id)arg1;
- (void)downloadResource:(id)arg1 index:(long long)arg2 progress:(id *)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)downloadResource:(id)arg1 progress:(id *)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithSearchPathDirectory:(unsigned long long)arg1 resourceDirectoryName:(id)arg2;

@end

