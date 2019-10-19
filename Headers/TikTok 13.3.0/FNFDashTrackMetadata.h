//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNFDashTrackEntryContainer, NSArray, NSString, NSURL;

@interface FNFDashTrackMetadata : NSObject
{
    unsigned int _width;
    unsigned int _height;
    unsigned int _bandwidth;
    unsigned int _timelineDuration;
    unsigned int _timelineTimescale;
    int _predictiveMediaEndNumber;
    NSString *_representationId;
    NSString *_qualityLabel;
    NSString *_mimeType;
    NSString *_codecs;
    NSArray *_abrPolicyTags;
    NSString *_playbackResolutionMos;
    NSURL *_initializationUrl;
    NSString *_projection;
    NSString *_audioChannelConfiguration;
    NSString *_encodedInitData;
    NSURL *_mpdUrl;
    FNFDashTrackEntryContainer *_timelineEntries;
    FNFDashTrackEntryContainer *_predictiveTimelineEntries;
    NSString *_predictiveMediaUrlTemplate;
    NSString *_pssh;
    NSString *_keyId;
    struct _NSRange _indexRange;
    struct _NSRange _initializationRange;
    struct _NSRange _firstSegmentRange;
    struct _NSRange _secondSegmentRange;
}

+ (id)segmentTemplateMetadataWithId:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 bandwidth:(unsigned int)arg4 abrPolicyTags:(id)arg5 qualityLabel:(id)arg6 mimeType:(id)arg7 codecs:(id)arg8 initializationUrl:(id)arg9 projection:(id)arg10 audioChannelConfiguration:(id)arg11 timelineTimescale:(unsigned int)arg12 timelineEntries:(id)arg13 predictiveTimelineEntries:(id)arg14 encodedInitData:(id)arg15 mpdUrl:(id)arg16 mediaUrlTemplate:(id)arg17 predictiveMediaUrlTemplate:(id)arg18 predictiveMediaEndNumber:(int)arg19 pssh:(id)arg20 keyId:(id)arg21 playbackResolutionMos:(id)arg22;
+ (id)segmentListMetadataWithId:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 bandwidth:(unsigned int)arg4 abrPolicyTags:(id)arg5 qualityLabel:(id)arg6 mimeType:(id)arg7 codecs:(id)arg8 initializationUrl:(id)arg9 projection:(id)arg10 audioChannelConfiguration:(id)arg11 timelineTimescale:(unsigned int)arg12 timelineDuration:(unsigned int)arg13 timelineEntries:(id)arg14 pssh:(id)arg15 keyId:(id)arg16 playbackResolutionMos:(id)arg17;
+ (id)segmentBaseMetadataWithId:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 bandwidth:(unsigned int)arg4 abrPolicyTags:(id)arg5 qualityLabel:(id)arg6 mimeType:(id)arg7 codecs:(id)arg8 initializationUrl:(id)arg9 projection:(id)arg10 audioChannelConfiguration:(id)arg11 indexRange:(struct _NSRange)arg12 initializationRange:(struct _NSRange)arg13 firstSegmentRange:(struct _NSRange)arg14 secondSegmentRange:(struct _NSRange)arg15 pssh:(id)arg16 keyId:(id)arg17 playbackResolutionMos:(id)arg18;
@property(readonly, copy, nonatomic) NSString *keyId; // @synthesize keyId=_keyId;
@property(readonly, copy, nonatomic) NSString *pssh; // @synthesize pssh=_pssh;
@property(readonly, nonatomic) int predictiveMediaEndNumber; // @synthesize predictiveMediaEndNumber=_predictiveMediaEndNumber;
@property(readonly, copy, nonatomic) NSString *predictiveMediaUrlTemplate; // @synthesize predictiveMediaUrlTemplate=_predictiveMediaUrlTemplate;
@property(readonly, nonatomic) unsigned int timelineTimescale; // @synthesize timelineTimescale=_timelineTimescale;
@property(readonly, copy, nonatomic) FNFDashTrackEntryContainer *predictiveTimelineEntries; // @synthesize predictiveTimelineEntries=_predictiveTimelineEntries;
@property(readonly, copy, nonatomic) FNFDashTrackEntryContainer *timelineEntries; // @synthesize timelineEntries=_timelineEntries;
@property(readonly, copy, nonatomic) NSURL *mpdUrl; // @synthesize mpdUrl=_mpdUrl;
@property(readonly, nonatomic) unsigned int timelineDuration; // @synthesize timelineDuration=_timelineDuration;
@property(readonly, nonatomic) struct _NSRange secondSegmentRange; // @synthesize secondSegmentRange=_secondSegmentRange;
@property(readonly, nonatomic) struct _NSRange firstSegmentRange; // @synthesize firstSegmentRange=_firstSegmentRange;
@property(readonly, nonatomic) struct _NSRange initializationRange; // @synthesize initializationRange=_initializationRange;
@property(readonly, nonatomic) struct _NSRange indexRange; // @synthesize indexRange=_indexRange;
@property(readonly, copy, nonatomic) NSString *encodedInitData; // @synthesize encodedInitData=_encodedInitData;
@property(readonly, copy, nonatomic) NSString *audioChannelConfiguration; // @synthesize audioChannelConfiguration=_audioChannelConfiguration;
@property(readonly, copy, nonatomic) NSString *projection; // @synthesize projection=_projection;
@property(readonly, copy, nonatomic) NSURL *initializationUrl; // @synthesize initializationUrl=_initializationUrl;
@property(readonly, copy, nonatomic) NSString *playbackResolutionMos; // @synthesize playbackResolutionMos=_playbackResolutionMos;
@property(readonly, copy, nonatomic) NSArray *abrPolicyTags; // @synthesize abrPolicyTags=_abrPolicyTags;
@property(readonly, copy, nonatomic) NSString *codecs; // @synthesize codecs=_codecs;
@property(readonly, copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, copy, nonatomic) NSString *qualityLabel; // @synthesize qualityLabel=_qualityLabel;
@property(readonly, nonatomic) unsigned int bandwidth; // @synthesize bandwidth=_bandwidth;
@property(readonly, nonatomic) unsigned int height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned int width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSString *representationId; // @synthesize representationId=_representationId;
- (void).cxx_destruct;
- (_Bool)containsABRPolicyTag:(id)arg1;
- (id)initWithId:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 bandwidth:(unsigned int)arg4 abrPolicyTags:(id)arg5 qualityLabel:(id)arg6 mimeType:(id)arg7 codecs:(id)arg8 initializationUrl:(id)arg9 projection:(id)arg10 audioChannelConfiguration:(id)arg11 indexRange:(struct _NSRange)arg12 initializationRange:(struct _NSRange)arg13 firstSegmentRange:(struct _NSRange)arg14 secondSegmentRange:(struct _NSRange)arg15 timelineTimescale:(unsigned int)arg16 timelineDuration:(unsigned int)arg17 timelineEntries:(id)arg18 predictiveTimelineEntries:(id)arg19 encodedInitData:(id)arg20 mpdUrl:(id)arg21 mediaUrlTemplate:(id)arg22 predictiveMediaUrlTemplate:(id)arg23 predictiveMediaEndNumber:(int)arg24 pssh:(id)arg25 keyId:(id)arg26 playbackResolutionMos:(id)arg27;

@end

