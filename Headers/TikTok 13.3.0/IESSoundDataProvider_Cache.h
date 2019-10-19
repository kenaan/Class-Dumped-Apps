//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESSoundDataProvider-Protocol.h"
#import "IESSoundDataProviderDelegate-Protocol.h"

@class IESSoundDataProvider_File, IESSoundDataProvider_Http, IESSoundFileWriter, NSString, NSURL;
@protocol IESSoundDataProviderDelegate;

@interface IESSoundDataProvider_Cache : NSObject <IESSoundDataProviderDelegate, IESSoundDataProvider>
{
    id <IESSoundDataProviderDelegate> _delegate;
    IESSoundDataProvider_File *_fileDataProvider;
    IESSoundDataProvider_Http *_httpDataProvider;
    IESSoundFileWriter *_cacheDataWriter;
}

@property(retain, nonatomic) IESSoundFileWriter *cacheDataWriter; // @synthesize cacheDataWriter=_cacheDataWriter;
@property(retain, nonatomic) IESSoundDataProvider_Http *httpDataProvider; // @synthesize httpDataProvider=_httpDataProvider;
@property(retain, nonatomic) IESSoundDataProvider_File *fileDataProvider; // @synthesize fileDataProvider=_fileDataProvider;
@property(nonatomic) __weak id <IESSoundDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)soundEndEncountered;
- (void)removeCachedTempURL;
- (void)soundErrorEncountered:(id)arg1;
- (void)soundDataHasBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)soundDataIsPrepared;
- (void *)readBytes:(unsigned long long *)arg1;
- (_Bool)read:(unsigned long long)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)read;
- (void)close;
- (_Bool)open;
@property(readonly, nonatomic) NSString *contentType;
@property(readonly, nonatomic) _Bool isFinished;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) unsigned long long receivedLength;
@property(readonly, nonatomic) unsigned long long totalLength;
- (id)initWithURL:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

