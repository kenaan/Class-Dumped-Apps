//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAMapSerializable.h"

@interface SCANetworkTransfer : SCAMapSerializable
{
}

- (void)setResponseSizeBytes:(double)arg1;
- (void)setRequestSizeBytes:(double)arg1;
- (void)setProtocol:(id)arg1;
- (void)setNumberOfConcurrentRequests:(long long)arg1;
- (void)setNetworkTransferMs:(long long)arg1;
- (void)setNetworkStartTransferBytePerSec:(long long)arg1;
- (void)setNetworkOperation:(long long)arg1;
- (void)setNetworkEndTransferBytePerSec:(long long)arg1;
- (void)setFirstBytesLength:(long long)arg1;
- (void)setFirstBytesLatency:(long long)arg1;
- (void)setDownloadManagerLatencyMs:(long long)arg1;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

