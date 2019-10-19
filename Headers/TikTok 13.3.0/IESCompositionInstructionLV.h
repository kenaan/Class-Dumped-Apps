//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSFilterInterface.h"

#import "AVVideoCompositionInstruction-Protocol.h"

@class HTSGLFilterTwoInput, IESLVFiltersManager, IESLVTrackInfosManager, IESMediaInfo, NSArray, NSString;
@protocol HTSGLInput;

@interface IESCompositionInstructionLV : HTSFilterInterface <AVVideoCompositionInstruction>
{
    _Bool _enablePostProcessing;
    _Bool _containsTweening;
    int _passthroughTrackID;
    int _trackId;
    NSArray *_requiredSourceTrackIDs;
    IESMediaInfo *_mediaInfo;
    id <HTSGLInput> _outputFilter;
    HTSGLFilterTwoInput *_mixFilter;
    HTSGLFilterTwoInput *_picMovieFilter;
    IESLVFiltersManager *_filtersManager;
    IESLVTrackInfosManager *_tracksManager;
    CDUnknownBlockType _easingFunction;
    struct CGSize _outputSize;
    CDStruct_1b6d18a9 _lastFrameTime;
    CDStruct_e83c9415 _timeRange;
}

@property(nonatomic) CDStruct_1b6d18a9 lastFrameTime; // @synthesize lastFrameTime=_lastFrameTime;
@property(copy, nonatomic) CDUnknownBlockType easingFunction; // @synthesize easingFunction=_easingFunction;
@property(retain, nonatomic) IESLVTrackInfosManager *tracksManager; // @synthesize tracksManager=_tracksManager;
@property(retain, nonatomic) IESLVFiltersManager *filtersManager; // @synthesize filtersManager=_filtersManager;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(retain, nonatomic) HTSGLFilterTwoInput *picMovieFilter; // @synthesize picMovieFilter=_picMovieFilter;
@property(retain, nonatomic) HTSGLFilterTwoInput *mixFilter; // @synthesize mixFilter=_mixFilter;
@property(retain, nonatomic) id <HTSGLInput> outputFilter; // @synthesize outputFilter=_outputFilter;
@property(retain, nonatomic) IESMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(nonatomic) int trackId; // @synthesize trackId=_trackId;
@property(readonly, nonatomic) int passthroughTrackID; // @synthesize passthroughTrackID=_passthroughTrackID;
@property(readonly, nonatomic) NSArray *requiredSourceTrackIDs; // @synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs;
@property(readonly, nonatomic) _Bool containsTweening; // @synthesize containsTweening=_containsTweening;
@property(readonly, nonatomic) _Bool enablePostProcessing; // @synthesize enablePostProcessing=_enablePostProcessing;
- (void).cxx_destruct;
- (void)dealloc;
- (void)renderWith:(id)arg1 dstPixelBuffer:(struct __CVBuffer *)arg2;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 inputInfos:(id)arg2 mediaInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

