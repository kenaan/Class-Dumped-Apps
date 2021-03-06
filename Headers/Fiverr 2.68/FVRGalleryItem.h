//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;

@interface FVRGalleryItem : NSObject
{
    long long _type;
    NSURL *_imageUrl;
    UIImage *_image;
    NSURL *_videoUrl;
    NSURL *_webUrl;
    NSString *_fileName;
    NSURL *_previewURL;
    NSURL *_downloadURL;
    UIImage *_placeholderImage;
    long long _fileSize;
}

@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(retain, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSURL *webUrl; // @synthesize webUrl=_webUrl;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool isDownloadable;
- (id)initWithWebUrl:(id)arg1 andFileName:(id)arg2;
- (id)initWithAudioUrl:(id)arg1 andFileName:(id)arg2;
- (id)initWithVideoUrl:(id)arg1 previewUrl:(id)arg2 downloadUrl:(id)arg3 fileName:(id)arg4;
- (id)initWithVideoUrl:(id)arg1 previewUrl:(id)arg2 fileName:(id)arg3;
- (id)initWithImageUrl:(id)arg1;
- (id)initWithLocalImage:(id)arg1 imageName:(id)arg2;
- (id)initWithPreviewURL:(id)arg1 downloadURL:(id)arg2 fileName:(id)arg3 type:(long long)arg4 placeholderImage:(id)arg5;

@end

