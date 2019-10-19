//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface AWEAIMusicRecommendManager : NSObject
{
    _Bool _shouldUseSegmentedClipFrames;
    _Bool _isRequesting;
    _Bool _clipVideoModified;
    long long _maxNumForUpload;
    long long _frameSizeForUpload;
    unsigned long long _recordFrameType;
    NSArray *_recommedMusicList;
    unsigned long long _musicFetchType;
    NSString *_requestID;
    NSMutableArray *_recordFrames;
    NSString *_enterFrom;
    NSString *_currentTaskIdentifier;
    double _startFetchTime;
    NSString *_lastCreateId;
    NSMutableArray *_lastAssetsDurationArray;
    long long _lastClipRotateType;
    CDStruct_e83c9415 _lastClipRange;
}

+ (id)sharedInstance;
@property(nonatomic) CDStruct_e83c9415 lastClipRange; // @synthesize lastClipRange=_lastClipRange;
@property(nonatomic) long long lastClipRotateType; // @synthesize lastClipRotateType=_lastClipRotateType;
@property(nonatomic) _Bool clipVideoModified; // @synthesize clipVideoModified=_clipVideoModified;
@property(retain, nonatomic) NSMutableArray *lastAssetsDurationArray; // @synthesize lastAssetsDurationArray=_lastAssetsDurationArray;
@property(copy, nonatomic) NSString *lastCreateId; // @synthesize lastCreateId=_lastCreateId;
@property(nonatomic) double startFetchTime; // @synthesize startFetchTime=_startFetchTime;
@property(copy, nonatomic) NSString *currentTaskIdentifier; // @synthesize currentTaskIdentifier=_currentTaskIdentifier;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(retain, nonatomic) NSMutableArray *recordFrames; // @synthesize recordFrames=_recordFrames;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(nonatomic) unsigned long long musicFetchType; // @synthesize musicFetchType=_musicFetchType;
@property(copy, nonatomic) NSArray *recommedMusicList; // @synthesize recommedMusicList=_recommedMusicList;
@property(nonatomic) _Bool shouldUseSegmentedClipFrames; // @synthesize shouldUseSegmentedClipFrames=_shouldUseSegmentedClipFrames;
@property(nonatomic) unsigned long long recordFrameType; // @synthesize recordFrameType=_recordFrameType;
@property(nonatomic) long long frameSizeForUpload; // @synthesize frameSizeForUpload=_frameSizeForUpload;
@property(nonatomic) long long maxNumForUpload; // @synthesize maxNumForUpload=_maxNumForUpload;
- (void).cxx_destruct;
- (void)jarvisTrackWithEvent:(id)arg1 params:(id)arg2 publishModel:(id)arg3;
- (void)p_trackWithModel:(id)arg1 fetchDuration:(long long)arg2;
- (void)p_reset;
- (void)p_fetchAIRecommendDefaultDataWithCallback:(CDUnknownBlockType)arg1;
- (void)p_readCacheAndFetchRemoteDataWithModel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)p_fetchFramesWithModel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)p_ABOnAndProductEnable;
- (_Bool)p_ABTestOn;
- (_Bool)aiRecommendMusicEnabledForModel:(id)arg1;
- (void)fetchDefaultMusicListFromTOSWithURLGoup:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)fetchAIRecommendMusicWithPublishModel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)appendFrames:(id)arg1;
- (void)updateClipVideoStatusWithModel:(id)arg1 rotateType:(long long)arg2 range:(CDStruct_e83c9415)arg3;
- (void)setFrameRecordType:(unsigned long long)arg1;
- (_Bool)serviceOnWithModel:(id)arg1;
- (id)init;

@end

