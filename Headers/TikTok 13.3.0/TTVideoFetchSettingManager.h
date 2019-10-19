//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TTVideoFetchSettingManager : NSObject
{
    _Bool _debug;
    NSDictionary *_uriParameter;
}

+ (id)shareInstance;
@property(nonatomic) _Bool debug; // @synthesize debug=_debug;
@property(copy, nonatomic) NSDictionary *uriParameter; // @synthesize uriParameter=_uriParameter;
- (void).cxx_destruct;
- (void)setIsDebug:(_Bool)arg1;
- (void)fetchSettingInfoisForce:(_Bool)arg1;
- (void)fetchSettingInfoIfNeeded;
- (void)applicationWillEnterForeground;
- (void)dealNetworkCallBack:(id)arg1 withError:(id)arg2;
- (void)startFetchSettingInfo;
- (void)loadFetchConfig:(id)arg1;
- (id)init;

@end

