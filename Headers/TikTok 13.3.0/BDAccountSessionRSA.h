//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BDAccountSessionRSA : NSObject
{
    struct __SecKey *_privateKeyRefrence;
}

- (id)convertHexStrToData:(id)arg1;
- (struct __SecKey *)getPrivateKeyRefrence;
- (id)rsaDecryptData:(id)arg1;
- (_Bool)authChangeTokenWithHexString:(id)arg1 token:(id)arg2;

@end

