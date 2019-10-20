//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESAudioConverter, NSMutableArray, NSURL;

@interface IESAudioVolumConvert : NSObject
{
    struct WaveformVisualizer *_waveform;
    NSMutableArray *volumesArray;
    IESAudioConverter *_musicConverter;
    NSURL *_musicURL;
    long long _waveformType;
    double _waveformduration;
    unsigned long long _wavePointsCount;
    struct AudioStreamBasicDescription _absd;
}

@property(nonatomic) unsigned long long wavePointsCount; // @synthesize wavePointsCount=_wavePointsCount;
@property(nonatomic) double waveformduration; // @synthesize waveformduration=_waveformduration;
@property(nonatomic) long long waveformType; // @synthesize waveformType=_waveformType;
@property(retain, nonatomic) NSURL *musicURL; // @synthesize musicURL=_musicURL;
@property(nonatomic) struct AudioStreamBasicDescription absd; // @synthesize absd=_absd;
@property(retain, nonatomic) IESAudioConverter *musicConverter; // @synthesize musicConverter=_musicConverter;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getVolumePoints;
- (void)convertNewFile2:(id)arg1;
- (void)waveFormProcess:(struct AudioBufferList *)arg1 maxFrameCount:(long long)arg2;
- (void)copyToBufferList:(struct AudioBufferList *)arg1 dstOffset:(long long)arg2 srcBufferList:(struct AudioBufferList *)arg3 srcOffset:(long long)arg4 copyFrams:(long long)arg5;
- (void)convertNewFile:(id)arg1;
- (id)initWithFileURL:(id)arg1 waveformType:(long long)arg2 duration:(double)arg3 pointCount:(unsigned long long)arg4;

@end
