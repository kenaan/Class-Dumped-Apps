//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface IESSoundFileWriter : NSObject
{
    struct __CFWriteStream *_writeStream;
    NSURL *_fileURL;
}

@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (void)close;
- (_Bool)write:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1;
- (void)dealloc;

@end

