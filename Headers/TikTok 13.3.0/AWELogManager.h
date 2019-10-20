//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AWELogManager : NSObject
{
    _Bool _alogEnabled;
    NSMutableDictionary *_loggers;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool alogEnabled; // @synthesize alogEnabled=_alogEnabled;
@property(retain, nonatomic) NSMutableDictionary *loggers; // @synthesize loggers=_loggers;
- (void).cxx_destruct;
- (void)uploadAlogFromDate:(id)arg1 scene:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setupAlog;
- (_Bool)enableAlog;
- (void)setEnableAlog:(_Bool)arg1;
- (id)_logPathForContext:(long long)arg1;
- (id)sortedLogFilePathsForCotext:(long long)arg1;
- (void)loadLogInContext:(long long)arg1 maxLength:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadLogsWithMaxLength:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setup;
- (id)init;

@end
