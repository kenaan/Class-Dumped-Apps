//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TTVideoEngineLocalServerTaskInfo : NSObject
{
    NSString *_key;
    NSString *_videoId;
    NSString *_localFilePath;
    long long _mediaSize;
    long long _cacheSizeFromZero;
    unsigned long long _resolution;
    NSString *_decryptionKey;
}

@property(copy, nonatomic) NSString *decryptionKey; // @synthesize decryptionKey=_decryptionKey;
@property(nonatomic) unsigned long long resolution; // @synthesize resolution=_resolution;
@property(nonatomic) long long cacheSizeFromZero; // @synthesize cacheSizeFromZero=_cacheSizeFromZero;
@property(nonatomic) long long mediaSize; // @synthesize mediaSize=_mediaSize;
@property(copy, nonatomic) NSString *localFilePath; // @synthesize localFilePath=_localFilePath;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end

