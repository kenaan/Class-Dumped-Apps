//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TTVideoEngineLocalServerConfigure : NSObject
{
    _Bool _enableExternDNS;
    _Bool _enableSoccketReuse;
    long long _maxCacheSize;
    long long _openTimeOut;
    long long _rwTimeOut;
    long long _tryCount;
    long long _preloadParallelNum;
    NSString *_cachDirectory;
}

+ (id)configure;
@property(copy, nonatomic) NSString *cachDirectory; // @synthesize cachDirectory=_cachDirectory;
@property(nonatomic) _Bool enableSoccketReuse; // @synthesize enableSoccketReuse=_enableSoccketReuse;
@property(nonatomic) _Bool enableExternDNS; // @synthesize enableExternDNS=_enableExternDNS;
@property(nonatomic) long long preloadParallelNum; // @synthesize preloadParallelNum=_preloadParallelNum;
@property(nonatomic) long long tryCount; // @synthesize tryCount=_tryCount;
@property(nonatomic) long long rwTimeOut; // @synthesize rwTimeOut=_rwTimeOut;
@property(nonatomic) long long openTimeOut; // @synthesize openTimeOut=_openTimeOut;
@property(nonatomic) long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
- (void).cxx_destruct;

@end

