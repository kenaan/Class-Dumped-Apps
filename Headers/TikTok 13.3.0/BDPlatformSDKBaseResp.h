//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDPlatformSDKBaseReq, NSString;

@interface BDPlatformSDKBaseResp : NSObject
{
    long long _errCode;
    NSString *_errString;
    NSString *_lang;
    NSString *_country;
    NSString *_responseId;
    BDPlatformSDKBaseReq *_originalReq;
}

@property(retain, nonatomic) BDPlatformSDKBaseReq *originalReq; // @synthesize originalReq=_originalReq;
@property(copy, nonatomic) NSString *responseId; // @synthesize responseId=_responseId;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(copy, nonatomic) NSString *errString; // @synthesize errString=_errString;
@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;
- (void).cxx_destruct;
- (id)init;

@end

