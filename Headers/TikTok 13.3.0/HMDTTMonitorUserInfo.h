//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface HMDTTMonitorUserInfo : NSObject
{
    _Bool _enableBackgroundUpload;
    NSString *_appID;
    NSString *_hostAppID;
    NSString *_deviceID;
    NSString *_userID;
    NSString *_channel;
    NSString *_sdkVersion;
    CDUnknownBlockType _transformBlock;
    NSDictionary *_commonParams;
    NSArray *_configHostArray;
    NSString *_performanceUploadHost;
    unsigned long long _flushCount;
}

@property(nonatomic) _Bool enableBackgroundUpload; // @synthesize enableBackgroundUpload=_enableBackgroundUpload;
@property(nonatomic) unsigned long long flushCount; // @synthesize flushCount=_flushCount;
@property(copy, nonatomic) NSString *performanceUploadHost; // @synthesize performanceUploadHost=_performanceUploadHost;
@property(copy, nonatomic) NSArray *configHostArray; // @synthesize configHostArray=_configHostArray;
@property(copy, nonatomic) NSDictionary *commonParams; // @synthesize commonParams=_commonParams;
@property(copy, nonatomic) CDUnknownBlockType transformBlock; // @synthesize transformBlock=_transformBlock;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *hostAppID; // @synthesize hostAppID=_hostAppID;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (id)initWithAppID:(id)arg1;

@end

