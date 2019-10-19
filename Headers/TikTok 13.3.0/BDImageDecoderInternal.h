//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface BDImageDecoderInternal : NSObject
{
    _Bool _decodeForDisplay;
    _Bool _shouldScaleDown;
    _Bool _isDidScaleDown;
    _Bool _enableMultiThreadHeicDecoder;
    unsigned long long _codeType;
    double _scale;
    long long _imageOrientation;
    NSData *_data;
    NSString *_filePath;
}

+ (_Bool)supportProgressDecode:(id)arg1;
@property(nonatomic) _Bool enableMultiThreadHeicDecoder; // @synthesize enableMultiThreadHeicDecoder=_enableMultiThreadHeicDecoder;
@property(nonatomic) _Bool isDidScaleDown; // @synthesize isDidScaleDown=_isDidScaleDown;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool shouldScaleDown; // @synthesize shouldScaleDown=_shouldScaleDown;
@property(nonatomic) _Bool decodeForDisplay; // @synthesize decodeForDisplay=_decodeForDisplay;
@property(nonatomic) unsigned long long codeType; // @synthesize codeType=_codeType;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long loopCount;
@property(readonly, nonatomic) unsigned long long imageCount;
- (double)frameDelayAtIndex:(unsigned long long)arg1;
- (struct CGImage *)copyImageAtIndex:(unsigned long long)arg1;
- (id)initWithContentOfFile:(id)arg1;
- (id)initWithData:(id)arg1;

@end

