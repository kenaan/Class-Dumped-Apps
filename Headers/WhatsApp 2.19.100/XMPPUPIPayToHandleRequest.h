//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPRequest.h>

@interface XMPPUPIPayToHandleRequest : XMPPRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithCurrency:(id)arg1 amountString:(id)arg2 credentialId:(id)arg3 deviceId:(id)arg4 encryptedMpin:(id)arg5 receiverHandle:(id)arg6 senderHandle:(id)arg7 clTransactionId:(id)arg8 merchantCode:(id)arg9 refId:(id)arg10 refUrl:(id)arg11 note:(id)arg12 payeeName:(id)arg13 completion:(CDUnknownBlockType)arg14;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

