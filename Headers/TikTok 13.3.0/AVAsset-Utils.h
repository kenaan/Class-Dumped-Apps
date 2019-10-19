//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@interface AVAsset (Utils)
+ (id)reloadAsset:(id)arg1;
+ (id)imageFromCVPixelBufferRef0:(struct __CVBuffer *)arg1 num:(id)arg2;
- (struct CGSize)pixelAspectRatio;
- (struct CGSize)dimensions;
- (double)getEstimateBitrate;
- (unsigned long long)videoDegress;
- (struct CGSize)videoSize;
- (void)reverseAssetWithoutputURL:(id)arg1 owner:(id)arg2 compressProps:(id)arg3 videoComposition:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6;
- (id)writterSettingWithVideoCompostion:(id)arg1 compressProps:(id)arg2;
- (id)writterSettingWithAVAssetTrack:(id)arg1 compressProps:(id)arg2;
- (id)readerSetting;
@end

