//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface TTPushConfig : NSObject
{
    int _appId;
    int _fpid;
    int _appVersion;
    int _platform;
    int _network;
    long long _deviceId;
    long long _installId;
    long long _webId;
    NSString *_appKey;
    NSString *_sessionId;
    NSDictionary *_customParams;
    NSArray *_urls;
}

@property(copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSDictionary *customParams; // @synthesize customParams=_customParams;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(nonatomic) int network; // @synthesize network=_network;
@property(nonatomic) int platform; // @synthesize platform=_platform;
@property(nonatomic) long long webId; // @synthesize webId=_webId;
@property(nonatomic) long long installId; // @synthesize installId=_installId;
@property(nonatomic) int appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) long long deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) int fpid; // @synthesize fpid=_fpid;
@property(nonatomic) int appId; // @synthesize appId=_appId;
- (void).cxx_destruct;

@end

