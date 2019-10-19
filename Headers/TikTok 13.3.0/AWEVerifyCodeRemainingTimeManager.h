//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSAccountMessage-Protocol.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface AWEVerifyCodeRemainingTimeManager : NSObject <HTSAccountMessage>
{
    _Bool _isSendViaWhatsAPP;
    NSNumber *_isNewUserFromLoginType;
    NSMutableDictionary *_remainingTimeData;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *remainingTimeData; // @synthesize remainingTimeData=_remainingTimeData;
@property(retain, nonatomic) NSNumber *isNewUserFromLoginType; // @synthesize isNewUserFromLoginType=_isNewUserFromLoginType;
@property(nonatomic) _Bool isSendViaWhatsAPP; // @synthesize isSendViaWhatsAPP=_isSendViaWhatsAPP;
- (void).cxx_destruct;
- (void)setTimeWithSeconds:(unsigned long long)arg1 forType:(unsigned long long)arg2 phoneNumber:(id)arg3;
- (unsigned long long)remainingSecondsForType:(unsigned long long)arg1 phoneNumber:(id)arg2;
- (_Bool)isValidForType:(unsigned long long)arg1 phoneNumber:(id)arg2;
- (void)clearForType:(unsigned long long)arg1 phoneNumber:(id)arg2;
- (void)clearDataAfterLoginSuccess;
- (void)didFinishLogin:(_Bool)arg1 platform:(unsigned long long)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

