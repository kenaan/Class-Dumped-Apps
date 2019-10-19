//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessageContent.h"

#import "NSCopying-Protocol.h"

@class AWEURLModel, NSString;

@interface AWEIMEncryptedVideoContent : AWEIMMessageContent <NSCopying>
{
    _Bool _fromGallery;
    _Bool _massMsg;
    NSString *_videoTKey;
    NSString *_videoSKey;
    NSString *_videoMD5;
    NSString *_posterOid;
    NSString *_posterSKey;
    NSString *_posterMD5;
    long long _coverWidth;
    long long _coverHeight;
    NSString *_originPosterMD5;
    NSString *_videoText;
    NSString *_originVideoMD5;
    NSString *_firstFrameURI;
    long long _postType;
}

@property(nonatomic) _Bool massMsg; // @synthesize massMsg=_massMsg;
@property(nonatomic) long long postType; // @synthesize postType=_postType;
@property(copy, nonatomic) NSString *firstFrameURI; // @synthesize firstFrameURI=_firstFrameURI;
@property(nonatomic) _Bool fromGallery; // @synthesize fromGallery=_fromGallery;
@property(copy, nonatomic) NSString *originVideoMD5; // @synthesize originVideoMD5=_originVideoMD5;
@property(copy, nonatomic) NSString *videoText; // @synthesize videoText=_videoText;
@property(copy, nonatomic) NSString *originPosterMD5; // @synthesize originPosterMD5=_originPosterMD5;
@property(nonatomic) long long coverHeight; // @synthesize coverHeight=_coverHeight;
@property(nonatomic) long long coverWidth; // @synthesize coverWidth=_coverWidth;
@property(copy, nonatomic) NSString *posterMD5; // @synthesize posterMD5=_posterMD5;
@property(copy, nonatomic) NSString *posterSKey; // @synthesize posterSKey=_posterSKey;
@property(copy, nonatomic) NSString *posterOid; // @synthesize posterOid=_posterOid;
@property(copy, nonatomic) NSString *videoMD5; // @synthesize videoMD5=_videoMD5;
@property(copy, nonatomic) NSString *videoSKey; // @synthesize videoSKey=_videoSKey;
@property(copy, nonatomic) NSString *videoTKey; // @synthesize videoTKey=_videoTKey;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateMessageContentWithUploadedFileResponse:(id)arg1 fileType:(int)arg2;
- (void)updateMessageContentWithAttachmentMD5:(id)arg1 fileType:(int)arg2;
@property(readonly, nonatomic) AWEURLModel *posterResourceUrl;
- (id)contentDictionary;
- (id)initWithDictionary:(id)arg1;

@end

