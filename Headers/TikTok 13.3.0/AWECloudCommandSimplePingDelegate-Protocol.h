//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWECloudCommandNetDiagnoseSimplePing, NSData, NSError;

@protocol AWECloudCommandSimplePingDelegate <NSObject>

@optional
- (void)simplePing:(AWECloudCommandNetDiagnoseSimplePing *)arg1 didReceiveUnexpectedPacket:(NSData *)arg2;
- (void)simplePing:(AWECloudCommandNetDiagnoseSimplePing *)arg1 didReceivePingResponsePacket:(NSData *)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(AWECloudCommandNetDiagnoseSimplePing *)arg1 didFailToSendPacket:(NSData *)arg2 sequenceNumber:(unsigned short)arg3 error:(NSError *)arg4;
- (void)simplePing:(AWECloudCommandNetDiagnoseSimplePing *)arg1 didSendPacket:(NSData *)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(AWECloudCommandNetDiagnoseSimplePing *)arg1 didFailWithError:(NSError *)arg2;
- (void)simplePing:(AWECloudCommandNetDiagnoseSimplePing *)arg1 didStartWithAddress:(NSData *)arg2;
@end

