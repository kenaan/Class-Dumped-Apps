//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SCSpectaclesAssetMetadata : NSObject
{
    NSString *_mediaId;
    NSData *_metadata;
    NSData *_imuData;
}

+ (unsigned long long)_primaryCameraForButtonSide:(unsigned long long)arg1;
+ (id)assetMetadataForContent:(id)arg1;
@property(readonly, nonatomic) NSData *imuData; // @synthesize imuData=_imuData;
@property(readonly, nonatomic) NSData *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (_Bool)isCorrupt;
- (id)imageDataWithJPEGData:(id)arg1;
- (struct CGImageMetadata *)_createImageMetadata;
- (void)addImageMetadata:(struct CGImageMetadata *)arg1;
- (id)initWithImageMetadata:(struct CGImageMetadata *)arg1 serialNumber:(id)arg2;
- (id)_valueForPath:(id)arg1 metadata:(struct CGImageMetadata *)arg2;
- (id)avMetadataItems;
- (id)_itemWithKey:(id)arg1 value:(id)arg2 type:(id)arg3;
- (id)initWithAvMetadataItems:(id)arg1 serialNumber:(id)arg2;
- (id)initWithImageData:(id)arg1 serialNumber:(id)arg2;
- (id)initWithAsset:(id)arg1 serialNumber:(id)arg2;
- (id)initWithMediaId:(id)arg1 metadata:(id)arg2 imuData:(id)arg3;

@end
