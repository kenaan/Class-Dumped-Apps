//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentRequest.h"

@class NSString;

@interface WAPaymentUPICollectRequestSendRequest : WAPaymentRequest
{
    NSString *_currency;
    long long _amount_1000;
    NSString *_deviceId;
    NSString *_encryptedMpin;
    NSString *_receiverHandle;
    NSString *_senderHandle;
    NSString *_clTransactionId;
    NSString *_credentialId;
    NSString *_note;
}

+ (id)identifierForCLTransactionId:(id)arg1;
+ (long long)version;
@property(readonly, copy, nonatomic) NSString *note; // @synthesize note=_note;
@property(readonly, copy, nonatomic) NSString *credentialId; // @synthesize credentialId=_credentialId;
@property(readonly, copy, nonatomic) NSString *clTransactionId; // @synthesize clTransactionId=_clTransactionId;
@property(readonly, copy, nonatomic) NSString *senderHandle; // @synthesize senderHandle=_senderHandle;
@property(readonly, copy, nonatomic) NSString *receiverHandle; // @synthesize receiverHandle=_receiverHandle;
@property(readonly, copy, nonatomic) NSString *encryptedMpin; // @synthesize encryptedMpin=_encryptedMpin;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, nonatomic) long long amount_1000; // @synthesize amount_1000=_amount_1000;
@property(readonly, copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
- (void).cxx_destruct;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCurrency:(id)arg1 amount_1000:(long long)arg2 deviceId:(id)arg3 receiverHandle:(id)arg4 senderHandle:(id)arg5 clTransactionId:(id)arg6 credentialId:(id)arg7 note:(id)arg8;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

