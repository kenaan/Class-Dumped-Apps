//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, NSString, TTVideoEngineDynamicVideo, TTVideoEngineLiveVideo, TTVideoEngineSeekTS, TTVideoEngineURLInfoMap;

@interface TTVideoEngineInfoModel : NSObject
{
    NSArray *_supportedResolutionTypes;
    _Bool _enableSSL;
    _Bool _hasH265Codec;
    _Bool _hasH264Codec;
    NSString *_videoID;
    NSString *_userID;
    TTVideoEngineSeekTS *_seekTs;
    TTVideoEngineURLInfoMap *_videoURLInfoMap;
    TTVideoEngineDynamicVideo *_dynamicVideo;
    TTVideoEngineLiveVideo *_liveVideo;
    NSMutableArray *_bigThumbs;
    NSNumber *_videoDuration;
    NSString *_mediaType;
    NSString *_autoDefinition;
    long long _videoStatusCode;
    NSString *_validate;
    NSString *_videoID_ver2;
    NSString *_mediaType_ver2;
    NSString *_posterUrl_ver2;
    NSMutableArray *_videoInfoList_ver2;
    TTVideoEngineLiveVideo *_liveVideo_ver2;
    NSNumber *_videoDuration_ver2;
    long long _videoStatusCode_ver2;
    long long _totalCount_ver2;
    long long _apiVer;
    NSMutableArray *_codecList;
    double _createTimeInterval;
}

@property(nonatomic) double createTimeInterval; // @synthesize createTimeInterval=_createTimeInterval;
@property(retain, nonatomic) NSMutableArray *codecList; // @synthesize codecList=_codecList;
@property(nonatomic) long long apiVer; // @synthesize apiVer=_apiVer;
@property(nonatomic) _Bool hasH264Codec; // @synthesize hasH264Codec=_hasH264Codec;
@property(nonatomic) _Bool hasH265Codec; // @synthesize hasH265Codec=_hasH265Codec;
@property(nonatomic) long long totalCount_ver2; // @synthesize totalCount_ver2=_totalCount_ver2;
@property(nonatomic) long long videoStatusCode_ver2; // @synthesize videoStatusCode_ver2=_videoStatusCode_ver2;
@property(retain, nonatomic) NSNumber *videoDuration_ver2; // @synthesize videoDuration_ver2=_videoDuration_ver2;
@property(retain, nonatomic) TTVideoEngineLiveVideo *liveVideo_ver2; // @synthesize liveVideo_ver2=_liveVideo_ver2;
@property(retain, nonatomic) NSMutableArray *videoInfoList_ver2; // @synthesize videoInfoList_ver2=_videoInfoList_ver2;
@property(copy, nonatomic) NSString *posterUrl_ver2; // @synthesize posterUrl_ver2=_posterUrl_ver2;
@property(copy, nonatomic) NSString *mediaType_ver2; // @synthesize mediaType_ver2=_mediaType_ver2;
@property(copy, nonatomic) NSString *videoID_ver2; // @synthesize videoID_ver2=_videoID_ver2;
@property(nonatomic) _Bool enableSSL; // @synthesize enableSSL=_enableSSL;
@property(copy, nonatomic) NSString *validate; // @synthesize validate=_validate;
@property(nonatomic) long long videoStatusCode; // @synthesize videoStatusCode=_videoStatusCode;
@property(copy, nonatomic) NSString *autoDefinition; // @synthesize autoDefinition=_autoDefinition;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSNumber *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSMutableArray *bigThumbs; // @synthesize bigThumbs=_bigThumbs;
@property(retain, nonatomic) TTVideoEngineLiveVideo *liveVideo; // @synthesize liveVideo=_liveVideo;
@property(retain, nonatomic) TTVideoEngineDynamicVideo *dynamicVideo; // @synthesize dynamicVideo=_dynamicVideo;
@property(retain, nonatomic) TTVideoEngineURLInfoMap *videoURLInfoMap; // @synthesize videoURLInfoMap=_videoURLInfoMap;
@property(retain, nonatomic) TTVideoEngineSeekTS *seekTs; // @synthesize seekTs=_seekTs;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
- (void).cxx_destruct;
- (id)allUrlsWithResolution:(unsigned long long *)arg1 autoMode:(_Bool)arg2;
- (id)videoInfoForType:(unsigned long long *)arg1 autoMode:(_Bool)arg2;
- (_Bool)getValueBool:(long long)arg1;
- (id)getValueArray:(long long)arg1;
- (long long)getValueInt:(long long)arg1;
- (id)getValueStr:(long long)arg1;
- (id)getValueNumber:(long long)arg1;
- (id)getLiveVideo;
- (void)addIfNeededResolution:(unsigned long long)arg1 toArray:(id)arg2;
- (id)supportedResolutionTypes;
- (id)videoType;
- (id)codecTypes;
- (id)videoInfoForType:(unsigned long long)arg1 otherCondition:(id)arg2;
- (id)videoInfoForType:(unsigned long long)arg1;
- (long long)playLoadMinStepForType:(unsigned long long)arg1;
- (long long)playLoadMaxStepForType:(unsigned long long)arg1;
- (long long)preloadSizeForType:(unsigned long long)arg1;
- (id)definitionStrForType:(unsigned long long)arg1;
- (long long)videoSizeForType:(unsigned long long)arg1;
- (id)allURLWithDefinition:(unsigned long long)arg1 transformedURL:(_Bool)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;
@property(readonly, nonatomic) _Bool hasExpired;

@end

