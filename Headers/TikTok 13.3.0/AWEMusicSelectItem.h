//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEMusicModel, NSArray, NSURL;

@interface AWEMusicSelectItem : NSObject
{
    _Bool _isRecommended;
    _Bool _fromLibrary;
    AWEMusicModel *_musicModel;
    long long _status;
    double _startTime;
    unsigned long long _startLyricIndex;
    double _songTimeLength;
    NSArray *_lyrics;
    NSURL *_localLyricURL;
}

+ (id)musicItemForModel:(id)arg1 musicStartTime:(double)arg2;
+ (id)itemsForMusicList:(id)arg1 currentPublishModel:(id)arg2;
@property(retain, nonatomic) NSURL *localLyricURL; // @synthesize localLyricURL=_localLyricURL;
@property(retain, nonatomic) NSArray *lyrics; // @synthesize lyrics=_lyrics;
@property(readonly, nonatomic) double songTimeLength; // @synthesize songTimeLength=_songTimeLength;
@property(readonly, nonatomic) unsigned long long startLyricIndex; // @synthesize startLyricIndex=_startLyricIndex;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool fromLibrary; // @synthesize fromLibrary=_fromLibrary;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) AWEMusicModel *musicModel; // @synthesize musicModel=_musicModel;
@property(nonatomic) _Bool isRecommended; // @synthesize isRecommended=_isRecommended;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasLyric;
- (id)init;

@end

