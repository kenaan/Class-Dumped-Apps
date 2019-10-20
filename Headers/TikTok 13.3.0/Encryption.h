//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Encryption : NSObject
{
}

+ (id)convertDataToHexStr:(id)arg1;
+ (int)stringToInt:(int)arg1;
+ (id)hexStringToByteArray:(id)arg1;
+ (id)AES256ParmDecryptWithKey:(id)arg1 Decrypttext:(id)arg2;
+ (id)aesEncryptWithKey:(id)arg1 encryptData:(id)arg2;
+ (id)stripPublicKeyHeader:(id)arg1;
+ (id)stripPrivateKeyHeader:(id)arg1;
+ (struct __SecKey *)addPrivateKey:(id)arg1;
+ (struct __SecKey *)addPublicKey:(id)arg1;
+ (id)RSAdecryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;
+ (id)rsaEncryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2 errorinfo:(id *)arg3;
+ (void)decryptInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)encryptInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
