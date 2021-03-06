//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBusinessLogic.h"

#import "SCPhoneEntryDelegate-Protocol.h"

@class NSString, SCPhoneNumber;
@protocol SCPasswordResetInitiator, SCPhoneEntry, SCRecoverPasswordPhoneEntryDelegate;

@interface SCRecoverPasswordPhoneEntryBusinessLogic : SCBusinessLogic <SCPhoneEntryDelegate>
{
    id <SCRecoverPasswordPhoneEntryDelegate> _delegate;
    id <SCPhoneEntry> _phoneEntry;
    id <SCPasswordResetInitiator> _passwordResetInitiator;
    NSString *_usernameOrEmail;
    unsigned long long _codeDeliveryMechanism;
    CDUnknownBlockType _completion;
    SCPhoneNumber *_phoneNumber;
}

- (void).cxx_destruct;
- (void)_passwordResetInitiationSucceeded:(id)arg1 codeSentViaSMS:(_Bool)arg2;
- (void)_passwordResetInitiationFailed:(id)arg1;
- (void)_initiatePasswordReset:(unsigned long long)arg1;
- (void)phoneEntryDidSelectPhoneNumber:(id)arg1;
- (void)phoneEntryDidUpdatePhoneNumber:(id)arg1;
- (void)phoneEntryDidSubmitPhoneNumber:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleAction:(id)arg1;
- (id)initWithDelegate:(id)arg1 phoneEntry:(id)arg2 passwordResetInitiator:(id)arg3 usernameOrEmail:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

