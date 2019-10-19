//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVMDLiOSCancelable-Protocol.h"

@class NSString;
@protocol AVMDLiOSDNSProtocol;

@interface AVMDLiOSDNSParserAction : NSObject <AVMDLiOSCancelable>
{
    _Bool _isUserCancel;
    _Bool _mainFinished;
    _Bool _backupFinished;
    CDUnknownBlockType _outResult;
    NSString *_hostname;
    double _waitSecond;
    long long _backupType;
    id <AVMDLiOSDNSProtocol> _mainParser;
    id <AVMDLiOSDNSProtocol> _backParser;
    CDUnknownBlockType _result;
}

@property _Bool backupFinished; // @synthesize backupFinished=_backupFinished;
@property _Bool mainFinished; // @synthesize mainFinished=_mainFinished;
@property(copy, nonatomic) CDUnknownBlockType result; // @synthesize result=_result;
@property(retain, nonatomic) id <AVMDLiOSDNSProtocol> backParser; // @synthesize backParser=_backParser;
@property(retain, nonatomic) id <AVMDLiOSDNSProtocol> mainParser; // @synthesize mainParser=_mainParser;
@property(nonatomic) long long backupType; // @synthesize backupType=_backupType;
@property(nonatomic) double waitSecond; // @synthesize waitSecond=_waitSecond;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(nonatomic) _Bool isUserCancel; // @synthesize isUserCancel=_isUserCancel;
@property(copy, nonatomic) CDUnknownBlockType outResult; // @synthesize outResult=_outResult;
- (void).cxx_destruct;
- (id)_errorDomain:(long long)arg1;
- (id)_parserWithType:(long long)arg1;
- (id)_mapArray:(id)arg1 map:(CDUnknownBlockType)arg2;
- (id)_getItemInfo:(id)arg1 info:(id)arg2;
- (void)_dealWithResult:(id)arg1 error:(id)arg2;
- (void)_startBackupParser;
- (void)start:(CDUnknownBlockType)arg1;
- (void)configMainParseType:(long long)arg1 backup:(long long)arg2 wait:(double)arg3;
- (_Bool)cancelled;
- (void)cancel;
- (id)host;
- (id)initWithHost:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

