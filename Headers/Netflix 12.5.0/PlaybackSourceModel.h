//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFUIPlayerFoundation/NFUIPlatformPlaybackParams.h>

@class NFUIDownloadContext, NSNumber, NSString;

@interface PlaybackSourceModel : NFUIPlatformPlaybackParams
{
    _Bool _uiWillAutoPlay;
    NSNumber *_trackId;
    NSString *_uiLabel;
    NSNumber *_videoId;
    NSString *_videoURLString;
    NSNumber *_characterId;
    NSString *_requestId;
    NSString *_listId;
    NSNumber *_row;
    NSNumber *_rank;
    NSString *_referenceId;
    NSString *_location;
    NSString *_verticalBoxArtId;
    NSString *_impressionToken;
    NSNumber *_userInteractionSessionId;
    NSString *_lolomoId;
    NFUIDownloadContext *_downloadContext;
    NSString *_ppdContext;
    NSString *_collectionId;
}

@property(copy, nonatomic) NSString *collectionId; // @synthesize collectionId=_collectionId;
@property(copy, nonatomic) NSString *ppdContext; // @synthesize ppdContext=_ppdContext;
@property(retain, nonatomic) NFUIDownloadContext *downloadContext; // @synthesize downloadContext=_downloadContext;
@property(copy, nonatomic) NSString *lolomoId; // @synthesize lolomoId=_lolomoId;
@property(copy, nonatomic) NSNumber *userInteractionSessionId; // @synthesize userInteractionSessionId=_userInteractionSessionId;
@property(copy, nonatomic) NSString *impressionToken; // @synthesize impressionToken=_impressionToken;
@property(copy, nonatomic) NSString *verticalBoxArtId; // @synthesize verticalBoxArtId=_verticalBoxArtId;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *referenceId; // @synthesize referenceId=_referenceId;
@property(copy, nonatomic) NSNumber *rank; // @synthesize rank=_rank;
@property(copy, nonatomic) NSNumber *row; // @synthesize row=_row;
@property(copy, nonatomic) NSString *listId; // @synthesize listId=_listId;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSNumber *characterId; // @synthesize characterId=_characterId;
@property(copy, nonatomic) NSString *videoURLString; // @synthesize videoURLString=_videoURLString;
@property(copy, nonatomic) NSNumber *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *uiLabel; // @synthesize uiLabel=_uiLabel;
@property(nonatomic) _Bool uiWillAutoPlay; // @synthesize uiWillAutoPlay=_uiWillAutoPlay;
@property(copy, nonatomic) NSNumber *trackId; // @synthesize trackId=_trackId;
- (void).cxx_destruct;
- (id)uiPlayContext;
- (id)offlineTransactionId;
- (_Bool)isDownloaded;
- (id)valueForUndefinedKey:(id)arg1;
- (id)propertyAsString:(id)arg1;
- (id)playContextAsDictionary;
- (id)dictionaryRepresentation;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end

