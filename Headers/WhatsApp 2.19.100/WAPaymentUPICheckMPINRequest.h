//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentRequest.h"

@class NSString, WAMessageID, WAUserJID;

@interface WAPaymentUPICheckMPINRequest : WAPaymentRequest
{
    NSString *_bankCode;
    NSString *_credentialId;
    NSString *_providerType;
    WAMessageID *_referenceMessageID;
    NSString *_transactionId;
    NSString *_amount;
    NSString *_collectRequestId;
    NSString *_deviceId;
    NSString *_mpin;
    NSString *_receiverFBHandleId;
    NSString *_receiverHandle;
    WAUserJID *_receiverJID;
    NSString *_senderHandle;
    NSString *_senderFBHandleId;
}

+ (id)identifier;
@property(readonly, copy, nonatomic) NSString *senderFBHandleId; // @synthesize senderFBHandleId=_senderFBHandleId;
@property(readonly, copy, nonatomic) NSString *senderHandle; // @synthesize senderHandle=_senderHandle;
@property(readonly, nonatomic) WAUserJID *receiverJID; // @synthesize receiverJID=_receiverJID;
@property(readonly, copy, nonatomic) NSString *receiverHandle; // @synthesize receiverHandle=_receiverHandle;
@property(readonly, copy, nonatomic) NSString *receiverFBHandleId; // @synthesize receiverFBHandleId=_receiverFBHandleId;
@property(readonly, copy, nonatomic) NSString *mpin; // @synthesize mpin=_mpin;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, copy, nonatomic) NSString *collectRequestId; // @synthesize collectRequestId=_collectRequestId;
@property(readonly, copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(readonly, copy, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(readonly, copy, nonatomic) WAMessageID *referenceMessageID; // @synthesize referenceMessageID=_referenceMessageID;
@property(readonly, copy, nonatomic) NSString *providerType; // @synthesize providerType=_providerType;
@property(readonly, copy, nonatomic) NSString *credentialId; // @synthesize credentialId=_credentialId;
@property(readonly, copy, nonatomic) NSString *bankCode; // @synthesize bankCode=_bankCode;
- (void).cxx_destruct;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAmount:(id)arg1 bankCode:(id)arg2 collectRequestId:(id)arg3 credentialId:(id)arg4 deviceId:(id)arg5 mpin:(id)arg6 providerType:(id)arg7 receiverFBHandleId:(id)arg8 receiverHandle:(id)arg9 receiverJID:(id)arg10 referenceMessageID:(id)arg11 senderFBHandleId:(id)arg12 senderHandle:(id)arg13 transactionId:(id)arg14;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
