//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CJIAPCoreParam : NSObject
{
    NSString *_appID;
    NSString *_merchantID;
    NSString *_uid;
    NSString *_tradeNo;
    NSString *_outTradeNo;
}

@property(copy, nonatomic) NSString *outTradeNo; // @synthesize outTradeNo=_outTradeNo;
@property(copy, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *merchantID; // @synthesize merchantID=_merchantID;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)fullOrderID;
- (id)initWith:(id)arg1;
- (id)initWith:(id)arg1 merchantID:(id)arg2 uid:(id)arg3 tradeNo:(id)arg4 outTradeNo:(id)arg5;

@end

