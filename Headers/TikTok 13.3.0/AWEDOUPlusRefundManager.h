//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEDOUPlusRefundInfoModel;

@interface AWEDOUPlusRefundManager : NSObject
{
    _Bool _handleNotification;
    AWEDOUPlusRefundInfoModel *_refundInfoModel;
}

+ (id)sharedInstance;
+ (void)load;
@property(nonatomic) _Bool handleNotification; // @synthesize handleNotification=_handleNotification;
- (void).cxx_destruct;
@property(retain, nonatomic) AWEDOUPlusRefundInfoModel *refundInfoModel; // @synthesize refundInfoModel=_refundInfoModel;
- (void)handleResult:(id)arg1 error:(id)arg2;
- (void)fetchRefundInfo;
- (void)postNofiticationForFetchResponse:(id)arg1 errorCode:(long long)arg2;
- (void)handleFetchRefundInfoNotification;
- (void)addNotifications;
- (id)init;
- (void)dealloc;

@end

