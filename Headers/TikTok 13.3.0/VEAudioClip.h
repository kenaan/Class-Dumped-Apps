//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, VEAudioConfig, VEAudioReader;

@interface VEAudioClip : NSObject
{
    AVAsset *_asset;
    VEAudioConfig *_audioConfig;
    VEAudioReader *_audioReader;
    struct AudioBufferList *_bufferList;
    CDStruct_1b6d18a9 _seekTime;
}

@property(nonatomic) CDStruct_1b6d18a9 seekTime; // @synthesize seekTime=_seekTime;
@property(nonatomic) struct AudioBufferList *bufferList; // @synthesize bufferList=_bufferList;
@property(retain, nonatomic) VEAudioReader *audioReader; // @synthesize audioReader=_audioReader;
@property(retain, nonatomic) VEAudioConfig *audioConfig; // @synthesize audioConfig=_audioConfig;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)updateClipRange:(id)arg1;
- (id)initWithAsset:(id)arg1 audioConfig:(id)arg2;

@end

