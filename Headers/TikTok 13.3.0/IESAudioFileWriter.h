//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IESAudioFileWriter : NSObject
{
    _Bool _writing;
    struct OpaqueExtAudioFile *_audioFile;
    struct AudioStreamBasicDescription _audioDescription;
    NSString *_path;
}

+ (_Bool)AACEncodingAvailable;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)finishWriting;
- (_Bool)beginWritingToFileAtPath:(id)arg1 fileType:(unsigned int)arg2 bitDepth:(unsigned int)arg3 channels:(unsigned int)arg4 error:(id *)arg5;
- (_Bool)beginWritingToFileAtPath:(id)arg1 fileType:(unsigned int)arg2 bitDepth:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)beginWritingToFileAtPath:(id)arg1 fileType:(unsigned int)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithAudioDescription:(struct AudioStreamBasicDescription)arg1;

@end

