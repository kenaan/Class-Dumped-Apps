//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTSMediaMixPlayer, HTSVideoData, IESMMEffectStickerInfo, IESMMStoryConfig, NSString, NSURL, UIImage;

@protocol IESMMRecoderProtocol <NSObject>
+ (NSString *)effectVersion;
+ (void)exportVideoWithVideoData:(HTSVideoData *)arg1 shouldNOCopy:(_Bool)arg2 completion:(void (^)(NSURL *, NSError *, int))arg3;
@property(nonatomic) long long fillMode;
@property(nonatomic) _Bool useEffectRecognize;
@property(retain, nonatomic) HTSMediaMixPlayer *mixPlayer;
@property(readonly, nonatomic) HTSVideoData *videoData;
@property(readonly, nonatomic) unsigned long long fragmentCount;
- (_Bool)exportVideoWithMicMuted:(_Bool)arg1 completion:(void (^)(HTSVideoData *, NSError *))arg2;
- (_Bool)exportWithVideo:(HTSVideoData *)arg1 completion:(void (^)(HTSVideoData *, NSError *))arg2;
- (void)enableEffectMusicPlayerProgress:(_Bool)arg1;
- (void)applyRealPlayWithInfo:(IESMMEffectStickerInfo *)arg1;
- (void)applyRealPlay:(NSString *)arg1;
- (void)applyMusicNodes:(NSString *)arg1;
- (void)setRecordRate:(double)arg1 complete:(void (^)(void))arg2;
- (void)changeDuetVideo:(NSURL *)arg1 startTime:(double)arg2 duaration:(double)arg3 block:(void (^)(void))arg4;
- (void)setDuetMovieWithVideoData:(HTSVideoData *)arg1 cameraBound:(struct CGRect)arg2 duetBound:(struct CGRect)arg3;
- (void)setDuetMovieWithVideoURL:(NSURL *)arg1 cameraBound:(struct CGRect)arg2 duetBound:(struct CGRect)arg3 startTime:(double)arg4 clipDuration:(double)arg5;
- (void)setDuetMovieWithMaskImage:(UIImage *)arg1 frontBound:(struct CGRect)arg2 duetVideoURL:(NSURL *)arg3 startTime:(double)arg4 clipDuration:(double)arg5;
- (void)resetStoryModeWithConfig:(IESMMStoryConfig *)arg1;
- (void)enableAudioEffectSticker:(_Bool)arg1;
- (void)switchAudioMode:(long long)arg1;
- (void)setDropFrame:(_Bool)arg1;
- (void)setMusicWithURL:(NSURL *)arg1 startTime:(double)arg2 clipDuration:(double)arg3 repeatCount:(long long)arg4;
- (void)changeMusicStartTime:(double)arg1 clipDuration:(double)arg2;
- (void)setMusicWithURL:(NSURL *)arg1;
- (void)removePlayer:(void (^)(void))arg1;
- (void)removePlayer;
- (double)getTotalDuration;
- (void)removeAllVideoFragments:(void (^)(void))arg1;
- (void)removeAllVideoFragments;
- (void)removeLastVideoFragment;
- (void)resetVideoRecordReady;
- (void)cancelVideoRecord;
- (void)pauseVideoPreView;
- (void)pauseVideoRecord;
- (void)startPreviewWithRate:(double)arg1;
- (void)startVideoRecordWithRate:(double)arg1;
- (void)resetRecorderWriter;
@end

