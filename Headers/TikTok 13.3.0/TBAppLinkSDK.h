//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TBAppLinkSDK : NSObject
{
    NSString *_appKey;
    NSString *_appSecret;
    NSString *_backURL;
    NSString *_pid;
    NSString *_type;
    NSString *_TTID;
    NSString *_tag;
    NSString *_utdid;
    NSString *_source;
    unsigned long long _jumpFailedMode;
    CDUnknownBlockType _createSignBlock;
    CDUnknownBlockType _authBlock;
    NSString *_appName;
    NSString *_packageName;
    NSString *_redirect_url;
    CDUnknownBlockType _jumpTaobaoFailedBlock;
}

+ (void)setupUIWebViewForAppLinkJsSDK;
+ (id)initWithAppkey:(id)arg1 BackURL:(id)arg2 pid:(id)arg3 type:(id)arg4;
+ (id)initWithAppkey:(id)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType jumpTaobaoFailedBlock; // @synthesize jumpTaobaoFailedBlock=_jumpTaobaoFailedBlock;
@property(retain, nonatomic) NSString *redirect_url; // @synthesize redirect_url=_redirect_url;
@property(retain, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) CDUnknownBlockType authBlock; // @synthesize authBlock=_authBlock;
@property(copy, nonatomic) CDUnknownBlockType createSignBlock; // @synthesize createSignBlock=_createSignBlock;
@property(nonatomic) unsigned long long jumpFailedMode; // @synthesize jumpFailedMode=_jumpFailedMode;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *TTID; // @synthesize TTID=_TTID;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *backURL; // @synthesize backURL=_backURL;
@property(retain, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (id)assembledBaiChuanParamWithURLString:(id)arg1 param:(id)arg2;
- (void)generateSignForParam:(id)arg1;
- (id)assembledURLWithBaseURL:(id)arg1 Action:(id)arg2 Module:(id)arg3 Param:(id)arg4;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)openURL:(id)arg1;
- (id)jumpWithParam:(id)arg1 URLString:(id)arg2;
- (id)doAuth:(id)arg1 Complete:(CDUnknownBlockType)arg2;
- (id)jumpNative:(id)arg1;
- (id)jumpTBURI:(id)arg1;
- (id)jumpDetail:(id)arg1;
- (id)jumpShop:(id)arg1;
- (void)setTTID:(id)arg1 utdid:(id)arg2 tag:(id)arg3 source:(id)arg4;
- (void)setWebView:(id)arg1 withDelegate:(id)arg2;
- (id)init;

@end

