//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDA4AConnection, IDA4APacket, NSError;

@protocol IDA4AConnectionDelegate <NSObject>
- (void)connectionDidCloseUnderlyingStreams:(IDA4AConnection *)arg1;
- (void)connection:(IDA4AConnection *)arg1 errorOccured:(NSError *)arg2;
- (void)connection:(IDA4AConnection *)arg1 didReceivePacket:(IDA4APacket *)arg2;

@optional
- (void)connection:(IDA4AConnection *)arg1 didSendBytes:(long long)arg2;
- (void)connection:(IDA4AConnection *)arg1 willSendBytes:(long long)arg2;
@end

