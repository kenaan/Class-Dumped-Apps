//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEPhoneEmailRegisterLoginManager : NSObject
{
}

+ (void)validateSMSCodeWithCode:(id)arg1 captcha:(id)arg2 sharkTicket:(id)arg3 type:(unsigned long long)arg4 ticketBlock:(CDUnknownBlockType)arg5;
+ (unsigned long long)platformFromString:(id)arg1;
+ (void)persistenceUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)bindWithPhoneNumber:(id)arg1 code:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getNewImageCaptchaWithCompletion:(CDUnknownBlockType)arg1;
+ (void)setPasswordWhenSignedInWithCurrentPassword:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)updatePasswordWhenSignedInWithCurrentPassword:(id)arg1 newPassword:(id)arg2 verifyToken:(id)arg3 trackInfoDict:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)emailRegisterWithEmail:(id)arg1 password:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)checkEmailRegisteredWithEmail:(id)arg1 trackInfoDict:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)notifyLoginWithUser:(id)arg1 forPlatform:(unsigned long long)arg2;
+ (void)_sendWhatsAPPCodeWithPhoneNumber:(id)arg1 type:(unsigned long long)arg2 captcha:(id)arg3 sharkTicket:(id)arg4 trackInfoDict:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)resendWhatsAPPCodeWithPhoneNumber:(id)arg1 trackInfoDict:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)sendWhatsAPPCodeWithPhoneNumber:(id)arg1 trackInfoDict:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)checkPhoneRegisteredBySendWhatsAPPCodeWithPhoneNumber:(id)arg1 trackInfoDict:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_sendSMSCodeWithPhoneNumber:(id)arg1 type:(unsigned long long)arg2 captcha:(id)arg3 sharkTicket:(id)arg4 trackInfoDict:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)resendSMSCodeWithBindedPhoneNumber:(id)arg1 trackInfoDict:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)sendSMSCodeWithBindedPhoneNumber:(id)arg1 trackInfoDict:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)resendSMSCodeWithPhoneNumber:(id)arg1 sharkTicket:(id)arg2 trackInfoDict:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)sendSMSCodeWithPhoneNumber:(id)arg1 sharkTicket:(id)arg2 trackInfoDict:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)resendSMSCodeWithPhoneNumber:(id)arg1 trackInfoDict:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)sendSMSCodeWithPhoneNumber:(id)arg1 trackInfoDict:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)checkPhoneRegisteredBySendSMSCodeWithPhoneNumber:(id)arg1 trackInfoDict:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)registerWithPhoneNumber:(id)arg1 code:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)loginOrRegisterWithPhoneNumber:(id)arg1 code:(id)arg2 platform:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)smsLoginContinueWithPhoneNumber:(id)arg1 codeToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)onlyLoginWithPhoneNumber:(id)arg1 code:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)loginWithEmail:(id)arg1 orUserName:(id)arg2 orPhoneNumber:(id)arg3 password:(id)arg4 captcha:(id)arg5 verifyToken:(id)arg6 trackInfoDict:(id)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)verifyAgeGateWithBirthday:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

