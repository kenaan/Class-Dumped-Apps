//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TTAVPreloaderConfig : NSObject
{
    _Bool _autoManageFileEnable;
    _Bool _isTestSpeedEnable;
    NSString *_cachePath;
    long long _maxConcurrentCount;
    long long _maxTaskCount;
    unsigned long long _maxCacheSize;
}

+ (id)defaultConfig;
@property(nonatomic) _Bool isTestSpeedEnable; // @synthesize isTestSpeedEnable=_isTestSpeedEnable;
@property(nonatomic) unsigned long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
@property(nonatomic) _Bool autoManageFileEnable; // @synthesize autoManageFileEnable=_autoManageFileEnable;
@property(nonatomic) long long maxTaskCount; // @synthesize maxTaskCount=_maxTaskCount;
@property(nonatomic) long long maxConcurrentCount; // @synthesize maxConcurrentCount=_maxConcurrentCount;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void).cxx_destruct;

@end

