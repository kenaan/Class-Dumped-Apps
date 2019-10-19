//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWETTFileUploadService.h"

#import "TTVideoUploadClientProtocol-Protocol.h"
#import "TTVideoUploadEventManagerProtocol-Protocol.h"

@class AWEVideoUploadParametersResponseModel, HttpResourceLoader, NSString, TTNetResourceLoaderDelegate, TTVideoUploadClient;

@interface AWETTVideoUploadService : AWETTFileUploadService <TTVideoUploadClientProtocol, TTVideoUploadEventManagerProtocol>
{
    AWEVideoUploadParametersResponseModel *_videoUploadParameters;
    TTVideoUploadClient *_videoUploadClient;
    TTNetResourceLoaderDelegate *_ttnetDelegate;
    HttpResourceLoader *_ttnetResl;
    CDUnknownBlockType _videoCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType videoCompletion; // @synthesize videoCompletion=_videoCompletion;
@property(retain, nonatomic) HttpResourceLoader *ttnetResl; // @synthesize ttnetResl=_ttnetResl;
@property(retain, nonatomic) TTNetResourceLoaderDelegate *ttnetDelegate; // @synthesize ttnetDelegate=_ttnetDelegate;
@property(retain, nonatomic) TTVideoUploadClient *videoUploadClient; // @synthesize videoUploadClient=_videoUploadClient;
@property(retain, nonatomic) AWEVideoUploadParametersResponseModel *videoUploadParameters; // @synthesize videoUploadParameters=_videoUploadParameters;
- (void).cxx_destruct;
- (void)eventManagerDidUpdate:(id)arg1;
- (id)uploadGetString:(long long)arg1;
- (int)uploadVideoCheckIfNeedTry:(long long)arg1 tryCount:(long long)arg2;
- (void)uploadVideoProgressDidUpdate:(long long)arg1;
- (void)uploadVideoDidFinish:(id)arg1 error:(id)arg2;
- (void)uploadFileWithProgress:(id *)arg1 videoCompletion:(CDUnknownBlockType)arg2;
- (void)startUploading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

