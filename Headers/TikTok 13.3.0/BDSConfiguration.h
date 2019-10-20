//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BDSNetworkProtocol, BDSTrackProtocol;

@interface BDSConfiguration : NSObject
{
    _Bool _isDebugEnvironment;
    _Bool _enableRecommend;
    CDUnknownBlockType _bds_serverHostBlcok;
    CDUnknownBlockType _bds_networkType;
    CDUnknownBlockType _bds_deviceID;
    CDUnknownBlockType _bds_installID;
    id <BDSNetworkProtocol> _bds_networkProxy;
    id <BDSTrackProtocol> _bds_trackProxy;
    NSString *_bds_appID;
    NSString *_bds_channel;
    NSString *_bds_deviceType;
    NSString *_bds_versionCode;
}

@property _Bool enableRecommend; // @synthesize enableRecommend=_enableRecommend;
@property(nonatomic) _Bool isDebugEnvironment; // @synthesize isDebugEnvironment=_isDebugEnvironment;
@property(copy, nonatomic) NSString *bds_versionCode; // @synthesize bds_versionCode=_bds_versionCode;
@property(copy, nonatomic) NSString *bds_deviceType; // @synthesize bds_deviceType=_bds_deviceType;
@property(copy, nonatomic) NSString *bds_channel; // @synthesize bds_channel=_bds_channel;
@property(copy, nonatomic) NSString *bds_appID; // @synthesize bds_appID=_bds_appID;
@property(retain, nonatomic) id <BDSTrackProtocol> bds_trackProxy; // @synthesize bds_trackProxy=_bds_trackProxy;
@property(retain, nonatomic) id <BDSNetworkProtocol> bds_networkProxy; // @synthesize bds_networkProxy=_bds_networkProxy;
@property(copy, nonatomic) CDUnknownBlockType bds_installID; // @synthesize bds_installID=_bds_installID;
@property(copy, nonatomic) CDUnknownBlockType bds_deviceID; // @synthesize bds_deviceID=_bds_deviceID;
@property(copy, nonatomic) CDUnknownBlockType bds_networkType; // @synthesize bds_networkType=_bds_networkType;
@property(copy, nonatomic) CDUnknownBlockType bds_serverHostBlcok; // @synthesize bds_serverHostBlcok=_bds_serverHostBlcok;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)init;

@end
