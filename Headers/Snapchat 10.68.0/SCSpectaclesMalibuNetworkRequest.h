//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesNetworkRequestProvider-Protocol.h"

@class MLBAmbaRequest, NSString;

@interface SCSpectaclesMalibuNetworkRequest : NSObject <SCSpectaclesNetworkRequestProvider>
{
    MLBAmbaRequest *_malibuRequest;
}

+ (id)lagunaPairingRequestWithAmbaRequest:(id)arg1;
+ (id)stereoCalibrationDataRequest;
+ (id)analyticsFilesDeleteRequest;
+ (id)analyticsFilesGetWithFilename:(id)arg1 range:(struct _NSRange)arg2;
+ (id)analyticsFilesListRequest;
+ (id)shareWifiCredentialsStatusRequest;
+ (id)shareWifiCredentialsRequest;
+ (id)gpsWriteRequest:(id)arg1;
+ (id)firmwareWriteRequest:(id)arg1 start:(unsigned long long)arg2;
+ (id)crashLogFileRequestWithFilename:(id)arg1 range:(struct _NSRange)arg2;
+ (id)crashLogFileListRequest;
+ (id)startAsNeededDeletionRequest;
+ (id)deletionRequestForContentNamed:(id)arg1 includeHd:(_Bool)arg2;
+ (id)markTransferredRequestForContentNamed:(id)arg1 includeHd:(_Bool)arg2;
+ (id)batchReadRequestWithFilename:(id)arg1 range:(struct _NSRange)arg2 chunkSize:(unsigned long long)arg3 allowDataPacket:(_Bool)arg4;
+ (id)readRequestWithFilename:(id)arg1;
+ (int)_mediaTypeFromFileType:(unsigned long long)arg1;
+ (id)mediaListRequest;
+ (id)requestByBatchingRequests:(id)arg1;
@property(readonly, nonatomic) MLBAmbaRequest *malibuRequest; // @synthesize malibuRequest=_malibuRequest;
- (void).cxx_destruct;
- (id)initWithMalibuRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

