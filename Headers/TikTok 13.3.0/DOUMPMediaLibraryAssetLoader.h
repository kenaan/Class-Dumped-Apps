//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetExportSession, NSString, NSURL;

@interface DOUMPMediaLibraryAssetLoader : NSObject
{
    NSString *_cachedPath;
    AVAssetExportSession *_exportSession;
    _Bool _failed;
    NSURL *_assetURL;
    CDUnknownBlockType _completedBlock;
}

+ (id)_sha256ForURL:(id)arg1;
+ (id)loaderWithURL:(id)arg1;
@property(copy) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(readonly, nonatomic, getter=isFailed) _Bool failed; // @synthesize failed=_failed;
@property(readonly, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *fileExtension;
@property(readonly, nonatomic) NSString *mimeType;
@property(readonly, nonatomic) NSString *cachedPath;
- (void)_reportFailure;
- (void)_invokeCompletedBlock;
- (void)_exportSessionDidComplete;
- (void)cancel;
- (void)start;
- (id)initWithURL:(id)arg1;

@end

